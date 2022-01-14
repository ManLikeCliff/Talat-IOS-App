using System;
using System.Net.Http;
using System.Text;
using System.Threading.Tasks;

namespace Talat.Utils
{
    public class NetworkUtil
    {
        private static HttpClientHandler insecureHandler;
        private static HttpClient client;
        private static NetworkUtil network;

        public NetworkUtil()
        {
            
        }

        public static NetworkUtil networkUtil()
        {
            if (network == null)
            {
                network = new NetworkUtil();
                insecureHandler = GetInsecureHandler();
                client = new HttpClient(insecureHandler);
            }
            return network;
        }

       
        internal static string baseUrl = "https://tipproj.azurewebsites.net/api/";
        internal static async Task<string> PostGeneralRequestAsyc(string actionName, string mrawData)
        {
            string mresult = "";
            try
            {
                using (var mclient = new HttpClient() { BaseAddress = new Uri(baseUrl) })
                {
                    mclient.Timeout = TimeSpan.FromMinutes(1);
                   // HttpResponseMessage response = await mclient.PostAsJsonAsync($"{actionName}/", mrawData);
                    var response = await mclient.PostAsync($"{actionName}/", new StringContent(mrawData, Encoding.UTF8, "application/json")).ConfigureAwait(false);
                    if (response.IsSuccessStatusCode)
                    {
                        var result = await response.Content.ReadAsStringAsync();
                        return result;
                    }
                    else
                    {
                        return null;
                    }
                }
            }
            catch (Exception ex)
            {
                string msg = ex.Message;
                mresult = ex.Message;
            }
            return mresult;
        }
  
        internal static async Task<string> PostGeneralQueryAsyc(string actionName, string mrawData, string queryString, string queryKey)
        {
            string mresult = "";
            try
            {
                using (var mclient = new HttpClient() { BaseAddress = new Uri(baseUrl) })
                {
                    mclient.Timeout = TimeSpan.FromMinutes(1);
                  ;
                    var response = await mclient.PostAsync($"{actionName}?{queryKey}={queryString}", new StringContent(mrawData, Encoding.UTF8, "application/json")).ConfigureAwait(false);
                    if (response.IsSuccessStatusCode)
                    {
                        var result = await response.Content.ReadAsStringAsync();
                        return result;
                    }
                    else
                    {
                        return null;
                    }
                }
            }
            catch (Exception ex)
            {
                string msg = ex.Message;
                mresult = ex.Message;
            }
            return mresult;
        }
        internal static async Task<string> GetQueryAsyc(string actionName, string queryString, string queryKey)
        {
            string mresult = "";
            try
            {
                using (var mclient = new HttpClient() { BaseAddress = new Uri(baseUrl) })
                {
                    mclient.Timeout = TimeSpan.FromMinutes(1);
                    ;
                    var response = await mclient.GetAsync($"{actionName}?{queryKey}={queryString}");
                    if (response.IsSuccessStatusCode)
                    {
                        var result = await response.Content.ReadAsStringAsync();
                        return result;
                    }
                    else
                    {
                        return null;
                    }
                }
            }
            catch (Exception ex)
            {
                string msg = ex.Message;
                mresult = ex.Message;
            }
            return mresult;
        }










        public static HttpClientHandler GetInsecureHandler()
        {
            HttpClientHandler handler = new HttpClientHandler();
            handler.ServerCertificateCustomValidationCallback = (message, cert, chain, errors) =>
            {
                if (cert.Issuer.Equals("CN=localhost"))
                    return true;
                return errors == System.Net.Security.SslPolicyErrors.None;
            };
            return handler;
        }

    }
}

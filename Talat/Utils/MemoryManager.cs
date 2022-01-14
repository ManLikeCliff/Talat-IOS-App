using System;
using Foundation;
using Newtonsoft.Json;
using Talat.Models;

namespace Talat.Utils
{
    public class MemoryManager
    {
        public MemoryManager()
        {

        }


        public static void setUserAccountLog(LoginResponse loginResponse, string key)
        {
            var preference = NSUserDefaults.StandardUserDefaults;
            string acct = JsonConvert.SerializeObject(loginResponse);
            preference.SetString(acct,key);
        }

        public static LoginResponse getUseAccountLogin(string key)
        {
            var preference = NSUserDefaults.StandardUserDefaults;
            string mRaw = preference.StringForKey(key);
            if(!string.IsNullOrEmpty(mRaw))
            {
                LoginResponse login = JsonConvert.DeserializeObject<LoginResponse>(mRaw);
                return login;
            }
            return null;
        }

        //Clear the preference at the point of logout

        public static void clearPreference(string key)
        {
            var prefence = NSUserDefaults.StandardUserDefaults;
            prefence.RemoveObject(key);
        }


        public static void setUserString(string value, string key)
        {
            var preference = NSUserDefaults.StandardUserDefaults;
            preference.SetString(value, key);
        }

        public static string getUserString(string key)
        {
            var preference = NSUserDefaults.StandardUserDefaults;
            string mRaw = preference.StringForKey(key);
            if (!string.IsNullOrEmpty(mRaw))
            {
                return mRaw;
            }
            return null;
        }
    }
}

using System;
namespace Talat.Models
{
    public class DTO
    {
        public DTO()
        {
        }
    }

    public class LoginModel
    {
        public string email { get; set; }
        public string password { get; set; }
    }

    public class LoginResponse
    {
        public string acctNumber { get; set; }
        public string acctName { get; set; }
        public string email { get; set; }
        public double acctBalance { get; set; }
    }

    public class SignupModel
    {
        public string firstName { get; set; }
        public string lastName { get; set; }
        public string email { get; set; }
        public string transactionPin { get; set; }
        public string password { get; set; }

        public SignupModel(string firstName, string lastName, string email, string transactionPin, string password)
        {
            this.firstName = firstName;
            this.lastName = lastName;
            this.email = email;
            this.transactionPin = transactionPin;
            this.password = password;
        }
    }

    public class SignupResponse
    {
        public string acctNumber { get; set; }
        public string acctName { get; set; }
        public string email { get; set; }
        public decimal acctBalance { get; set; }
    }


    public class WalletDetailsResponse
    {
        public string walletBalance { get; set; }
        public string acctNumber{ get; set; }
        public int walletId{ get; set; }
        public string tipPercent { get; set; }
        public bool tipStatus { get; set; }
    }

    public class TipPostingClass
    {
        public string tipPercent { get; set; }
        public bool tipStatus { get; set; }
    }

    public class SendMoneyClass
    {
        public string toAccount { get; set; }
        public string transactionPin { get; set; }
        public decimal amount { get; set; }

    }
    public class SendMoneyResponse
    {
        public string transactionAmount { get; set; }
        public string tipPercent { get; set; }
        public decimal tipAmount { get; set; }
        public string date { get; set; }

    }


}

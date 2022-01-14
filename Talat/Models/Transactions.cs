using System;
namespace Talat.Models
{
    public class Transactions
    {
        public string transactionUniqueReference { get; set; }
        public decimal transactionAmount { get; set; }
        public string transactionSourceAccount { get; set; }
        public string transactionDestinationAccount { get; set; }
        public string transactionDate { get; set; }
        public string tipPercent { get; set; }
        public decimal tipAmount { get; set; }
        public string date { get; set; }

        public Transactions(string transID, decimal transAmount, string transSourceAcc, string transRecipientAcc, string transDate)
        {
            this.transactionAmount = transAmount;
            this.transactionUniqueReference = transID;
            this.transactionSourceAccount = transSourceAcc;
            this.transactionDestinationAccount = transRecipientAcc;
            this.transactionDate = transDate;
        }
    }
}

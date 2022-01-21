using System;
namespace Talat.Models
{
    public class TipTransactions
    {
        public decimal transactionAmount { get; set; }
        public string tipPercent { get; set; }
        public decimal tipAmount { get; set; }
        public string date { get; set; }

        public TipTransactions(string tipTransPercent, decimal tipTransAmount, decimal tipAmount, string tipDate)
        {
            this.transactionAmount = tipTransAmount;
            this.tipAmount = tipAmount;
            this.tipPercent = tipTransPercent;
            this.date = tipDate;
        }
    }
}

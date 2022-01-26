using System;
using System.Collections.Generic;
using Foundation;
using Talat.Models;
using UIKit;

namespace Talat.TableSources
{
    public class TransactionTableSource : UITableViewSource
    {

        List<Transactions> TableItems;
        //int segMentIndex;

        public TransactionTableSource(List<Transactions> tableItems)
        {
            this.TableItems = tableItems;
            //this.segMentIndex = _SegMentIndex;
        }

        public override UITableViewCell GetCell(UITableView tableView, NSIndexPath indexPath)
        {
            var cell = tableView.DequeueReusableCell("transactionCell") as CustomTransactionCell;

            if(cell == null)
            {
                cell = new CustomTransactionCell();
            }
           
                cell.PopulateCell(TableItems[indexPath.Row].transactionAmount,
                    TableItems[indexPath.Row].transactionDestinationAccount,
                    TableItems[indexPath.Row].transactionSourceAccount,
                    TableItems[indexPath.Row].transactionDate,
                    TableItems[indexPath.Row].transactionUniqueReference);
         

            return cell;
        }

        public override nint RowsInSection(UITableView tableview, nint section)
        {
            return TableItems.Count;
        }

        //public void swapData(List<Transactions> transactions,int segMentINdex)
        //{

        //}

        public override nfloat GetHeightForRow(UITableView tableView, NSIndexPath indexPath)
        {
            return 140f;
        }

        public override void RowSelected(UITableView tableView, NSIndexPath indexPath)
        {
            tableView.DeselectRow(indexPath, true);
        }
    }
}

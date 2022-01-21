using System;
using System.Collections.Generic;
using Foundation;
using Talat.Models;
using UIKit;

namespace Talat.TableSources
{
    public class TipTransactionTableSource : UITableViewSource
    {
        List<TipTransactions> TableItems;

        public TipTransactionTableSource(List<TipTransactions> tableItems)
        {
            this.TableItems = tableItems;

        }

        public override UITableViewCell GetCell(UITableView tableView, NSIndexPath indexPath)
        {
            var cell = tableView.DequeueReusableCell("tipTransactionCell") as CustomTipTransactionCell;

            if (cell == null)
            {
                cell = new CustomTipTransactionCell();
            }

            cell.PopulateCell(TableItems[indexPath.Row].transactionAmount,
                TableItems[indexPath.Row].tipAmount,
                TableItems[indexPath.Row].tipPercent,
                TableItems[indexPath.Row].date);


            return cell;
        }

        public override nint RowsInSection(UITableView tableview, nint section)
        {
            return TableItems.Count;
        }

        public override nfloat GetHeightForRow(UITableView tableView, NSIndexPath indexPath)
        {
            return 130f;
        }

        public override void RowSelected(UITableView tableView, NSIndexPath indexPath)
        {
            tableView.DeselectRow(indexPath, true);
        }
    }
}

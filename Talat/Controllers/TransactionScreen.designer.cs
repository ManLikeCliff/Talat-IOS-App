// WARNING
//
// This file has been generated automatically by Visual Studio to store outlets and
// actions made in the UI designer. If it is removed, they will be lost.
// Manual changes to this file may not be handled correctly.
//
using Foundation;
using System.CodeDom.Compiler;

namespace Talat
{
	[Register ("TransactionScreen")]
	partial class TransactionScreen
	{
		[Outlet]
		UIKit.UISegmentedControl segmentedControl { get; set; }

		[Outlet]
		UIKit.UITableView transactionTableView { get; set; }

		[Outlet]
		UIKit.UILabel transCardBalance { get; set; }

		[Outlet]
		UIKit.UILabel transCardName { get; set; }

		[Outlet]
		UIKit.UILabel transCardNumber { get; set; }

		[Outlet]
		UIKit.UIActivityIndicatorView transLoader { get; set; }
		
		void ReleaseDesignerOutlets ()
		{
			if (transactionTableView != null) {
				transactionTableView.Dispose ();
				transactionTableView = null;
			}

			if (transCardBalance != null) {
				transCardBalance.Dispose ();
				transCardBalance = null;
			}

			if (transCardName != null) {
				transCardName.Dispose ();
				transCardName = null;
			}

			if (transCardNumber != null) {
				transCardNumber.Dispose ();
				transCardNumber = null;
			}

			if (transLoader != null) {
				transLoader.Dispose ();
				transLoader = null;
			}

			if (segmentedControl != null) {
				segmentedControl.Dispose ();
				segmentedControl = null;
			}
		}
	}
}

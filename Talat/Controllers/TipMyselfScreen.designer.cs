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
	[Register ("TipMyselfScreen")]
	partial class TipMyselfScreen
	{
		[Outlet]
		UIKit.UISwitch showRestTMSwitch { get; set; }

		[Outlet]
		UIKit.UITableView tipTransactionTableView { get; set; }

		[Outlet]
		UIKit.UITextField TMPercentageValue { get; set; }

		[Outlet]
		UIKit.UIStackView TMRestView { get; set; }

		[Outlet]
		UIKit.UITextField WhenToGetTipped { get; set; }
		
		void ReleaseDesignerOutlets ()
		{
			if (showRestTMSwitch != null) {
				showRestTMSwitch.Dispose ();
				showRestTMSwitch = null;
			}

			if (TMPercentageValue != null) {
				TMPercentageValue.Dispose ();
				TMPercentageValue = null;
			}

			if (TMRestView != null) {
				TMRestView.Dispose ();
				TMRestView = null;
			}

			if (WhenToGetTipped != null) {
				WhenToGetTipped.Dispose ();
				WhenToGetTipped = null;
			}

			if (tipTransactionTableView != null) {
				tipTransactionTableView.Dispose ();
				tipTransactionTableView = null;
			}
		}
	}
}

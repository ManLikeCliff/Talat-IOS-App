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
	[Register ("ToTransferSuccess")]
	partial class ToTransferSuccess
	{
		[Outlet]
		UIKit.UIView toSuccessRestView { get; set; }

		[Outlet]
		UIKit.UILabel transferSuccessAccName { get; set; }

		[Outlet]
		UIKit.UILabel transferSuccessAmount { get; set; }

		[Outlet]
		UIKit.UILabel transferSuccessTipAmount { get; set; }

		[Outlet]
		UIKit.UILabel transferSuccessTipPercent { get; set; }

		[Outlet]
		UIKit.UIButton transferSuccessToDashboard { get; set; }
		
		void ReleaseDesignerOutlets ()
		{
			if (transferSuccessAccName != null) {
				transferSuccessAccName.Dispose ();
				transferSuccessAccName = null;
			}

			if (transferSuccessAmount != null) {
				transferSuccessAmount.Dispose ();
				transferSuccessAmount = null;
			}

			if (transferSuccessToDashboard != null) {
				transferSuccessToDashboard.Dispose ();
				transferSuccessToDashboard = null;
			}

			if (transferSuccessTipAmount != null) {
				transferSuccessTipAmount.Dispose ();
				transferSuccessTipAmount = null;
			}

			if (transferSuccessTipPercent != null) {
				transferSuccessTipPercent.Dispose ();
				transferSuccessTipPercent = null;
			}

			if (toSuccessRestView != null) {
				toSuccessRestView.Dispose ();
				toSuccessRestView = null;
			}
		}
	}
}

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
	[Register ("DashboardScreen")]
	partial class DashboardScreen
	{
		[Outlet]
		UIKit.UILabel accBalanceLabel { get; set; }

		[Outlet]
		UIKit.UILabel accNameLabel { get; set; }

		[Outlet]
		UIKit.UILabel accNumberLabel { get; set; }

		[Outlet]
		UIKit.UIPageControl dashPC { get; set; }

		[Outlet]
		UIKit.UIScrollView dashSV { get; set; }

		[Outlet]
		UIKit.UIView dashV { get; set; }

		[Outlet]
		UIKit.UIButton toTransactionPage { get; set; }
		
		void ReleaseDesignerOutlets ()
		{
			if (accBalanceLabel != null) {
				accBalanceLabel.Dispose ();
				accBalanceLabel = null;
			}

			if (accNameLabel != null) {
				accNameLabel.Dispose ();
				accNameLabel = null;
			}

			if (accNumberLabel != null) {
				accNumberLabel.Dispose ();
				accNumberLabel = null;
			}

			if (dashPC != null) {
				dashPC.Dispose ();
				dashPC = null;
			}

			if (dashSV != null) {
				dashSV.Dispose ();
				dashSV = null;
			}

			if (dashV != null) {
				dashV.Dispose ();
				dashV = null;
			}

			if (toTransactionPage != null) {
				toTransactionPage.Dispose ();
				toTransactionPage = null;
			}
		}
	}
}

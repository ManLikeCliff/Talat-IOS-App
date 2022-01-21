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
		UIKit.UIButton dashCopyClipboard { get; set; }

		[Outlet]
		UIKit.UIImageView dashFirstCard { get; set; }

		[Outlet]
		UIKit.UIPageControl dashPageControl { get; set; }

		[Outlet]
		UIKit.UIImageView dashSecondView { get; set; }

		[Outlet]
		UIKit.UIScrollView dashSV { get; set; }

		[Outlet]
		UIKit.UIView dashView { get; set; }

		[Outlet]
		UIKit.UILabel tipBalanceLabel { get; set; }

		[Outlet]
		UIKit.UILabel tipPercentageLabel { get; set; }

		[Outlet]
		UIKit.UILabel tipStatusLabel { get; set; }

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

			if (dashCopyClipboard != null) {
				dashCopyClipboard.Dispose ();
				dashCopyClipboard = null;
			}

			if (dashFirstCard != null) {
				dashFirstCard.Dispose ();
				dashFirstCard = null;
			}

			if (dashPageControl != null) {
				dashPageControl.Dispose ();
				dashPageControl = null;
			}

			if (dashSecondView != null) {
				dashSecondView.Dispose ();
				dashSecondView = null;
			}

			if (dashSV != null) {
				dashSV.Dispose ();
				dashSV = null;
			}

			if (dashView != null) {
				dashView.Dispose ();
				dashView = null;
			}

			if (toTransactionPage != null) {
				toTransactionPage.Dispose ();
				toTransactionPage = null;
			}

			if (tipBalanceLabel != null) {
				tipBalanceLabel.Dispose ();
				tipBalanceLabel = null;
			}

			if (tipPercentageLabel != null) {
				tipPercentageLabel.Dispose ();
				tipPercentageLabel = null;
			}

			if (tipStatusLabel != null) {
				tipStatusLabel.Dispose ();
				tipStatusLabel = null;
			}
		}
	}
}

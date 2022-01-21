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
	[Register ("CustomTipTransactionCell")]
	partial class CustomTipTransactionCell
	{
		[Outlet]
		UIKit.UILabel tippedAmount { get; set; }

		[Outlet]
		UIKit.UILabel tippedDate { get; set; }

		[Outlet]
		UIKit.UILabel tippedPercent { get; set; }

		[Outlet]
		UIKit.UILabel tippedTransAmount { get; set; }
		
		void ReleaseDesignerOutlets ()
		{
			if (tippedTransAmount != null) {
				tippedTransAmount.Dispose ();
				tippedTransAmount = null;
			}

			if (tippedAmount != null) {
				tippedAmount.Dispose ();
				tippedAmount = null;
			}

			if (tippedPercent != null) {
				tippedPercent.Dispose ();
				tippedPercent = null;
			}

			if (tippedDate != null) {
				tippedDate.Dispose ();
				tippedDate = null;
			}
		}
	}
}

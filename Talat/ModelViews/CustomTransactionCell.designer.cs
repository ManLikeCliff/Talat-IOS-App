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
	[Register ("CustomTransactionCell")]
	partial class CustomTransactionCell
	{
		[Outlet]
		UIKit.UILabel amountLabel { get; set; }

		[Outlet]
		UIKit.UILabel dateLabel { get; set; }

		[Outlet]
		UIKit.UILabel recipientLabel { get; set; }

		[Outlet]
		UIKit.UILabel referenceLabel { get; set; }

		[Outlet]
		UIKit.UILabel senderLabel { get; set; }
		
		void ReleaseDesignerOutlets ()
		{
			if (amountLabel != null) {
				amountLabel.Dispose ();
				amountLabel = null;
			}

			if (recipientLabel != null) {
				recipientLabel.Dispose ();
				recipientLabel = null;
			}

			if (senderLabel != null) {
				senderLabel.Dispose ();
				senderLabel = null;
			}

			if (dateLabel != null) {
				dateLabel.Dispose ();
				dateLabel = null;
			}

			if (referenceLabel != null) {
				referenceLabel.Dispose ();
				referenceLabel = null;
			}
		}
	}
}

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
	[Register ("SendMoneyScreen")]
	partial class SendMoneyScreen
	{
		[Outlet]
		UIKit.UITextField amountToSend { get; set; }

		[Outlet]
		UIKit.UITextField banksTextField { get; set; }

		[Outlet]
		UIKit.UIButton beneficiaryBtn { get; set; }

		[Outlet]
		UIKit.UIImageView bgImage { get; set; }

		[Outlet]
		UIKit.UITextField enterAccNum { get; set; }

		[Outlet]
		UIKit.UIButton makeTransferBtn { get; set; }

		[Outlet]
		UIKit.UILabel pinAccountLabel { get; set; }

		[Outlet]
		UIKit.UILabel pinAmountLabel { get; set; }

		[Outlet]
		UIKit.UIButton pinCancelBtn { get; set; }

		[Outlet]
		UIKit.UILabel pinNameLabel { get; set; }

		[Outlet]
		UIKit.UIView pinOverlayBg { get; set; }

		[Outlet]
		UIKit.UITextField pinTextField { get; set; }

		[Outlet]
		UIKit.UIView pinView { get; set; }

		[Outlet]
		UIKit.UILabel recipientAccNum { get; set; }

		[Outlet]
		UIKit.UILabel recipientLabel { get; set; }

		[Outlet]
		UIKit.UILabel sendMoneyAccountLabel { get; set; }

		[Outlet]
		UIKit.UIActivityIndicatorView sendMoneyLoader { get; set; }

		[Outlet]
		UIKit.UIStackView sendMoneyRestView { get; set; }

		[Outlet]
		UIKit.UISwitch showRestSMSwitch { get; set; }

		[Outlet]
		UIKit.UILabel userAmountLabel { get; set; }
		
		void ReleaseDesignerOutlets ()
		{
			if (amountToSend != null) {
				amountToSend.Dispose ();
				amountToSend = null;
			}

			if (banksTextField != null) {
				banksTextField.Dispose ();
				banksTextField = null;
			}

			if (beneficiaryBtn != null) {
				beneficiaryBtn.Dispose ();
				beneficiaryBtn = null;
			}

			if (bgImage != null) {
				bgImage.Dispose ();
				bgImage = null;
			}

			if (enterAccNum != null) {
				enterAccNum.Dispose ();
				enterAccNum = null;
			}

			if (makeTransferBtn != null) {
				makeTransferBtn.Dispose ();
				makeTransferBtn = null;
			}

			if (pinAccountLabel != null) {
				pinAccountLabel.Dispose ();
				pinAccountLabel = null;
			}

			if (pinAmountLabel != null) {
				pinAmountLabel.Dispose ();
				pinAmountLabel = null;
			}

			if (pinCancelBtn != null) {
				pinCancelBtn.Dispose ();
				pinCancelBtn = null;
			}

			if (pinNameLabel != null) {
				pinNameLabel.Dispose ();
				pinNameLabel = null;
			}

			if (pinOverlayBg != null) {
				pinOverlayBg.Dispose ();
				pinOverlayBg = null;
			}

			if (pinTextField != null) {
				pinTextField.Dispose ();
				pinTextField = null;
			}

			if (pinView != null) {
				pinView.Dispose ();
				pinView = null;
			}

			if (recipientAccNum != null) {
				recipientAccNum.Dispose ();
				recipientAccNum = null;
			}

			if (recipientLabel != null) {
				recipientLabel.Dispose ();
				recipientLabel = null;
			}

			if (sendMoneyAccountLabel != null) {
				sendMoneyAccountLabel.Dispose ();
				sendMoneyAccountLabel = null;
			}

			if (sendMoneyLoader != null) {
				sendMoneyLoader.Dispose ();
				sendMoneyLoader = null;
			}

			if (sendMoneyRestView != null) {
				sendMoneyRestView.Dispose ();
				sendMoneyRestView = null;
			}

			if (userAmountLabel != null) {
				userAmountLabel.Dispose ();
				userAmountLabel = null;
			}

			if (showRestSMSwitch != null) {
				showRestSMSwitch.Dispose ();
				showRestSMSwitch = null;
			}
		}
	}
}

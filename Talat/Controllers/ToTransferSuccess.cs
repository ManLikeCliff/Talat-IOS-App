// This file has been autogenerated from a class added in the UI designer.

using System;

using Foundation;
using Talat.Models;
using UIKit;

namespace Talat
{
	public partial class ToTransferSuccess : UIViewController
	{

		public decimal amountToSend;
		public string recipientLabel;
		public SendMoneyResponse sendMoneyResponse;
		public string message;


		public ToTransferSuccess(IntPtr handle) : base(handle)
		{

		}


		public override void ViewDidLoad()
		{
			base.ViewDidLoad();

			NavigationItem.HidesBackButton = true;

			transferSuccessToDashboard.TouchUpInside += TransferSuccessToDashboard_TouchUpInside;

			transferSuccessAmount.Text = "₦" + amountToSend;
			transferSuccessAccName.Text = recipientLabel;
		}

        private void TransferSuccessToDashboard_TouchUpInside(object sender, EventArgs e)
        {
			foreach (var vc in NavigationController.ViewControllers)
			{
				if(vc is DashboardScreen)
                {
					NavigationController?.PopToViewController(vc, animated: true);

				}
			}

		}
	}
}
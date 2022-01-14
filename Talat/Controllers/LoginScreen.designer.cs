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
	[Register ("LoginScreen")]
	partial class LoginScreen
	{
		[Outlet]
		UIKit.UITextField EmailTextView { get; set; }

		[Outlet]
		UIKit.UIActivityIndicatorView loginLoading { get; set; }

		[Outlet]
		UIKit.UIButton LoginToDashboard { get; set; }

		[Outlet]
		UIKit.UITextField PasswordTextView { get; set; }
		
		void ReleaseDesignerOutlets ()
		{
			if (EmailTextView != null) {
				EmailTextView.Dispose ();
				EmailTextView = null;
			}

			if (LoginToDashboard != null) {
				LoginToDashboard.Dispose ();
				LoginToDashboard = null;
			}

			if (PasswordTextView != null) {
				PasswordTextView.Dispose ();
				PasswordTextView = null;
			}

			if (loginLoading != null) {
				loginLoading.Dispose ();
				loginLoading = null;
			}
		}
	}
}

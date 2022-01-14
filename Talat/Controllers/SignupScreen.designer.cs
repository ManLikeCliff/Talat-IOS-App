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
	[Register ("SignupScreen")]
	partial class SignupScreen
	{
		[Outlet]
		UIKit.UIButton createUserBtn { get; set; }

		[Outlet]
		UIKit.UITextField emailSignupTextField { get; set; }

		[Outlet]
		UIKit.UITextField fnameTextField { get; set; }

		[Outlet]
		UIKit.UITextField lnameTextField { get; set; }

		[Outlet]
		UIKit.UITextField pwordSignupTextField { get; set; }

		[Outlet]
		UIKit.UIActivityIndicatorView signupLoader { get; set; }

		[Outlet]
		UIKit.UITextField tPinTextField { get; set; }
		
		void ReleaseDesignerOutlets ()
		{
			if (createUserBtn != null) {
				createUserBtn.Dispose ();
				createUserBtn = null;
			}

			if (emailSignupTextField != null) {
				emailSignupTextField.Dispose ();
				emailSignupTextField = null;
			}

			if (fnameTextField != null) {
				fnameTextField.Dispose ();
				fnameTextField = null;
			}

			if (lnameTextField != null) {
				lnameTextField.Dispose ();
				lnameTextField = null;
			}

			if (pwordSignupTextField != null) {
				pwordSignupTextField.Dispose ();
				pwordSignupTextField = null;
			}

			if (tPinTextField != null) {
				tPinTextField.Dispose ();
				tPinTextField = null;
			}

			if (signupLoader != null) {
				signupLoader.Dispose ();
				signupLoader = null;
			}
		}
	}
}

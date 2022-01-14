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
	[Register ("Test1")]
	partial class Test1
	{
		[Outlet]
		UIKit.UIPageControl MyPager { get; set; }

		[Outlet]
		UIKit.UIScrollView MyScrollView { get; set; }

		[Outlet]
		UIKit.UIView MyView { get; set; }

		[Outlet]
		UIKit.UILabel Page1 { get; set; }

		[Outlet]
		UIKit.UILabel Page2 { get; set; }

		[Outlet]
		UIKit.UILabel Page3 { get; set; }
		
		void ReleaseDesignerOutlets ()
		{
			if (MyView != null) {
				MyView.Dispose ();
				MyView = null;
			}

			if (Page1 != null) {
				Page1.Dispose ();
				Page1 = null;
			}

			if (Page2 != null) {
				Page2.Dispose ();
				Page2 = null;
			}

			if (Page3 != null) {
				Page3.Dispose ();
				Page3 = null;
			}

			if (MyScrollView != null) {
				MyScrollView.Dispose ();
				MyScrollView = null;
			}

			if (MyPager != null) {
				MyPager.Dispose ();
				MyPager = null;
			}
		}
	}
}

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
	[Register ("ScrollViewPage")]
	partial class ScrollViewPage
	{
		[Outlet]
		UIKit.UIPageControl myPager { get; set; }

		[Outlet]
		UIKit.UIScrollView myScroll { get; set; }

		[Outlet]
		UIKit.UIView myView { get; set; }

		[Outlet]
		UIKit.UILabel Slide1 { get; set; }

		[Outlet]
		UIKit.UILabel Slide2 { get; set; }

		[Outlet]
		UIKit.UILabel Slide3 { get; set; }
		
		void ReleaseDesignerOutlets ()
		{
			if (myPager != null) {
				myPager.Dispose ();
				myPager = null;
			}

			if (myScroll != null) {
				myScroll.Dispose ();
				myScroll = null;
			}

			if (myView != null) {
				myView.Dispose ();
				myView = null;
			}

			if (Slide1 != null) {
				Slide1.Dispose ();
				Slide1 = null;
			}

			if (Slide2 != null) {
				Slide2.Dispose ();
				Slide2 = null;
			}

			if (Slide3 != null) {
				Slide3.Dispose ();
				Slide3 = null;
			}
		}
	}
}

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
	[Register ("ViewController")]
	partial class ViewController
	{
		[Outlet]
		UIKit.UIScrollView landingScrollView { get; set; }

		[Outlet]
		UIKit.UIView landingView { get; set; }

		[Outlet]
		UIKit.UIPageControl pageControl { get; set; }

		[Outlet]
		UIKit.UILabel Slide1 { get; set; }

		[Outlet]
		UIKit.UILabel Slide2 { get; set; }

		[Outlet]
		UIKit.UILabel Slide3 { get; set; }
		
		void ReleaseDesignerOutlets ()
		{
			if (Slide3 != null) {
				Slide3.Dispose ();
				Slide3 = null;
			}

			if (Slide2 != null) {
				Slide2.Dispose ();
				Slide2 = null;
			}

			if (Slide1 != null) {
				Slide1.Dispose ();
				Slide1 = null;
			}

			if (landingScrollView != null) {
				landingScrollView.Dispose ();
				landingScrollView = null;
			}

			if (landingView != null) {
				landingView.Dispose ();
				landingView = null;
			}

			if (pageControl != null) {
				pageControl.Dispose ();
				pageControl = null;
			}
		}
	}
}

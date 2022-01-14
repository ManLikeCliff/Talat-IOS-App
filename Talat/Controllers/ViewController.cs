using Foundation;
using System;
using System.Collections.Generic;
using UIKit;

namespace Talat
{
    public partial class ViewController : UIViewController
    {
        public ViewController(IntPtr handle) : base(handle)
        {

        }

        public override void ViewDidLoad()
        {
            base.ViewDidLoad();
            landingScrollView.ShowsHorizontalScrollIndicator = false;
            landingScrollView.ContentSize = landingView.Frame.Size;
            landingScrollView.Scrolled += (sender, e) => {
                pageControl.CurrentPage = (nint)(landingScrollView.ContentOffset.X / landingScrollView.Frame.Width);
            };
        }

        public override void DidReceiveMemoryWarning()
        {
            base.DidReceiveMemoryWarning();
            // Release any cached data, images, etc that aren't in use.
        }
    }
}

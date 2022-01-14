using System;
using UIKit;

namespace Talat.Utils
{
    public class Util
    {
        public Util()
        {
        }

        public static void showDialog(string message, string title, UIViewController uIViewController)
        {
            UIAlertController uIAlert = UIAlertController.Create(title, message, UIAlertControllerStyle.Alert);
            var okAction = UIAlertAction.Create("OK", UIAlertActionStyle.Default, null);

            uIAlert.AddAction(okAction);

            uIViewController.PresentViewController(uIAlert, true, null);
        }
    }
}

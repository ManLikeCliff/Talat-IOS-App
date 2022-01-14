// WARNING
// This file has been generated automatically by Visual Studio to
// mirror C# types. Changes in this file made by drag-connecting
// from the UI designer will be synchronized back to C#, but
// more complex manual changes may not transfer correctly.


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


@interface SignupScreen : UIViewController {
	UIButton *_createUserBtn;
	UITextField *_emailSignupTextField;
	UITextField *_fnameTextField;
	UITextField *_lnameTextField;
	UITextField *_pwordSignupTextField;
	UIActivityIndicatorView *_signupLoader;
	UITextField *_tPinTextField;
}

@property (nonatomic, retain) IBOutlet UIButton *createUserBtn;

@property (nonatomic, retain) IBOutlet UITextField *emailSignupTextField;

@property (nonatomic, retain) IBOutlet UITextField *fnameTextField;

@property (nonatomic, retain) IBOutlet UITextField *lnameTextField;

@property (nonatomic, retain) IBOutlet UITextField *pwordSignupTextField;

@property (nonatomic, retain) IBOutlet UIActivityIndicatorView *signupLoader;

@property (nonatomic, retain) IBOutlet UITextField *tPinTextField;

@end

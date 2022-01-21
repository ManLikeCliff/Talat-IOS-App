#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#pragma clang diagnostic ignored "-Wtypedef-redefinition"
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"
#pragma clang diagnostic ignored "-Wunguarded-availability-new"
#define DEBUG 1
#include <stdarg.h>
#include <objc/objc.h>
#include <objc/runtime.h>
#include <objc/message.h>
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <CoreGraphics/CoreGraphics.h>
#import <SafariServices/SafariServices.h>
#import <ContactsUI/ContactsUI.h>
#import <CoreLocation/CoreLocation.h>
#import <QuartzCore/QuartzCore.h>
#import <Contacts/Contacts.h>
#import <AuthenticationServices/AuthenticationServices.h>

@class SceneDelegate;
@class AppDelegate;
@class PasswordField;
@class ViewController;
@class UIPickerViewModel;
@class Talat_BanksPickerModel;
@class Talat_TMChoicePickerModel;
@class Talat_TMPickerModel;
@class SignupSuccessScreen;
@class CustomTransactionCell;
@class ScrollViewPage;
@class Test1;
@class ToTransferSuccess;
@class CustomTipTransactionCell;
@class UITableViewSource;
@class Talat_TableSources_TransactionTableSource;
@class Talat_TableSources_TipTransactionTableSource;
@class DashboardScreen;
@class LoginScreen;
@class SendMoneyScreen;
@class TipMyselfScreen;
@class SignupScreen;
@class TransactionScreen;
@class SFSafariViewControllerDelegate;
@class CNContactPickerDelegate;
@class Foundation_NSDispatcher;
@class __MonoMac_NSSynchronizationContextDispatcher;
@class __Xamarin_NSTimerActionDispatcher;
@class Foundation_NSAsyncDispatcher;
@class __MonoMac_NSAsyncActionDispatcher;
@class __MonoMac_NSAsyncSynchronizationContextDispatcher;
@class Foundation_InternalNSNotificationHandler;
@class NSURLSessionDataDelegate;
@class CLLocationManagerDelegate;
@class UIAdaptivePresentationControllerDelegate;
@class UIKit_UIControlEventProxy;
@class UIActivityItemSource;
@class UIDocumentPickerDelegate;
@class UIImagePickerControllerDelegate;
@class System_Net_Http_NSUrlSessionHandler_WrappedNSInputStream;
@class __NSObject_Disposer;
@class UIKit_UIBarButtonItem_Callback;
@class UIKit_UIView_UIViewAppearance;
@class UIKit_UIControl_UIControlAppearance;
@class __UIGestureRecognizerToken;
@class __UIGestureRecognizerParameterlessToken;
@class __UITapGestureRecognizer;
@class UIKit_UISegmentedControl_UISegmentedControlAppearance;
@class UIKit_UIScrollView__UIScrollViewDelegate;
@class System_Net_Http_NSUrlSessionHandler_NSUrlSessionHandlerDelegate;
@class Xamarin_Essentials_ShareActivityItemSource;
@class Xamarin_Essentials_AuthManager;
@class Xamarin_Essentials_SingleLocationListener;
@class Xamarin_Essentials_Contacts_ContactPickerDelegate;
@class Xamarin_Essentials_FilePicker_PickerDelegate;
@class Xamarin_Essentials_FilePicker_PickerPresentationControllerDelegate;
@class Xamarin_Essentials_MediaPicker_PhotoPickerDelegate;
@class Xamarin_Essentials_MediaPicker_PhotoPickerPresentationControllerDelegate;
@class Xamarin_Essentials_WebAuthenticator_NativeSFSafariViewControllerDelegate;
@class Xamarin_Essentials_WebAuthenticator_ContextProvider;
@class Xamarin_Essentials_Permissions_LocationWhenInUse_ManagerDelegate;
@class OpenTK_Platform_iPhoneOS_CADisplayLinkTimeSource;
@class OpenTK_Platform_iPhoneOS_iPhoneOSGameView;

@interface SceneDelegate : UIResponder<UIWindowSceneDelegate> {
}
	@property (nonatomic, assign) UIWindow * window;
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(UIWindow *) window;
	-(void) setWindow:(UIWindow *)p0;
	-(void) scene:(UIScene *)p0 willConnectToSession:(UISceneSession *)p1 options:(UISceneConnectionOptions *)p2;
	-(void) sceneDidDisconnect:(UIScene *)p0;
	-(void) sceneDidBecomeActive:(UIScene *)p0;
	-(void) sceneWillResignActive:(UIScene *)p0;
	-(void) sceneWillEnterForeground:(UIScene *)p0;
	-(void) sceneDidEnterBackground:(UIScene *)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface AppDelegate : UIResponder<UIApplicationDelegate> {
}
	@property (nonatomic, assign) UIWindow * window;
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(UIWindow *) window;
	-(void) setWindow:(UIWindow *)p0;
	-(BOOL) application:(UIApplication *)p0 didFinishLaunchingWithOptions:(NSDictionary *)p1;
	-(UISceneConfiguration *) application:(UIApplication *)p0 configurationForConnectingSceneSession:(UISceneSession *)p1 options:(UISceneConnectionOptions *)p2;
	-(void) application:(UIApplication *)p0 didDiscardSceneSessions:(NSSet <UISceneSession *>*)p1;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface PasswordField : UITextField {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(BOOL) conformsToProtocol:(void *)p0;
@end

@interface ViewController : UIViewController {
}
	@property (nonatomic, assign) UIScrollView * landingScrollView;
	@property (nonatomic, assign) UIView * landingView;
	@property (nonatomic, assign) UIPageControl * pageControl;
	@property (nonatomic, assign) UILabel * Slide1;
	@property (nonatomic, assign) UILabel * Slide2;
	@property (nonatomic, assign) UILabel * Slide3;
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(UIScrollView *) landingScrollView;
	-(void) setLandingScrollView:(UIScrollView *)p0;
	-(UIView *) landingView;
	-(void) setLandingView:(UIView *)p0;
	-(UIPageControl *) pageControl;
	-(void) setPageControl:(UIPageControl *)p0;
	-(UILabel *) Slide1;
	-(void) setSlide1:(UILabel *)p0;
	-(UILabel *) Slide2;
	-(void) setSlide2:(UILabel *)p0;
	-(UILabel *) Slide3;
	-(void) setSlide3:(UILabel *)p0;
	-(void) viewDidLoad;
	-(void) didReceiveMemoryWarning;
	-(BOOL) conformsToProtocol:(void *)p0;
@end

@interface UIPickerViewModel : NSObject<UIPickerViewDataSource, UIPickerViewDelegate> {
}
	-(id) init;
@end

@interface SignupSuccessScreen : UIViewController {
}
	@property (nonatomic, assign) UIButton * gotoLogin;
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(UIButton *) gotoLogin;
	-(void) setGotoLogin:(UIButton *)p0;
	-(void) viewDidLoad;
	-(void) prepareForSegue:(UIStoryboardSegue *)p0 sender:(NSObject *)p1;
	-(void) viewWillAppear:(BOOL)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
@end

@interface CustomTransactionCell : UITableViewCell {
}
	@property (nonatomic, assign) UILabel * amountLabel;
	@property (nonatomic, assign) UILabel * dateLabel;
	@property (nonatomic, assign) UILabel * recipientLabel;
	@property (nonatomic, assign) UILabel * referenceLabel;
	@property (nonatomic, assign) UILabel * senderLabel;
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(UILabel *) amountLabel;
	-(void) setAmountLabel:(UILabel *)p0;
	-(UILabel *) dateLabel;
	-(void) setDateLabel:(UILabel *)p0;
	-(UILabel *) recipientLabel;
	-(void) setRecipientLabel:(UILabel *)p0;
	-(UILabel *) referenceLabel;
	-(void) setReferenceLabel:(UILabel *)p0;
	-(UILabel *) senderLabel;
	-(void) setSenderLabel:(UILabel *)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface ScrollViewPage : UIViewController {
}
	@property (nonatomic, assign) UIPageControl * myPager;
	@property (nonatomic, assign) UIScrollView * myScroll;
	@property (nonatomic, assign) UIView * myView;
	@property (nonatomic, assign) UIPageControl * secondPager;
	@property (nonatomic, assign) UIImageView * secondPic1;
	@property (nonatomic, assign) UIImageView * secondPic2;
	@property (nonatomic, assign) UIScrollView * secondScroll;
	@property (nonatomic, assign) UIView * secondView;
	@property (nonatomic, assign) UILabel * Slide1;
	@property (nonatomic, assign) UILabel * Slide2;
	@property (nonatomic, assign) UILabel * Slide3;
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(UIPageControl *) myPager;
	-(void) setMyPager:(UIPageControl *)p0;
	-(UIScrollView *) myScroll;
	-(void) setMyScroll:(UIScrollView *)p0;
	-(UIView *) myView;
	-(void) setMyView:(UIView *)p0;
	-(UIPageControl *) secondPager;
	-(void) setSecondPager:(UIPageControl *)p0;
	-(UIImageView *) secondPic1;
	-(void) setSecondPic1:(UIImageView *)p0;
	-(UIImageView *) secondPic2;
	-(void) setSecondPic2:(UIImageView *)p0;
	-(UIScrollView *) secondScroll;
	-(void) setSecondScroll:(UIScrollView *)p0;
	-(UIView *) secondView;
	-(void) setSecondView:(UIView *)p0;
	-(UILabel *) Slide1;
	-(void) setSlide1:(UILabel *)p0;
	-(UILabel *) Slide2;
	-(void) setSlide2:(UILabel *)p0;
	-(UILabel *) Slide3;
	-(void) setSlide3:(UILabel *)p0;
	-(void) viewDidLoad;
	-(BOOL) conformsToProtocol:(void *)p0;
@end

@interface Test1 : UIViewController {
}
	@property (nonatomic, assign) UIPageControl * MyPager;
	@property (nonatomic, assign) UIScrollView * MyScrollView;
	@property (nonatomic, assign) UIView * MyView;
	@property (nonatomic, assign) UILabel * Page1;
	@property (nonatomic, assign) UILabel * Page2;
	@property (nonatomic, assign) UILabel * Page3;
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(UIPageControl *) MyPager;
	-(void) setMyPager:(UIPageControl *)p0;
	-(UIScrollView *) MyScrollView;
	-(void) setMyScrollView:(UIScrollView *)p0;
	-(UIView *) MyView;
	-(void) setMyView:(UIView *)p0;
	-(UILabel *) Page1;
	-(void) setPage1:(UILabel *)p0;
	-(UILabel *) Page2;
	-(void) setPage2:(UILabel *)p0;
	-(UILabel *) Page3;
	-(void) setPage3:(UILabel *)p0;
	-(void) viewDidLoad;
	-(BOOL) conformsToProtocol:(void *)p0;
@end

@interface ToTransferSuccess : UIViewController {
}
	@property (nonatomic, assign) UILabel * transferSuccessAccName;
	@property (nonatomic, assign) UILabel * transferSuccessAmount;
	@property (nonatomic, assign) UIButton * transferSuccessToDashboard;
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(UILabel *) transferSuccessAccName;
	-(void) setTransferSuccessAccName:(UILabel *)p0;
	-(UILabel *) transferSuccessAmount;
	-(void) setTransferSuccessAmount:(UILabel *)p0;
	-(UIButton *) transferSuccessToDashboard;
	-(void) setTransferSuccessToDashboard:(UIButton *)p0;
	-(void) viewDidLoad;
	-(BOOL) conformsToProtocol:(void *)p0;
@end

@interface CustomTipTransactionCell : UITableViewCell {
}
	@property (nonatomic, assign) UILabel * tippedAmount;
	@property (nonatomic, assign) UILabel * tippedDate;
	@property (nonatomic, assign) UILabel * tippedPercent;
	@property (nonatomic, assign) UILabel * tippedTransAmount;
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(UILabel *) tippedAmount;
	-(void) setTippedAmount:(UILabel *)p0;
	-(UILabel *) tippedDate;
	-(void) setTippedDate:(UILabel *)p0;
	-(UILabel *) tippedPercent;
	-(void) setTippedPercent:(UILabel *)p0;
	-(UILabel *) tippedTransAmount;
	-(void) setTippedTransAmount:(UILabel *)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface UITableViewSource : NSObject<UIScrollViewDelegate> {
}
	-(id) init;
@end

@interface Talat_TableSources_TransactionTableSource : NSObject<UIScrollViewDelegate> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(UITableViewCell *) tableView:(UITableView *)p0 cellForRowAtIndexPath:(NSIndexPath *)p1;
	-(NSInteger) tableView:(UITableView *)p0 numberOfRowsInSection:(NSInteger)p1;
	-(CGFloat) tableView:(UITableView *)p0 heightForRowAtIndexPath:(NSIndexPath *)p1;
	-(void) tableView:(UITableView *)p0 didSelectRowAtIndexPath:(NSIndexPath *)p1;
	-(BOOL) conformsToProtocol:(void *)p0;
@end

@interface Talat_TableSources_TipTransactionTableSource : NSObject<UIScrollViewDelegate> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(UITableViewCell *) tableView:(UITableView *)p0 cellForRowAtIndexPath:(NSIndexPath *)p1;
	-(NSInteger) tableView:(UITableView *)p0 numberOfRowsInSection:(NSInteger)p1;
	-(CGFloat) tableView:(UITableView *)p0 heightForRowAtIndexPath:(NSIndexPath *)p1;
	-(void) tableView:(UITableView *)p0 didSelectRowAtIndexPath:(NSIndexPath *)p1;
	-(BOOL) conformsToProtocol:(void *)p0;
@end

@interface DashboardScreen : UIViewController {
}
	@property (nonatomic, assign) UILabel * accBalanceLabel;
	@property (nonatomic, assign) UILabel * accNameLabel;
	@property (nonatomic, assign) UILabel * accNumberLabel;
	@property (nonatomic, assign) UIButton * dashCopyClipboard;
	@property (nonatomic, assign) UIImageView * dashFirstCard;
	@property (nonatomic, assign) UIPageControl * dashPageControl;
	@property (nonatomic, assign) UIImageView * dashSecondView;
	@property (nonatomic, assign) UIScrollView * dashSV;
	@property (nonatomic, assign) UIView * dashView;
	@property (nonatomic, assign) UILabel * tipBalanceLabel;
	@property (nonatomic, assign) UILabel * tipPercentageLabel;
	@property (nonatomic, assign) UILabel * tipStatusLabel;
	@property (nonatomic, assign) UIButton * toTransactionPage;
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(UILabel *) accBalanceLabel;
	-(void) setAccBalanceLabel:(UILabel *)p0;
	-(UILabel *) accNameLabel;
	-(void) setAccNameLabel:(UILabel *)p0;
	-(UILabel *) accNumberLabel;
	-(void) setAccNumberLabel:(UILabel *)p0;
	-(UIButton *) dashCopyClipboard;
	-(void) setDashCopyClipboard:(UIButton *)p0;
	-(UIImageView *) dashFirstCard;
	-(void) setDashFirstCard:(UIImageView *)p0;
	-(UIPageControl *) dashPageControl;
	-(void) setDashPageControl:(UIPageControl *)p0;
	-(UIImageView *) dashSecondView;
	-(void) setDashSecondView:(UIImageView *)p0;
	-(UIScrollView *) dashSV;
	-(void) setDashSV:(UIScrollView *)p0;
	-(UIView *) dashView;
	-(void) setDashView:(UIView *)p0;
	-(UILabel *) tipBalanceLabel;
	-(void) setTipBalanceLabel:(UILabel *)p0;
	-(UILabel *) tipPercentageLabel;
	-(void) setTipPercentageLabel:(UILabel *)p0;
	-(UILabel *) tipStatusLabel;
	-(void) setTipStatusLabel:(UILabel *)p0;
	-(UIButton *) toTransactionPage;
	-(void) setToTransactionPage:(UIButton *)p0;
	-(void) viewDidLoad;
	-(void) viewWillAppear:(BOOL)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface LoginScreen : UIViewController {
}
	@property (nonatomic, assign) UITextField * EmailTextView;
	@property (nonatomic, assign) UIActivityIndicatorView * loginLoading;
	@property (nonatomic, assign) UIButton * LoginToDashboard;
	@property (nonatomic, assign) UITextField * PasswordTextView;
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(UITextField *) EmailTextView;
	-(void) setEmailTextView:(UITextField *)p0;
	-(UIActivityIndicatorView *) loginLoading;
	-(void) setLoginLoading:(UIActivityIndicatorView *)p0;
	-(UIButton *) LoginToDashboard;
	-(void) setLoginToDashboard:(UIButton *)p0;
	-(UITextField *) PasswordTextView;
	-(void) setPasswordTextView:(UITextField *)p0;
	-(void) viewDidLoad;
	-(void) prepareForSegue:(UIStoryboardSegue *)p0 sender:(NSObject *)p1;
	-(BOOL) conformsToProtocol:(void *)p0;
@end

@interface SendMoneyScreen : UIViewController {
}
	@property (nonatomic, assign) UITextField * amountToSend;
	@property (nonatomic, assign) UITextField * banksTextField;
	@property (nonatomic, assign) UIButton * beneficiaryBtn;
	@property (nonatomic, assign) UIImageView * bgImage;
	@property (nonatomic, assign) UITextField * enterAccNum;
	@property (nonatomic, assign) UIButton * makeTransferBtn;
	@property (nonatomic, assign) UILabel * pinAccountLabel;
	@property (nonatomic, assign) UILabel * pinAmountLabel;
	@property (nonatomic, assign) UIButton * pinCancelBtn;
	@property (nonatomic, assign) UILabel * pinNameLabel;
	@property (nonatomic, assign) UIView * pinOverlayBg;
	@property (nonatomic, assign) UITextField * pinTextField;
	@property (nonatomic, assign) UIView * pinView;
	@property (nonatomic, assign) UILabel * recipientAccNum;
	@property (nonatomic, assign) UILabel * recipientLabel;
	@property (nonatomic, assign) UILabel * sendMoneyAccountLabel;
	@property (nonatomic, assign) UIActivityIndicatorView * sendMoneyLoader;
	@property (nonatomic, assign) UIStackView * sendMoneyRestView;
	@property (nonatomic, assign) UILabel * userAmountLabel;
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(UITextField *) amountToSend;
	-(void) setAmountToSend:(UITextField *)p0;
	-(UITextField *) banksTextField;
	-(void) setBanksTextField:(UITextField *)p0;
	-(UIButton *) beneficiaryBtn;
	-(void) setBeneficiaryBtn:(UIButton *)p0;
	-(UIImageView *) bgImage;
	-(void) setBgImage:(UIImageView *)p0;
	-(UITextField *) enterAccNum;
	-(void) setEnterAccNum:(UITextField *)p0;
	-(UIButton *) makeTransferBtn;
	-(void) setMakeTransferBtn:(UIButton *)p0;
	-(UILabel *) pinAccountLabel;
	-(void) setPinAccountLabel:(UILabel *)p0;
	-(UILabel *) pinAmountLabel;
	-(void) setPinAmountLabel:(UILabel *)p0;
	-(UIButton *) pinCancelBtn;
	-(void) setPinCancelBtn:(UIButton *)p0;
	-(UILabel *) pinNameLabel;
	-(void) setPinNameLabel:(UILabel *)p0;
	-(UIView *) pinOverlayBg;
	-(void) setPinOverlayBg:(UIView *)p0;
	-(UITextField *) pinTextField;
	-(void) setPinTextField:(UITextField *)p0;
	-(UIView *) pinView;
	-(void) setPinView:(UIView *)p0;
	-(UILabel *) recipientAccNum;
	-(void) setRecipientAccNum:(UILabel *)p0;
	-(UILabel *) recipientLabel;
	-(void) setRecipientLabel:(UILabel *)p0;
	-(UILabel *) sendMoneyAccountLabel;
	-(void) setSendMoneyAccountLabel:(UILabel *)p0;
	-(UIActivityIndicatorView *) sendMoneyLoader;
	-(void) setSendMoneyLoader:(UIActivityIndicatorView *)p0;
	-(UIStackView *) sendMoneyRestView;
	-(void) setSendMoneyRestView:(UIStackView *)p0;
	-(UILabel *) userAmountLabel;
	-(void) setUserAmountLabel:(UILabel *)p0;
	-(void) viewDidLoad;
	-(void) prepareForSegue:(UIStoryboardSegue *)p0 sender:(NSObject *)p1;
	-(void) viewWillAppear:(BOOL)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
@end

@interface TipMyselfScreen : UIViewController {
}
	@property (nonatomic, assign) UISwitch * showRestTMSwitch;
	@property (nonatomic, assign) UITableView * tipTransactionTableView;
	@property (nonatomic, assign) UITextField * TMPercentageValue;
	@property (nonatomic, assign) UIStackView * TMRestView;
	@property (nonatomic, assign) UITextField * WhenToGetTipped;
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(UISwitch *) showRestTMSwitch;
	-(void) setShowRestTMSwitch:(UISwitch *)p0;
	-(UITableView *) tipTransactionTableView;
	-(void) setTipTransactionTableView:(UITableView *)p0;
	-(UITextField *) TMPercentageValue;
	-(void) setTMPercentageValue:(UITextField *)p0;
	-(UIStackView *) TMRestView;
	-(void) setTMRestView:(UIStackView *)p0;
	-(UITextField *) WhenToGetTipped;
	-(void) setWhenToGetTipped:(UITextField *)p0;
	-(void) viewDidLoad;
	-(void) viewWillAppear:(BOOL)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
@end

@interface SignupScreen : UIViewController {
}
	@property (nonatomic, assign) UIButton * createUserBtn;
	@property (nonatomic, assign) UITextField * emailSignupTextField;
	@property (nonatomic, assign) UITextField * fnameTextField;
	@property (nonatomic, assign) UITextField * lnameTextField;
	@property (nonatomic, assign) UITextField * pwordSignupTextField;
	@property (nonatomic, assign) UIActivityIndicatorView * signupLoader;
	@property (nonatomic, assign) UITextField * tPinTextField;
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(UIButton *) createUserBtn;
	-(void) setCreateUserBtn:(UIButton *)p0;
	-(UITextField *) emailSignupTextField;
	-(void) setEmailSignupTextField:(UITextField *)p0;
	-(UITextField *) fnameTextField;
	-(void) setFnameTextField:(UITextField *)p0;
	-(UITextField *) lnameTextField;
	-(void) setLnameTextField:(UITextField *)p0;
	-(UITextField *) pwordSignupTextField;
	-(void) setPwordSignupTextField:(UITextField *)p0;
	-(UIActivityIndicatorView *) signupLoader;
	-(void) setSignupLoader:(UIActivityIndicatorView *)p0;
	-(UITextField *) tPinTextField;
	-(void) setTPinTextField:(UITextField *)p0;
	-(void) viewDidLoad;
	-(void) prepareForSegue:(UIStoryboardSegue *)p0 sender:(NSObject *)p1;
	-(BOOL) conformsToProtocol:(void *)p0;
@end

@interface TransactionScreen : UIViewController {
}
	@property (nonatomic, assign) UISegmentedControl * segmentedControl;
	@property (nonatomic, assign) UIBarButtonItem * toDashboardBtn;
	@property (nonatomic, assign) UITableView * transactionTableView;
	@property (nonatomic, assign) UILabel * transCardBalance;
	@property (nonatomic, assign) UILabel * transCardName;
	@property (nonatomic, assign) UILabel * transCardNumber;
	@property (nonatomic, assign) UIActivityIndicatorView * transLoader;
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(UISegmentedControl *) segmentedControl;
	-(void) setSegmentedControl:(UISegmentedControl *)p0;
	-(UIBarButtonItem *) toDashboardBtn;
	-(void) setToDashboardBtn:(UIBarButtonItem *)p0;
	-(UITableView *) transactionTableView;
	-(void) setTransactionTableView:(UITableView *)p0;
	-(UILabel *) transCardBalance;
	-(void) setTransCardBalance:(UILabel *)p0;
	-(UILabel *) transCardName;
	-(void) setTransCardName:(UILabel *)p0;
	-(UILabel *) transCardNumber;
	-(void) setTransCardNumber:(UILabel *)p0;
	-(UIActivityIndicatorView *) transLoader;
	-(void) setTransLoader:(UIActivityIndicatorView *)p0;
	-(void) viewDidLoad;
	-(void) viewWillAppear:(BOOL)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
@end

@interface SFSafariViewControllerDelegate : NSObject<SFSafariViewControllerDelegate> {
}
	-(id) init;
@end

@interface CNContactPickerDelegate : NSObject<CNContactPickerDelegate> {
}
	-(id) init;
@end

@interface NSURLSessionDataDelegate : NSObject<NSURLSessionDataDelegate, NSURLSessionTaskDelegate, NSURLSessionDelegate> {
}
	-(id) init;
@end

@interface CLLocationManagerDelegate : NSObject<CLLocationManagerDelegate> {
}
	-(id) init;
@end

@interface UIAdaptivePresentationControllerDelegate : NSObject<UIAdaptivePresentationControllerDelegate> {
}
	-(id) init;
@end

@interface UIActivityItemSource : NSObject<UIActivityItemSource> {
}
	-(id) init;
@end

@interface UIDocumentPickerDelegate : NSObject<UIDocumentPickerDelegate> {
}
	-(id) init;
@end

@interface UIImagePickerControllerDelegate : NSObject<UINavigationControllerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, UINavigationControllerDelegate> {
}
	-(id) init;
@end

@interface UIKit_UIView_UIViewAppearance : NSObject {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(BOOL) conformsToProtocol:(void *)p0;
@end

@interface UIKit_UIControl_UIControlAppearance : UIKit_UIView_UIViewAppearance {
}
@end

@interface __UIGestureRecognizerToken : NSObject {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface __UIGestureRecognizerParameterlessToken : __UIGestureRecognizerToken {
}
	-(void) target;
@end

@interface UIKit_UISegmentedControl_UISegmentedControlAppearance : UIKit_UIControl_UIControlAppearance {
}
	-(void) setTitleTextAttributes:(NSDictionary *)p0 forState:(NSUInteger)p1;
@end

@interface OpenTK_Platform_iPhoneOS_iPhoneOSGameView : UIView {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	+(Class) layerClass;
	-(void) layoutSubviews;
	-(void) willMoveToWindow:(UIWindow *)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) initWithCoder:(NSCoder *)p0;
	-(id) initWithFrame:(CGRect)p0;
@end



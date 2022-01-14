// WARNING
// This file has been generated automatically by Visual Studio to
// mirror C# types. Changes in this file made by drag-connecting
// from the UI designer will be synchronized back to C#, but
// more complex manual changes may not transfer correctly.


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


@interface DashboardScreen : UIViewController {
	UILabel *_accBalanceLabel;
	UILabel *_accNameLabel;
	UILabel *_accNumberLabel;
	UIPageControl *_dashPC;
	UIScrollView *_dashSV;
	UIView *_dashV;
	UIButton *_toTransactionPage;
}

@property (nonatomic, retain) IBOutlet UILabel *accBalanceLabel;

@property (nonatomic, retain) IBOutlet UILabel *accNameLabel;

@property (nonatomic, retain) IBOutlet UILabel *accNumberLabel;

@property (nonatomic, retain) IBOutlet UIPageControl *dashPC;

@property (nonatomic, retain) IBOutlet UIScrollView *dashSV;

@property (nonatomic, retain) IBOutlet UIView *dashV;

@property (nonatomic, retain) IBOutlet UIButton *toTransactionPage;

@end

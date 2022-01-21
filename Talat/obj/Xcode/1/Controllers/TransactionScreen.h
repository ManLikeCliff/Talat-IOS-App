// WARNING
// This file has been generated automatically by Visual Studio to
// mirror C# types. Changes in this file made by drag-connecting
// from the UI designer will be synchronized back to C#, but
// more complex manual changes may not transfer correctly.


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


@interface TransactionScreen : UIViewController {
	UISegmentedControl *_segmentedControl;
	UIBarButtonItem *_toDashboardBtn;
	UITableView *_transactionTableView;
	UILabel *_transCardBalance;
	UILabel *_transCardName;
	UILabel *_transCardNumber;
	UIActivityIndicatorView *_transLoader;
}

@property (nonatomic, retain) IBOutlet UISegmentedControl *segmentedControl;

@property (nonatomic, retain) IBOutlet UIBarButtonItem *toDashboardBtn;

@property (nonatomic, retain) IBOutlet UITableView *transactionTableView;

@property (nonatomic, retain) IBOutlet UILabel *transCardBalance;

@property (nonatomic, retain) IBOutlet UILabel *transCardName;

@property (nonatomic, retain) IBOutlet UILabel *transCardNumber;

@property (nonatomic, retain) IBOutlet UIActivityIndicatorView *transLoader;

@end

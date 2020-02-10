@import UIKit;
@import WMF.Swift;

@class WMFLegacyReference;

extern NSString *const WMFReferenceLinkTappedNotification;

@interface WMFReferencePopoverMessageViewController : UIViewController <UIPopoverPresentationControllerDelegate, WMFThemeable>

@property (nonatomic) CGFloat width;
@property (nonatomic) BOOL scrollEnabled;

@property (strong, nonatomic) WMFLegacyReference *reference;
@property (strong, nonatomic) NSURL *articleURL;

- (void)scrollToTop;

@end

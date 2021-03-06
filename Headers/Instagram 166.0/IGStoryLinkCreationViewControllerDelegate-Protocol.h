//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGIOSLink, IGStoryMediaCompositionState, NSString, UIViewController;
@protocol IGAnalyticsModule;

@protocol IGStoryLinkCreationViewControllerDelegate <NSObject>
- (void)storyLinkCreationViewControllerVerifyPaidBrandedContentStoryForInteractiveElements:(UIViewController<IGAnalyticsModule> *)arg1 validationCompleteHandler:(void (^)(_Bool))arg2;
- (void)storyLinkCreationViewControllerDidDisplayPaidBrandedContentInteractiveViewsErrorAlert:(UIViewController<IGAnalyticsModule> *)arg1;
- (void)storyLinkCreationViewControllerDidCloseForm:(UIViewController *)arg1 hasChanges:(_Bool)arg2 didAllowSponsorPartnerToBoost:(_Bool)arg3 mediaId:(NSString *)arg4 validatedUrl:(NSString *)arg5 businessTransactionLinkAdded:(_Bool)arg6;
- (IGStoryMediaCompositionState *)storyLinkCreationViewController:(UIViewController *)arg1 didSelectStoryLink:(IGIOSLink *)arg2;
@end


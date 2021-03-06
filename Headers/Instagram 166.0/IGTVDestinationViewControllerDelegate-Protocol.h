//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGQPMegaphone, IGQPMegaphoneSectionControllerPresenter, IGTVDestinationViewController;

@protocol IGTVDestinationViewControllerDelegate <NSObject>
- (IGQPMegaphoneSectionControllerPresenter *)megaphoneSectionControllerPresenterForDestinationViewController:(IGTVDestinationViewController *)arg1;
- (IGQPMegaphone *)megaphoneForDestinationViewController:(IGTVDestinationViewController *)arg1;
- (void)destinationViewControllerEndedUIRender:(IGTVDestinationViewController *)arg1 didSucceed:(_Bool)arg2;
- (void)destinationViewControllerStartedUIRender:(IGTVDestinationViewController *)arg1;
- (void)destinationViewControllerDidPerformUpdates:(IGTVDestinationViewController *)arg1;
- (_Bool)shouldDestinationViewControllerPreferTabBarHidden:(IGTVDestinationViewController *)arg1;
- (double)refreshControlTopInsetForDestinationViewController:(IGTVDestinationViewController *)arg1;
- (double)adjustedInsetForTopScrollIndicatorInset:(double)arg1 destinationViewController:(IGTVDestinationViewController *)arg2;
- (double)adjustedInsetForTopContentInset:(double)arg1 destinationViewController:(IGTVDestinationViewController *)arg2;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGDraftPreview, UINavigationItem, UIViewController;
@protocol IGAnalyticsModule, IGFeedCreationFlowDelegate;

@protocol IGFeedCreationFlowControllerType <NSObject>
@property(nonatomic) __weak id <IGFeedCreationFlowDelegate> delegate;
@property(nonatomic) double verticalOffset;
- (void)popToRootViewControllerAndResetAssetsWithNewDraft:(IGDraftPreview *)arg1;
- (void)popViewControllerAnimated:(_Bool)arg1;
- (void)pushViewController:(UIViewController<IGAnalyticsModule> *)arg1 animated:(_Bool)arg2;
- (void)reloadNavigationItem:(UINavigationItem *)arg1 animated:(_Bool)arg2;
- (void)reloadNavigationItem:(UINavigationItem *)arg1;
@end


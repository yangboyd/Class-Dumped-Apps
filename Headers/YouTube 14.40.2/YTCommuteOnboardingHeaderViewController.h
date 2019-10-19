//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTStyledViewController.h"

#import "YTOfflineStorageUsageControllerDelegate.h"
#import "YTResponseViewController.h"
#import "YTVariableHeightHeaderViewControllerAttachedHeader.h"
#import "YTVariableHeightHeaderViewControllerDisableScrolling.h"

@class NSString, YTCommuteOnboardingHeaderView, YTOfflineStorageUsageController, YTTimedAction;

@interface YTCommuteOnboardingHeaderViewController : YTStyledViewController <YTResponseViewController, YTOfflineStorageUsageControllerDelegate, YTVariableHeightHeaderViewControllerAttachedHeader, YTVariableHeightHeaderViewControllerDisableScrolling>
{
    YTCommuteOnboardingHeaderView *_headerView;
    YTOfflineStorageUsageController *_storageUsageController;
    YTTimedAction *_updateStorageDelayTimedAction;
}

@property(retain, nonatomic) YTTimedAction *updateStorageDelayTimedAction; // @synthesize updateStorageDelayTimedAction=_updateStorageDelayTimedAction;
@property(readonly, nonatomic) YTOfflineStorageUsageController *storageUsageController; // @synthesize storageUsageController=_storageUsageController;
- (void).cxx_destruct;
- (void)updateStorageViewAndRefreshHeight;
- (void)loadWithModel:(id)arg1;
- (_Bool)scrollToModelMatchingBlock:(CDUnknownBlockType)arg1 animated:(_Bool)arg2;
- (void)willMakeRequest:(id)arg1;
- (_Bool)disableScrollingHeader;
- (_Bool)isAttachedToPage;
- (void)didUpdateOfflineStorageUsage;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder;
@property(readonly) Class superclass;
@property(nonatomic) _Bool useDefaultModelWhenEmpty;

@end


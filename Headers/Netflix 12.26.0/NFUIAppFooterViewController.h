//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NFUIArrangedContentViewController.h"

@class MdxUiPlayerViewController, NFUIDownloadBannerViewController, NFUITabBarViewController, UIViewController;

@interface NFUIAppFooterViewController : NFUIArrangedContentViewController
{
    unsigned long long _hidingOnDownloadStatusFinishedCount;
    NFUITabBarViewController *_tabBarVC;
    MdxUiPlayerViewController *_mdxPlayerVC;
    UIViewController *_mdxMiniPlayerContainerVC;
    NFUIDownloadBannerViewController *_downloadBannerVC;
}

@property(nonatomic) __weak NFUIDownloadBannerViewController *downloadBannerVC; // @synthesize downloadBannerVC=_downloadBannerVC;
@property(nonatomic) __weak UIViewController *mdxMiniPlayerContainerVC; // @synthesize mdxMiniPlayerContainerVC=_mdxMiniPlayerContainerVC;
@property(nonatomic) __weak MdxUiPlayerViewController *mdxPlayerVC; // @synthesize mdxPlayerVC=_mdxPlayerVC;
@property(nonatomic) __weak NFUITabBarViewController *tabBarVC; // @synthesize tabBarVC=_tabBarVC;
- (void).cxx_destruct;
- (id)resetAndShowAppNavController;
- (id)showAppNavController;
- (id)appNavController;
- (id)showAppNavController:(_Bool)arg1;
- (void)removeFooterViews;
- (void)endHidingOnDownloadStatusFinished;
- (void)beginHidingOnDownloadStatusFinished;
- (void)removeDownloadBanner;
- (void)handleNotificationDownloadSessionStarted:(id)arg1;
- (void)configureWithDownloadSession:(id)arg1;
- (void)hideMdxPlayer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showMdxPlayer:(id)arg1 expanded:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)hideMdxFullPlayer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showMdxFullPlayer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)toggleMdxPlayer:(id)arg1 expanded:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setupMdxMiniPlayerContainerVCIfNeeded:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;

@end


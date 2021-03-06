//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEPOIDetailSlidingViewControllerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class AWEPOIDetailAwemeWaterfallViewController, AWEPOIDetailInfoContainerController, AWEPOIDetailRatingFeedViewController, AWEPOIDetailSlidingViewController, AWESlidingTabbarView, NSArray, NSMutableDictionary, NSString, UIView;
@protocol AWEPOIDetailContentScrollViewControllerProtocol;

@interface AWEPOIDetailContentController : UIViewController <AWEPOIDetailSlidingViewControllerDelegate, UIScrollViewDelegate>
{
    _Bool _didScrollCollectHintOut;
    _Bool _didScrollCollectHintIn;
    _Bool _isTabbarShowed;
    _Bool _didAppear;
    AWEPOIDetailInfoContainerController *_headerController;
    AWESlidingTabbarView *_tabbar;
    AWEPOIDetailSlidingViewController *_slidingViewController;
    UIViewController *_baseViewController;
    UIView *_headerView;
    UIView *_tabbarContainer;
    NSMutableDictionary *_delegateProxys;
    AWEPOIDetailAwemeWaterfallViewController *_waterfallAwemeController;
    AWEPOIDetailRatingFeedViewController *_ratingViewController;
    NSArray *_viewControllers;
    NSArray *_validTabModels;
    NSArray *_tabs;
    double _realYOffset;
    UIViewController<AWEPOIDetailContentScrollViewControllerProtocol> *_currentViewController;
    struct _NSRange _visibleTabItemRange;
}

@property(nonatomic) _Bool didAppear; // @synthesize didAppear=_didAppear;
@property(nonatomic) struct _NSRange visibleTabItemRange; // @synthesize visibleTabItemRange=_visibleTabItemRange;
@property(nonatomic) _Bool isTabbarShowed; // @synthesize isTabbarShowed=_isTabbarShowed;
@property(nonatomic) __weak UIViewController<AWEPOIDetailContentScrollViewControllerProtocol> *currentViewController; // @synthesize currentViewController=_currentViewController;
@property(nonatomic) double realYOffset; // @synthesize realYOffset=_realYOffset;
@property(retain, nonatomic) NSArray *tabs; // @synthesize tabs=_tabs;
@property(retain, nonatomic) NSArray *validTabModels; // @synthesize validTabModels=_validTabModels;
@property(retain, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;
@property(retain, nonatomic) AWEPOIDetailRatingFeedViewController *ratingViewController; // @synthesize ratingViewController=_ratingViewController;
@property(retain, nonatomic) AWEPOIDetailAwemeWaterfallViewController *waterfallAwemeController; // @synthesize waterfallAwemeController=_waterfallAwemeController;
@property(retain, nonatomic) NSMutableDictionary *delegateProxys; // @synthesize delegateProxys=_delegateProxys;
@property(retain, nonatomic) UIView *tabbarContainer; // @synthesize tabbarContainer=_tabbarContainer;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak UIViewController *baseViewController; // @synthesize baseViewController=_baseViewController;
@property(retain, nonatomic) AWEPOIDetailSlidingViewController *slidingViewController; // @synthesize slidingViewController=_slidingViewController;
@property(retain, nonatomic) AWESlidingTabbarView *tabbar; // @synthesize tabbar=_tabbar;
@property(retain, nonatomic) AWEPOIDetailInfoContainerController *headerController; // @synthesize headerController=_headerController;
@property(nonatomic) _Bool didScrollCollectHintIn; // @synthesize didScrollCollectHintIn=_didScrollCollectHintIn;
@property(nonatomic) _Bool didScrollCollectHintOut; // @synthesize didScrollCollectHintOut=_didScrollCollectHintOut;
- (void).cxx_destruct;
- (void)p_bindActionAndState;
- (void)rx_store:(id)arg1 didSetWithModule:(id)arg2;
- (double)infoListHeight;
- (id)poiDetail;
- (id)constData;
- (id)store;
- (void)p_setSelectedTab;
- (void)p_trackTabSelectedWithTransitionType:(long long)arg1 atIndex:(long long)arg2;
- (void)p_checkAndTrackTabbarShow;
- (_Bool)p_isTabbarVisible;
- (void)p_syncViewControllersOffset;
- (double)p_collectHintOffset;
- (double)p_topThresholdOffset;
- (double)p_headerContainerHeight;
- (id)p_viewControllerAtIndex:(long long)arg1;
- (id)p_parentVcForView:(id)arg1;
- (void)p_updateSlidingViewControllerScrollThreshold;
- (void)p_updateHeaderContainerVisibleRect;
- (void)p_updateHeaderViewLayoutWithContainerView:(id)arg1;
- (void)p_updateTabbarLayoutWithContainerView:(id)arg1;
- (void)p_setupHeaderView;
- (void)p_setupTabbar;
- (void)p_setupSlidingViewController;
- (void)p_updateViewControllers;
- (void)p_setupInitViewController;
- (id)p_awemeViewController;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)slidingViewController:(id)arg1 willTransitionToViewController:(id)arg2;
- (void)slidingViewController:(id)arg1 scrollViewWillBeginDragging:(id)arg2;
- (void)slidingViewController:(id)arg1 scrollViewDidEndScroll:(id)arg2;
- (void)slidingViewController:(id)arg1 didSelectIndex:(long long)arg2 transitionType:(long long)arg3;
- (id)slidingViewController:(id)arg1 viewControllerAtIndex:(long long)arg2;
- (long long)numberOfControllers:(id)arg1;
- (id)p_waterfallConfig;
- (void)setRealYOffset:(double)arg1 clearOld:(_Bool)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


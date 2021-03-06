//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASMViewController.h"

#import "ASMHeaderContentViewController-Protocol.h"
#import "ASMNavigationHierarchyController-Protocol.h"
#import "ASMPageViewControllerDelegate-Protocol.h"
#import "ASMScrollViewTrackingDelegate-Protocol.h"
#import "MDCTabBarViewDelegate-Protocol.h"
#import "UIPageViewControllerDataSource-Protocol.h"

@class ASMHeaderViewController, ASMPageViewController, ASMViewBlueprint, MDCTabBarView, NSMutableDictionary, NSString, UIScrollView;
@protocol ASMScrollViewTrackingDelegate, ASMTopNavigationViewModel, ASMViewControllerFactory;

@interface ASMTabbedContentViewController : ASMViewController <ASMPageViewControllerDelegate, ASMScrollViewTrackingDelegate, MDCTabBarViewDelegate, UIPageViewControllerDataSource, ASMHeaderContentViewController, ASMNavigationHierarchyController>
{
    _Bool _headerViewHasBeenInstalled;
    _Bool _didAnimateTabs;
    _Bool _didSelectInitialTab;
    ASMHeaderViewController *_headerViewController;
    id <ASMScrollViewTrackingDelegate> _scrollViewTrackingDelegate;
    long long _selectedTabIndex;
    ASMPageViewController *_pageViewController;
    NSMutableDictionary *_displayedControllers;
    UIScrollView *_scrollView;
    MDCTabBarView *_tabBarView;
    id <ASMTopNavigationViewModel> _model;
    id <ASMViewControllerFactory> _controllerFactory;
    ASMViewBlueprint *_blueprint;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool didSelectInitialTab; // @synthesize didSelectInitialTab=_didSelectInitialTab;
@property(nonatomic) _Bool didAnimateTabs; // @synthesize didAnimateTabs=_didAnimateTabs;
@property(retain, nonatomic) ASMViewBlueprint *blueprint; // @synthesize blueprint=_blueprint;
@property(retain, nonatomic) id <ASMViewControllerFactory> controllerFactory; // @synthesize controllerFactory=_controllerFactory;
@property(retain, nonatomic) id <ASMTopNavigationViewModel> model; // @synthesize model=_model;
@property(retain, nonatomic) MDCTabBarView *tabBarView; // @synthesize tabBarView=_tabBarView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSMutableDictionary *displayedControllers; // @synthesize displayedControllers=_displayedControllers;
@property(retain, nonatomic) ASMPageViewController *pageViewController; // @synthesize pageViewController=_pageViewController;
@property(nonatomic) long long selectedTabIndex; // @synthesize selectedTabIndex=_selectedTabIndex;
@property(nonatomic) _Bool headerViewHasBeenInstalled; // @synthesize headerViewHasBeenInstalled=_headerViewHasBeenInstalled;
@property(nonatomic) __weak id <ASMScrollViewTrackingDelegate> scrollViewTrackingDelegate; // @synthesize scrollViewTrackingDelegate=_scrollViewTrackingDelegate;
@property(nonatomic) __weak ASMHeaderViewController *headerViewController; // @synthesize headerViewController=_headerViewController;
- (long long)indexForTarget:(id)arg1;
- (void)selectTabBarItemAtIndex:(long long)arg1;
- (long long)correctDirectionInRTLForNavigationDirection:(long long)arg1;
- (void)switchToViewControllerAtIndex:(unsigned long long)arg1;
- (void)switchToViewControllerForCurrentBlueprint;
- (void)createTabBarIfNecessary;
- (void)updateTabBarWithTabs:(id)arg1;
- (void)updateTabBarColors;
- (void)restoreAllViews;
- (void)hideViewsContainingPotentiallySensitiveInformation;
- (_Bool)displayContentFromBlueprint:(id)arg1;
- (id)createTabBarItemsFromTopTabs:(id)arg1;
- (id)createViewControllerForCurrentBlueprint;
- (id)getOrCreateViewControllerForIndex:(long long)arg1;
- (long long)indexOfControllerForBlueprint:(id)arg1;
- (long long)indexOfController:(id)arg1;
- (long long)indexOfCurrentController;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (void)transitionFromViewControllers:(id)arg1 hasBeenCompleted:(_Bool)arg2;
- (void)willTransitionToViewControllers:(id)arg1;
- (void)pageViewController:(id)arg1 willFinishTransitionToViewControllers:(id)arg2;
- (void)pageViewController:(id)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(_Bool)arg4;
- (void)pageViewController:(id)arg1 willTransitionToViewControllers:(id)arg2;
- (void)trackingScrollViewWillEndDraggingWithVelocity:(struct CGPoint)arg1 targetContentOffset:(inout struct CGPoint *)arg2;
- (void)trackingScrollViewDidEndDraggingWillDecelerate:(_Bool)arg1;
- (void)trackingScrollViewDidEndScrollingAnimation;
- (void)trackingScrollViewDidEndDecelerating;
- (void)trackingScrollViewDidScrollToTop;
- (void)trackingScrollViewDidScroll;
@property(readonly, nonatomic) unsigned long long headerElevationBehavior;
@property(readonly, nonatomic) double topContentOffset;
- (double)animationDurationForElementAtIndex:(long long)arg1 lastIndex:(long long)arg2;
- (void)fixTabBarViewIndicatorAndScrollPosition;
- (void)animateTabsIfNecessary;
- (void)updateTabBarDividerLineVisibility;
- (void)tabBarView:(id)arg1 didSelectItem:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1 controllerFactory:(id)arg2;

// Remaining properties
@property(nonatomic) _Bool alwaysCollapseActionButtons;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) unsigned long long dismissButtonStyle;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


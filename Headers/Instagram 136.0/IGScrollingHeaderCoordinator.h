//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGNavigationBar, IGScrollingHeaderItem, NSSet, UIScrollView, UIView, UIViewController;

@interface IGScrollingHeaderCoordinator : NSObject
{
    double _headerY;
    _Bool _hasInCallStatusBar;
    _Bool _isAnimatingTransition;
    UIViewController *_activeViewController;
    IGNavigationBar *_navigationBar;
    UIView *_statusBar;
    IGScrollingHeaderItem *_activeHeaderItem;
    double _headerAdjustmentAmount;
    UIScrollView *_activeScrollView;
    NSSet *_scrollingViews;
    double _headerAnchor;
}

+ (id)headerSnapshotForViewController:(id)arg1 navigationBar:(id)arg2;
+ (unsigned long long)statusBarStateForViewController:(id)arg1;
+ (unsigned long long)navigationBarStateForViewController:(id)arg1;
+ (id)scrollingHeaderViewControllerForViewController:(id)arg1;
+ (id)scrollingHeaderItemForViewController:(id)arg1;
@property(nonatomic) _Bool isAnimatingTransition; // @synthesize isAnimatingTransition=_isAnimatingTransition;
@property(nonatomic) double headerAnchor; // @synthesize headerAnchor=_headerAnchor;
@property(readonly, nonatomic) NSSet *scrollingViews; // @synthesize scrollingViews=_scrollingViews;
@property(nonatomic) __weak UIScrollView *activeScrollView; // @synthesize activeScrollView=_activeScrollView;
@property(nonatomic) double headerAdjustmentAmount; // @synthesize headerAdjustmentAmount=_headerAdjustmentAmount;
@property(nonatomic) __weak IGScrollingHeaderItem *activeHeaderItem; // @synthesize activeHeaderItem=_activeHeaderItem;
@property(readonly, nonatomic) __weak UIView *statusBar; // @synthesize statusBar=_statusBar;
@property(readonly, nonatomic) __weak IGNavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(nonatomic) __weak UIViewController *activeViewController; // @synthesize activeViewController=_activeViewController;
- (void).cxx_destruct;
- (void)_statusBarFrameWillChange:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_onDidEndDecelerating:(id)arg1;
- (void)_onDidEndDragging:(id)arg1;
- (void)_onDidBeginDragging:(id)arg1;
- (void)_positionHeaderAfterScrolling;
- (void)_setHeaderY:(double)arg1 animated:(_Bool)arg2;
- (void)_updateHeaderAnimated:(_Bool)arg1;
- (void)_updateStatusBarIfNeededWithTransform:(struct CGAffineTransform)arg1;
- (void)_updateNavigationOverlayWithPercentVisible:(double)arg1;
- (void)layoutHeaderForViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_updateTransformNavigationViews:(id)arg1 percentVisible:(double)arg2;
- (void)layoutHeaderForActiveViewControllerAnimated:(_Bool)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setHeaderScrolledAway:(_Bool)arg1 forViewController:(id)arg2 animated:(_Bool)arg3;
- (void)synchronizeViewControllerHeaderState:(id)arg1;
- (void)releaseActiveViewController:(id)arg1;
- (id)initWithNavigationBar:(id)arg1;
- (void)dealloc;

@end


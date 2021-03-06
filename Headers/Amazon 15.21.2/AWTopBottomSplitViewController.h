//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSLayoutConstraint, NSMutableArray, NSString, UIGestureRecognizer, UIView;
@protocol AWTopBottomSplitViewControllerDelegate;

@interface AWTopBottomSplitViewController : UIViewController <UIGestureRecognizerDelegate, UIScrollViewDelegate>
{
    double _topPanelMinimumHeight;
    double _topPanelMaximumHeight;
    double _bottomPanelMinimumHeight;
    double _bottomPanelMaximumHeight;
    _Bool _swipeToOpenInTopPanel;
    _Bool _pullToCloseInTopPanel;
    _Bool _swipeToOpenInBottomPanel;
    _Bool _pullToCloseInBottomPanel;
    _Bool _isViewLoaded;
    _Bool _scrolling;
    _Bool _scrollingCaught;
    int _separatorPanState;
    UIViewController *_topPanelViewController;
    UIViewController *_bottomPanelViewController;
    UIView *_headerView;
    UIView *_footerView;
    UIView *_separatorView;
    UIView *_separatorTouchView;
    double _separatorCatchOffsetY;
    UIView *_separatorCatchView;
    double _topPanelHeight;
    id <AWTopBottomSplitViewControllerDelegate> _delegate;
    double _previousBoundsHeight;
    double _headerHeight;
    double _separatorHeight;
    double _footerHeight;
    NSLayoutConstraint *_topPanelHeightConstraint;
    NSMutableArray *_childConstraints;
    double _lastReportedFutureTopPanelHeight;
    double _lastReportedTopPanelHeight;
    double _lastReportedFutureBottomPanelHeight;
    double _lastReportedBottomPanelHeight;
    UIGestureRecognizer *_separatorTapRecognizer;
    UIGestureRecognizer *_separatorPanRecognizer;
    NSArray *_gestureRecognizersToCancelAtPanCatch;
    double _topPanelHeightAtSeparatorPanCatch;
    unsigned long long _nestedDrag;
    struct UIEdgeInsets _separatorTouchInsets;
}

@property(nonatomic) _Bool scrollingCaught; // @synthesize scrollingCaught=_scrollingCaught;
@property(nonatomic) _Bool scrolling; // @synthesize scrolling=_scrolling;
@property(nonatomic) unsigned long long nestedDrag; // @synthesize nestedDrag=_nestedDrag;
@property(nonatomic) double topPanelHeightAtSeparatorPanCatch; // @synthesize topPanelHeightAtSeparatorPanCatch=_topPanelHeightAtSeparatorPanCatch;
@property(nonatomic) int separatorPanState; // @synthesize separatorPanState=_separatorPanState;
@property(retain, nonatomic) NSArray *gestureRecognizersToCancelAtPanCatch; // @synthesize gestureRecognizersToCancelAtPanCatch=_gestureRecognizersToCancelAtPanCatch;
@property(retain, nonatomic) UIGestureRecognizer *separatorPanRecognizer; // @synthesize separatorPanRecognizer=_separatorPanRecognizer;
@property(retain, nonatomic) UIGestureRecognizer *separatorTapRecognizer; // @synthesize separatorTapRecognizer=_separatorTapRecognizer;
@property(nonatomic) double lastReportedBottomPanelHeight; // @synthesize lastReportedBottomPanelHeight=_lastReportedBottomPanelHeight;
@property(nonatomic) double lastReportedFutureBottomPanelHeight; // @synthesize lastReportedFutureBottomPanelHeight=_lastReportedFutureBottomPanelHeight;
@property(nonatomic) double lastReportedTopPanelHeight; // @synthesize lastReportedTopPanelHeight=_lastReportedTopPanelHeight;
@property(nonatomic) double lastReportedFutureTopPanelHeight; // @synthesize lastReportedFutureTopPanelHeight=_lastReportedFutureTopPanelHeight;
@property(retain, nonatomic) NSMutableArray *childConstraints; // @synthesize childConstraints=_childConstraints;
@property(retain, nonatomic) NSLayoutConstraint *topPanelHeightConstraint; // @synthesize topPanelHeightConstraint=_topPanelHeightConstraint;
@property(nonatomic) double footerHeight; // @synthesize footerHeight=_footerHeight;
@property(nonatomic) double separatorHeight; // @synthesize separatorHeight=_separatorHeight;
@property(nonatomic) double headerHeight; // @synthesize headerHeight=_headerHeight;
@property(nonatomic) double previousBoundsHeight; // @synthesize previousBoundsHeight=_previousBoundsHeight;
@property(nonatomic) _Bool isViewLoaded; // @synthesize isViewLoaded=_isViewLoaded;
@property(nonatomic) __weak id <AWTopBottomSplitViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool pullToCloseInBottomPanel; // @synthesize pullToCloseInBottomPanel=_pullToCloseInBottomPanel;
@property(nonatomic) _Bool swipeToOpenInBottomPanel; // @synthesize swipeToOpenInBottomPanel=_swipeToOpenInBottomPanel;
@property(nonatomic) _Bool pullToCloseInTopPanel; // @synthesize pullToCloseInTopPanel=_pullToCloseInTopPanel;
@property(nonatomic) _Bool swipeToOpenInTopPanel; // @synthesize swipeToOpenInTopPanel=_swipeToOpenInTopPanel;
@property(nonatomic) double topPanelHeight; // @synthesize topPanelHeight=_topPanelHeight;
@property(retain, nonatomic) UIView *separatorCatchView; // @synthesize separatorCatchView=_separatorCatchView;
@property(nonatomic) double separatorCatchOffsetY; // @synthesize separatorCatchOffsetY=_separatorCatchOffsetY;
@property(retain, nonatomic) UIView *separatorTouchView; // @synthesize separatorTouchView=_separatorTouchView;
@property(nonatomic) struct UIEdgeInsets separatorTouchInsets; // @synthesize separatorTouchInsets=_separatorTouchInsets;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIViewController *bottomPanelViewController; // @synthesize bottomPanelViewController=_bottomPanelViewController;
@property(retain, nonatomic) UIViewController *topPanelViewController; // @synthesize topPanelViewController=_topPanelViewController;
- (void).cxx_destruct;
- (void)reportCurrentPanelHeightsWillAnimateLayoutUpdates:(_Bool)arg1;
- (void)reportFuturePanelHeightsWillAnimateLayoutUpdates:(_Bool)arg1;
- (void)reportCurrentBottomPanelHeight:(double)arg1 willAnimateLayoutUpdates:(_Bool)arg2;
- (void)reportCurrentTopPanelHeight:(double)arg1 willAnimateLayoutUpdates:(_Bool)arg2;
- (void)reportFutureBottomPanelHeight:(double)arg1 willAnimateLayoutUpdates:(_Bool)arg2;
- (void)reportFutureTopPanelHeight:(double)arg1 willAnimateLayoutUpdates:(_Bool)arg2;
- (void)scrollView:(id)arg1 willSetContentOffset:(double)arg2 isEndingDragging:(_Bool)arg3 animationDuration:(double)arg4;
- (_Bool)scrollViewMatchesBottomPanel:(id)arg1;
- (_Bool)scrollViewMatchesTopPanel:(id)arg1;
- (void)addGestureRecognizers;
- (void)addChildConstraints;
- (void)removeChildConstraints;
- (void)updateChildConstraints;
- (void)manageTopAndBottomPanelViewControllersAndAddConstraints;
- (void)manageBottomPanelViewControllerAndAddConstraints;
- (void)unmanageBottomPanelViewController;
- (void)manageTopPanelViewControllerAndAddConstraints;
- (void)unmanageTopPanelViewController;
- (double)separatorCatchY;
- (struct CGRect)separatorTouchFrame;
- (struct CGRect)separatorTouchBounds;
@property(readonly, nonatomic) CDStruct_c3b9c2ee topPanelHeightRange;
@property(readonly, nonatomic) double totalPanelHeight;
@property(readonly, nonatomic) double layoutHeight;
- (void)setupTopBottomSplitViewController;
- (void)handleSeparatorPan:(id)arg1;
- (void)handleSeparatorTap:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)bottomPanelDidSetHeight:(double)arg1 willAnimateLayoutUpdates:(_Bool)arg2;
- (void)topPanelDidSetHeight:(double)arg1 willAnimateLayoutUpdates:(_Bool)arg2;
- (void)bottomPanelWillSetHeight:(double)arg1 willAnimateLayoutUpdates:(_Bool)arg2;
- (void)topPanelWillSetHeight:(double)arg1 willAnimateLayoutUpdates:(_Bool)arg2;
- (void)didEndDraggingWithTopHeight:(double)arg1;
- (void)willEndDraggingWithTopHeight:(double *)arg1;
- (void)willBeginDragging;
- (void)didTapSeparator;
- (void)updateForNewBounds;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)updateViewConstraints;
- (void)viewDidLoad;
- (void)setBottomPanelMaximizedAnimated:(_Bool)arg1;
@property(readonly, nonatomic) _Bool bottomPanelMaximized;
- (void)setBottomPanelMinimizedAnimated:(_Bool)arg1;
@property(readonly, nonatomic) _Bool bottomPanelMinimized;
- (void)setBottomPanelHiddenAnimated:(_Bool)arg1;
@property(readonly, nonatomic) _Bool bottomPanelHidden;
@property(nonatomic) double bottomPanelMaximumHeight;
@property(nonatomic) double bottomPanelMinimumHeight;
@property(nonatomic) double bottomPanelHeight;
- (void)setBottomPanelHeight:(double)arg1 animationDuration:(double)arg2 animationOptions:(unsigned long long)arg3 invokeSetNeedsUpdateConstraints:(_Bool)arg4;
- (void)setBottomPanelHeight:(double)arg1 animated:(_Bool)arg2 invokeSetNeedsUpdateConstraints:(_Bool)arg3;
- (void)setBottomPanelHeight:(double)arg1 animated:(_Bool)arg2;
- (void)setTopPanelMaximizedAnimated:(_Bool)arg1;
@property(readonly, nonatomic) _Bool topPanelMaximized;
- (void)setTopPanelMinimizedAnimated:(_Bool)arg1;
@property(readonly, nonatomic) _Bool topPanelMinimized;
- (void)setTopPanelHiddenAnimated:(_Bool)arg1;
@property(readonly, nonatomic) _Bool topPanelHidden;
@property(nonatomic) double topPanelMaximumHeight;
@property(nonatomic) double topPanelMinimumHeight;
- (void)setTopPanelHeight:(double)arg1 animationDuration:(double)arg2 animationOptions:(unsigned long long)arg3 invokeSetNeedsUpdateConstraints:(_Bool)arg4;
- (void)setTopPanelHeight:(double)arg1 animated:(_Bool)arg2 invokeSetNeedsUpdateConstraints:(_Bool)arg3;
- (void)setTopPanelHeight:(double)arg1 animated:(_Bool)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


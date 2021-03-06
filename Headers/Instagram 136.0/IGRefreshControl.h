//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class CADisplayLink, IGRefreshSpinner, UIScrollView, UISelectionFeedbackGenerator;
@protocol IGRefreshControlContentInsetDataSource, IGRefreshControlDelegate;

@interface IGRefreshControl : UIControl
{
    UIScrollView *_scrollView;
    IGRefreshSpinner *_spinner;
    UISelectionFeedbackGenerator *_feedbackGenerator;
    CADisplayLink *_displayLink;
    long long _refreshState;
    double _originalTopContentInset;
    double _disappearProgress;
    double _disappearInitialOffset;
    double _beginTime;
    id <IGRefreshControlDelegate> _delegate;
    id <IGRefreshControlContentInsetDataSource> _contentInsetDataSource;
    double _refreshControlTopInset;
    double _spinnerTopOffset;
    double _triggerHeight;
}

@property(nonatomic) double triggerHeight; // @synthesize triggerHeight=_triggerHeight;
@property(nonatomic) double spinnerTopOffset; // @synthesize spinnerTopOffset=_spinnerTopOffset;
@property(nonatomic) double refreshControlTopInset; // @synthesize refreshControlTopInset=_refreshControlTopInset;
@property(nonatomic) __weak id <IGRefreshControlContentInsetDataSource> contentInsetDataSource; // @synthesize contentInsetDataSource=_contentInsetDataSource;
@property(readonly, nonatomic) long long refreshState; // @synthesize refreshState=_refreshState;
@property(nonatomic) __weak id <IGRefreshControlDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_animateClosed;
- (void)_setTopContentInset:(double)arg1;
- (void)_reset;
- (void)_cancelDisplayLink;
- (void)_beginRefreshingStateUserInteractive:(_Bool)arg1;
- (_Bool)_userInitiatedScrolling;
- (void)_updateWithAppearingProgress:(double)arg1;
- (void)_updateDisappearAnimation;
- (void)_adjustContentInsetForLoading;
- (double)_scrollVelocity;
- (double)_realContentOffsetY;
- (double)_animationProgress;
- (double)_viewHeight;
- (double)_backgroundViewHeight;
- (void)_layoutInSuperView;
- (void)finishLoading;
- (void)startLoadingAnimated:(_Bool)arg1;
- (void)scrollViewDidEndDragging;
- (void)_updateInitialOriginalTopContentInset;
- (void)scrollViewDidScroll;
- (double)_idleTopContentInset;
- (void)updateTopContentInset;
- (void)layoutSubviews;
- (id)initWithScrollView:(id)arg1 triggerHeight:(double)arg2 spinnerTopOffset:(double)arg3;
- (id)initWithScrollView:(id)arg1 spinnerTopOffset:(double)arg2;
- (id)initWithScrollView:(id)arg1 triggerHeight:(double)arg2;
- (id)initWithScrollView:(id)arg1;

@end


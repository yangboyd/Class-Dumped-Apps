//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCTView.h"

#import "RCTAutoInsetsProtocol-Protocol.h"
#import "RCTScrollableProtocol-Protocol.h"
#import "RCTUIManagerObserver-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSDictionary, NSHashTable, NSMutableArray, NSString, RCTCustomScrollView, RCTEventDispatcher, UIScrollView, UIView;

@interface RCTScrollView : RCTView <RCTUIManagerObserver, UIScrollViewDelegate, RCTScrollableProtocol, RCTAutoInsetsProtocol>
{
    RCTEventDispatcher *_eventDispatcher;
    struct CGRect _prevFirstVisibleFrame;
    UIView *_firstVisibleView;
    RCTCustomScrollView *_scrollView;
    UIView *_contentView;
    double _lastScrollDispatchTime;
    NSMutableArray *_cachedChildFrames;
    _Bool _allowNextScrollNoMatterWhat;
    struct CGRect _lastClippedToRect;
    unsigned short _coalescingKey;
    NSString *_lastEmittedEventName;
    NSHashTable *_scrollListeners;
    _Bool _automaticallyAdjustContentInsets;
    _Bool _DEPRECATED_sendUpdatedChildFrames;
    _Bool _scrollToOverflowEnabled;
    _Bool _snapToStart;
    _Bool _snapToEnd;
    int _snapToInterval;
    double _scrollEventThrottle;
    NSDictionary *_maintainVisibleContentPosition;
    NSArray *_snapToOffsets;
    NSString *_snapToAlignment;
    CDUnknownBlockType _onScrollBeginDrag;
    CDUnknownBlockType _onScroll;
    CDUnknownBlockType _onScrollToTop;
    CDUnknownBlockType _onScrollEndDrag;
    CDUnknownBlockType _onMomentumScrollBegin;
    CDUnknownBlockType _onMomentumScrollEnd;
    struct CGSize _contentSize;
    struct UIEdgeInsets _contentInset;
}

@property(copy, nonatomic) CDUnknownBlockType onMomentumScrollEnd; // @synthesize onMomentumScrollEnd=_onMomentumScrollEnd;
@property(copy, nonatomic) CDUnknownBlockType onMomentumScrollBegin; // @synthesize onMomentumScrollBegin=_onMomentumScrollBegin;
@property(copy, nonatomic) CDUnknownBlockType onScrollEndDrag; // @synthesize onScrollEndDrag=_onScrollEndDrag;
@property(copy, nonatomic) CDUnknownBlockType onScrollToTop; // @synthesize onScrollToTop=_onScrollToTop;
@property(copy, nonatomic) CDUnknownBlockType onScroll; // @synthesize onScroll=_onScroll;
@property(copy, nonatomic) CDUnknownBlockType onScrollBeginDrag; // @synthesize onScrollBeginDrag=_onScrollBeginDrag;
@property(copy, nonatomic) NSString *snapToAlignment; // @synthesize snapToAlignment=_snapToAlignment;
@property(nonatomic) _Bool snapToEnd; // @synthesize snapToEnd=_snapToEnd;
@property(nonatomic) _Bool snapToStart; // @synthesize snapToStart=_snapToStart;
@property(copy, nonatomic) NSArray *snapToOffsets; // @synthesize snapToOffsets=_snapToOffsets;
@property(nonatomic) int snapToInterval; // @synthesize snapToInterval=_snapToInterval;
@property(nonatomic) _Bool scrollToOverflowEnabled; // @synthesize scrollToOverflowEnabled=_scrollToOverflowEnabled;
@property(copy, nonatomic) NSDictionary *maintainVisibleContentPosition; // @synthesize maintainVisibleContentPosition=_maintainVisibleContentPosition;
@property(nonatomic) double scrollEventThrottle; // @synthesize scrollEventThrottle=_scrollEventThrottle;
@property(nonatomic) _Bool DEPRECATED_sendUpdatedChildFrames; // @synthesize DEPRECATED_sendUpdatedChildFrames=_DEPRECATED_sendUpdatedChildFrames;
@property(nonatomic) _Bool automaticallyAdjustContentInsets; // @synthesize automaticallyAdjustContentInsets=_automaticallyAdjustContentInsets;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)sendScrollEventWithName:(id)arg1 scrollView:(id)arg2 userData:(id)arg3;
- (void)setContentInsetAdjustmentBehavior:(long long)arg1;
- (struct UIEdgeInsets)scrollIndicatorInsets;
- (void)setScrollIndicatorInsets:(struct UIEdgeInsets)arg1;
- (double)zoomScale;
- (void)setZoomScale:(double)arg1;
- (_Bool)showsVerticalScrollIndicator;
- (void)setShowsVerticalScrollIndicator:(_Bool)arg1;
- (_Bool)showsHorizontalScrollIndicator;
- (void)setShowsHorizontalScrollIndicator:(_Bool)arg1;
- (_Bool)scrollsToTop;
- (void)setScrollsToTop:(_Bool)arg1;
- (_Bool)isPagingEnabled;
- (void)setPagingEnabled:(_Bool)arg1;
- (_Bool)isScrollEnabled;
- (void)setScrollEnabled:(_Bool)arg1;
- (double)minimumZoomScale;
- (void)setMinimumZoomScale:(double)arg1;
- (double)maximumZoomScale;
- (void)setMaximumZoomScale:(double)arg1;
- (long long)keyboardDismissMode;
- (void)setKeyboardDismissMode:(long long)arg1;
- (long long)indicatorStyle;
- (void)setIndicatorStyle:(long long)arg1;
- (_Bool)isDirectionalLockEnabled;
- (void)setDirectionalLockEnabled:(_Bool)arg1;
- (double)decelerationRate;
- (void)setDecelerationRate:(double)arg1;
- (_Bool)canCancelContentTouches;
- (void)setCanCancelContentTouches:(_Bool)arg1;
- (_Bool)bouncesZoom;
- (void)setBouncesZoom:(_Bool)arg1;
- (_Bool)bounces;
- (void)setBounces:(_Bool)arg1;
- (_Bool)alwaysBounceVertical;
- (void)setAlwaysBounceVertical:(_Bool)arg1;
- (_Bool)alwaysBounceHorizontal;
- (void)setAlwaysBounceHorizontal:(_Bool)arg1;
- (void)uiManagerWillPerformMounting:(id)arg1;
- (void)updateContentOffsetIfNeeded;
- (struct CGPoint)calculateOffsetForContentSize:(struct CGSize)arg1;
- (struct CGSize)_calculateViewportSize;
- (id)viewForZoomingInScrollView:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)calculateChildFramesData;
- (void)scrollViewDidScroll:(id)arg1;
- (void)removeScrollListener:(id)arg1;
- (void)addScrollListener:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)refreshContentInset;
- (void)zoomToRect:(struct CGRect)arg1 animated:(_Bool)arg2;
- (void)scrollToEnd:(_Bool)arg1;
- (void)scrollToOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)scrollToOffset:(struct CGPoint)arg1;
- (_Bool)isHorizontal:(id)arg1;
- (void)updateClippedSubviews;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setClipsToBounds:(_Bool)arg1;
@property(nonatomic) _Bool centerContent;
- (void)didSetProps:(id)arg1;
- (void)didUpdateReactSubviews;
- (void)removeReactSubview:(id)arg1;
- (void)insertReactSubview:(id)arg1 atIndex:(long long)arg2;
- (void)setRemoveClippedSubviews:(_Bool)arg1;
- (void)setReactLayoutDirection:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithEventDispatcher:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


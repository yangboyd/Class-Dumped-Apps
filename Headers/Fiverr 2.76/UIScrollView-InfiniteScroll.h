//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class UIView;

@interface UIScrollView (InfiniteScroll)
+ (void)load;
- (void)pb_setScrollViewContentInset:(struct UIEdgeInsets)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)pb_scrollToInfiniteIndicatorIfNeeded:(_Bool)arg1 force:(_Bool)arg2;
- (void)pb_scrollToStart;
- (void)pb_scrollViewDidScroll:(struct CGPoint)arg1;
- (_Bool)pb_shouldShowInfiniteScroll;
- (void)pb_stopAnimatingInfiniteScrollWithCompletion:(CDUnknownBlockType)arg1;
- (void)pb_startAnimatingInfiniteScroll:(_Bool)arg1;
- (void)pb_beginInfinitScrollIfNeeded:(_Bool)arg1;
- (void)pb_positionInfiniteScrollIndicatorWithContentSize:(struct CGSize)arg1;
- (double)pb_infiniteIndicatorRowSize;
- (id)pb_getOrCreateActivityIndicatorView;
- (void)pb_callInfiniteScrollHandler;
- (double)pb_originalEndInset;
- (_Bool)pb_hasContent;
- (double)pb_clampContentSizeToFitVisibleBounds:(struct CGSize)arg1;
- (void)pb_setContentSize:(struct CGSize)arg1;
- (void)pb_setContentOffset:(struct CGPoint)arg1;
- (void)pb_handlePanGesture:(id)arg1;
- (id)pb_infiniteScrollState;
@property(nonatomic) double infiniteScrollTriggerOffset;
- (void)setShouldShowInfiniteScrollHandler:(CDUnknownBlockType)arg1;
@property(nonatomic) double infiniteScrollIndicatorMargin;
@property(retain, nonatomic) UIView *infiniteScrollIndicatorView;
@property(nonatomic) long long infiniteScrollIndicatorStyle;
@property(readonly, nonatomic, getter=isAnimatingInfiniteScroll) _Bool animatingInfiniteScroll;
@property(nonatomic) unsigned long long infiniteScrollDirection;
- (void)finishInfiniteScrollWithCompletion:(CDUnknownBlockType)arg1;
- (void)finishInfiniteScroll;
- (void)beginInfiniteScroll:(_Bool)arg1;
- (void)removeInfiniteScroll;
- (void)addInfiniteScrollWithHandler:(CDUnknownBlockType)arg1;
@end


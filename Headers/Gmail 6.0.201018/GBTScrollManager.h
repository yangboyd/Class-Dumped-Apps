//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GBTNestedScrollControllerObserver-Protocol.h"
#import "GBTNestedScrollControllerScrollDelegate-Protocol.h"
#import "GBTTouchStartLocationGestureRecognizerDelegate-Protocol.h"
#import "GBTTrackingScrollViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class GBTNestedScrollController, GBTTrackingScrollView, NSString, UIView;
@protocol GBTScrollManagerAccessibilityDelegate, UIScrollViewDelegate;

@interface GBTScrollManager : NSObject <GBTNestedScrollControllerScrollDelegate, GBTTrackingScrollViewDelegate, GBTNestedScrollControllerObserver, GBTTouchStartLocationGestureRecognizerDelegate, UIScrollViewDelegate>
{
    _Bool _isExecutingUserDrivenScroll;
    struct {
        _Bool respondToDidScroll;
        _Bool respondToDidZoom;
        _Bool respondToWillBeginDragging;
        _Bool respondToWillEndDragging;
        _Bool respondToDidEndDragging;
        _Bool respondToWillBeginDecelerating;
        _Bool respondToDidEndDecelerating;
        _Bool respondToDidEndScrollingAnimation;
        _Bool respondToWillBeginZooming;
        _Bool respondToDidEndZooming;
        _Bool respondToShouldScrollToTop;
        _Bool respondToDidScrollToTop;
    } _delegateFlag;
    id <UIScrollViewDelegate> _scrollViewDelegate;
    id <GBTScrollManagerAccessibilityDelegate> _scrollAccessibilityDelegate;
    GBTNestedScrollController *_topLevelController;
    GBTTrackingScrollView *_trackingScrollView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GBTTrackingScrollView *trackingScrollView; // @synthesize trackingScrollView=_trackingScrollView;
@property(retain, nonatomic) GBTNestedScrollController *topLevelController; // @synthesize topLevelController=_topLevelController;
@property(nonatomic) __weak id <GBTScrollManagerAccessibilityDelegate> scrollAccessibilityDelegate; // @synthesize scrollAccessibilityDelegate=_scrollAccessibilityDelegate;
@property(nonatomic) __weak id <UIScrollViewDelegate> scrollViewDelegate; // @synthesize scrollViewDelegate=_scrollViewDelegate;
- (_Bool)trackingScrollView:(id)arg1 didAccessibilityScroll:(long long)arg2;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)touchStartLocationGestureRecognizer:(id)arg1 didStartTouchAtLocation:(struct CGPoint)arg2;
@property(readonly, nonatomic) GBTScrollManager *scrollManager;
- (void)nestedScrollController:(id)arg1 didProgrammaticScrollToOffset:(struct CGPoint)arg2;
- (void)nestedScrollControllerDidUpdateContentSize:(id)arg1;
- (void)nestedScrollControllerDidUpdateScrollOffset:(id)arg1;
- (double)maxScrollOffset;
@property(readonly, nonatomic) UIView *containerView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


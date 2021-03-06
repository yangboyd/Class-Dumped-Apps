//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink, UIScrollView;

@interface YTEditScrollViewAnimator : NSObject
{
    CADisplayLink *_displayLink;
    double _startTime;
    double _duration;
    struct CGPoint _targetOffset;
    struct CGPoint _startOffset;
    UIScrollView *_scrollView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)complete;
- (void)displayLinkDidUpdate:(id)arg1;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2 duration:(double)arg3;
- (void)setContentOffset:(struct CGPoint)arg1;
@property(readonly, nonatomic, getter=isAnimating) _Bool animating;
- (void)setupDisplayLink;
- (void)dealloc;
- (id)initWithScrollView:(id)arg1;

@end


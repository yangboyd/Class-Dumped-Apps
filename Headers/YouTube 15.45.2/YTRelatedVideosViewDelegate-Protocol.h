//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class UIPanGestureRecognizer;

@protocol YTRelatedVideosViewDelegate <NSObject>
- (void)relatedVideosViewDidRecognizeTap;
- (void)relatedVideosViewDidRecognizeVerticalPan:(UIPanGestureRecognizer *)arg1;
- (void)relatedVideoExpandedFraction:(double)arg1;
- (void)relatedVideosWillChangeFromState:(long long)arg1 toState:(long long)arg2;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView;

@interface YTScaleResponseManager : NSObject
{
    UIView *_animationView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIView *animationView; // @synthesize animationView=_animationView;
- (void)performEaseOutAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (void)performEaseInAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (double)scaleFactor;
- (id)globalMotionCurve;
- (void)attachToView:(id)arg1;
- (void)startTouchEndedAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (void)startTouchBeganAnimationWithCompletion:(CDUnknownBlockType)arg1;

@end


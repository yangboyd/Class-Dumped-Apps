//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OverlayZoomAnimationController.h"

@interface MorphAnimationController : OverlayZoomAnimationController
{
    _Bool _pullDownToDismiss;
    long long _navigationOperation;
}

@property(nonatomic) long long navigationOperation; // @synthesize navigationOperation=_navigationOperation;
@property(nonatomic) _Bool pullDownToDismiss; // @synthesize pullDownToDismiss=_pullDownToDismiss;
- (struct CGRect)areaOfInterest:(double)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

@end


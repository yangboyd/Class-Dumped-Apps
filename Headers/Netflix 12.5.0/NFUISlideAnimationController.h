//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NFUIAnimationControllerProtocol-Protocol.h"

@class NSString, UIView;

@interface NFUISlideAnimationController : NSObject <NFUIAnimationControllerProtocol>
{
    _Bool _reverse;
    UIView *overlayView;
    double _duration;
    long long _direction;
    unsigned long long _easing;
}

@property(nonatomic) unsigned long long easing; // @synthesize easing=_easing;
@property(nonatomic) long long direction; // @synthesize direction=_direction;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) _Bool reverse; // @synthesize reverse=_reverse;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView;
- (void).cxx_destruct;
- (struct CGAffineTransform)transformForSize:(struct CGSize)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ACCPanelAnimator-Protocol.h"

@class NSString, UIView;

@interface ACCPanelSlideUpAnimator : NSObject <ACCPanelAnimator>
{
    CDUnknownBlockType animationDidEnd;
    CDUnknownBlockType animationWillStart;
    UIView *targetView;
    unsigned long long type;
    UIView *containerView;
    double _duration;
    double _targetAnimationHeight;
}

@property(nonatomic) double targetAnimationHeight; // @synthesize targetAnimationHeight=_targetAnimationHeight;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView;
@property(nonatomic) unsigned long long type; // @synthesize type;
@property(retain, nonatomic) UIView *targetView; // @synthesize targetView;
@property(copy, nonatomic) CDUnknownBlockType animationWillStart; // @synthesize animationWillStart;
@property(copy, nonatomic) CDUnknownBlockType animationDidEnd; // @synthesize animationDidEnd;
- (void).cxx_destruct;
- (void)animate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


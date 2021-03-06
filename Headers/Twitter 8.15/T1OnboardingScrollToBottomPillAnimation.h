//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFNPillAnimationProvider-Protocol.h>

@class NSString;

@interface T1OnboardingScrollToBottomPillAnimation : NSObject <TFNPillAnimationProvider>
{
    _Bool _shouldSuppressTransformAnimation;
}

@property(nonatomic) _Bool shouldSuppressTransformAnimation; // @synthesize shouldSuppressTransformAnimation=_shouldSuppressTransformAnimation;
- (void)resetAllAnimationsOnPillControl:(id)arg1;
- (void)hidePillControl:(id)arg1 pillTapped:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentPillControl:(id)arg1 fromView:(id)arg2 withOffset:(double)arg3 autoHideInterval:(double)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


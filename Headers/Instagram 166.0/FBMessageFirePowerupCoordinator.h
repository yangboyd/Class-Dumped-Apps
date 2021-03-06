//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/FBMessagePowerupSupporting-Protocol.h>

@class CAGradientLayer, FBParticleLayer, NSArray, NSString, NSURL, UIImage, UIImpactFeedbackGenerator, UIView;
@protocol FBMessagePowerupDelegate, FBMessagePowerupKeyframesProtocol;

@interface FBMessageFirePowerupCoordinator : NSObject <FBMessagePowerupSupporting>
{
    UIView *_fireBackgroundView;
    CAGradientLayer *_fireGradientLayer;
    NSArray *_startColors;
    NSArray *_endColors;
    UIView *_foregroundMessageView;
    UIView *_backgroundMessageView;
    UIImage *_fireImage;
    FBParticleLayer *_fire1;
    FBParticleLayer *_fire2;
    _Bool _playingTapAnimation;
    NSURL *_smallKeyframesURL;
    NSURL *_largeKeyframesURL;
    UIView<FBMessagePowerupKeyframesProtocol> *_fireAnimationView;
    double _cornerRadius;
    _Bool _useLargeFire;
    UIImpactFeedbackGenerator *_feedbackGenerator;
    _Bool _useHapticFeedback;
    id <FBMessagePowerupDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_loadFireAnimationWithCompletionBlock:(CDUnknownBlockType)arg1 keyframesDelegate:(id)arg2;
- (void)_animateFiresWithAnimationView:(id)arg1;
- (void)_performTapAnimationWithAnimationView:(id)arg1;
- (void)configureWithViewModel:(CDStruct_ca0fb78e)arg1;
- (_Bool)shouldBringMessageCellToFrontOfMessageList;
- (void)playAnimationWithThreadForegroundView:(id)arg1 threadBackgroundView:(id)arg2 composerMinY:(double)arg3 keyframesDelegate:(id)arg4 useHapticFeedback:(_Bool)arg5;
- (void)resetAnimation;
- (void)layoutEffect;
- (id)initWithMessagePowerupDelegate:(id)arg1 fireImage:(id)arg2 smallKeyframesURL:(id)arg3 largeKeyframesURL:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


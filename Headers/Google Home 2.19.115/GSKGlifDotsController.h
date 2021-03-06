//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GSKGlifDotsController-Protocol.h"
#import "GSKSpeechVolumeStreamSubscriber-Protocol.h"

@class GSKGlifDotsView, GSKGlifSpeechVolumeStream, NSString;
@protocol GSKGlifAnimator, GSKGlifDotsControllerAnimationDelegate, GSKGlifDotsControllerDelegate, GSKGlifValueModifier;

@interface GSKGlifDotsController : NSObject <GSKSpeechVolumeStreamSubscriber, GSKGlifDotsController>
{
    GSKGlifDotsView *_dotsView;
    id <GSKGlifAnimator> _currentAnimator;
    unsigned long long _replyStreamStatus;
    id <GSKGlifValueModifier> _valueModifier;
    _Bool _isTransitioning;
    _Bool _enableValueAdjustment;
    unsigned long long _dotsState;
    id <GSKGlifDotsControllerAnimationDelegate> _animationDelegate;
    id <GSKGlifDotsControllerDelegate> _delegate;
    GSKGlifSpeechVolumeStream *_speechVolumeStream;
}

@property(retain, nonatomic) GSKGlifSpeechVolumeStream *speechVolumeStream; // @synthesize speechVolumeStream=_speechVolumeStream;
@property(nonatomic) _Bool enableValueAdjustment; // @synthesize enableValueAdjustment=_enableValueAdjustment;
@property(nonatomic) __weak id <GSKGlifDotsControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <GSKGlifDotsControllerAnimationDelegate> animationDelegate; // @synthesize animationDelegate=_animationDelegate;
@property(readonly, nonatomic) unsigned long long dotsState; // @synthesize dotsState=_dotsState;
@property(readonly, nonatomic) _Bool isTransitioning; // @synthesize isTransitioning=_isTransitioning;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)notifyOnEndingRestingAnimation;
- (void)notifyOnStartingListeningAnimation;
- (void)notifyOnStartingThinkingAnimation;
- (void)notifyOnStartingReplyingAnimation;
- (void)notifyOnEndingGotItAnimation;
- (void)notifyOnStartingDidNotGetItAnimation;
- (void)notifiyOnStartingGotItAnimation;
- (void)updateAnimatorWithValue:(double)arg1;
- (_Bool)canTransitionToDotState:(unsigned long long)arg1;
- (void)startTransition:(id)arg1 toState:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)streamDidEncounterError;
- (void)streamDidComplete;
- (void)streamDidEmitNext:(double)arg1;
- (void)makeDotsToSettleDownWithCompletion:(CDUnknownBlockType)arg1;
- (void)tellDotsToEndAndReset;
- (void)tellDotsToReplyWithUpdatedValue:(double)arg1;
- (void)tellDotsToGotItWithCompletion:(CDUnknownBlockType)arg1;
- (void)tellDotsToThink;
- (void)tellDotsToThinkWithGotIt;
- (void)tellDotsDidNotGetIt;
- (void)tellDotsToListenWithUpdatedValue:(double)arg1;
- (void)startFromReplyAnimation;
- (void)startFromThinkingAnimation;
- (void)replyWithSpeechStream:(id)arg1;
- (void)listenToSpeechStream:(id)arg1;
- (void)tellDotsToStartReplying;
- (void)makeDotsToStopWithCompletion:(CDUnknownBlockType)arg1;
- (void)makeDotsStopImmediately;
- (void)startDotsListeningAnimation;
- (void)tellDotsToAnimateFromLoading;
@property(readonly, nonatomic) _Bool isAnimating;
- (id)initWithDotsView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


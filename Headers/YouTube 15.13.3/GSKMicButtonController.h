//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/GSKSpeechVolumeStream-Protocol.h>
#import <Module_Framework/GSKSpeechVolumeStreamFactory-Protocol.h>

@class CADisplayLink, GSKRedMicButton, NSDate, NSMutableArray, NSString, UIActivityIndicatorView, UIImageView, UIView;
@protocol GSKAudioLevelSource, GSKMicButtonControllerDelegate;

@interface GSKMicButtonController : NSObject <GSKSpeechVolumeStream, GSKSpeechVolumeStreamFactory>
{
    UIActivityIndicatorView *_spinner;
    UIImageView *_grayCircle;
    CADisplayLink *_displayLinkForGrayCircle;
    CADisplayLink *_displayLinkForRings;
    NSDate *_audioLevelStart;
    id <GSKAudioLevelSource> _audioSource;
    double _previousAudioLevel;
    NSMutableArray *_animatingRings;
    id <GSKMicButtonControllerDelegate> _delegate;
    UIView *_micButtonContainerView;
    GSKRedMicButton *_micButton;
}

@property(readonly, nonatomic) GSKRedMicButton *micButton; // @synthesize micButton=_micButton;
@property(readonly, nonatomic) UIView *micButtonContainerView; // @synthesize micButtonContainerView=_micButtonContainerView;
@property(nonatomic) __weak id <GSKMicButtonControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)resetVoiceButtonAccessiblity;
- (void)animateSpinnerToVisible:(_Bool)arg1;
- (void)endAllAnimationsWithCompletion:(CDUnknownBlockType)arg1;
- (void)beginAnimatingRingWithDelay:(double)arg1;
- (void)setGrayCircleDiameter:(double)arg1;
- (void)buttonTouchUpInside;
- (void)dLinkCallbackForAnimatingRing;
- (void)dLinkCallbackForUpdatingGrayCircle;
- (void)emitStreamErrorEncountered;
- (void)emitStreamCompletion;
- (void)stopAllAnimations;
- (void)pauseAndShowSpinAnimation;
- (void)beginListeningAnimation;
- (void)playInitialRingsAnimation;
- (void)dealloc;
- (id)init;
- (id)createSpeechVolumeStreamWithAudioSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


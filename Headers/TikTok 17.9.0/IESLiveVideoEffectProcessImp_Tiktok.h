//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IESLiveMTVideoEffectProcessing-Protocol.h"

@class LiveStreamCapture, NSString;
@protocol IESLiveSettings;

@interface IESLiveVideoEffectProcessImp_Tiktok : NSObject <IESLiveMTVideoEffectProcessing>
{
    LiveStreamCapture *_liveCapture;
    long long _previousResultCount;
    id <IESLiveSettings> _settings;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <IESLiveSettings> settings; // @synthesize settings=_settings;
@property(nonatomic) long long previousResultCount; // @synthesize previousResultCount=_previousResultCount;
@property(retain, nonatomic) LiveStreamCapture *liveCapture; // @synthesize liveCapture=_liveCapture;
- (unsigned long long)getLSLiveEffectGestureTypeFromLiveType:(unsigned long long)arg1;
- (struct LSLiveIntensityParam_t)convertToLSIndensityFromLiveIndensity:(struct IESLiveIndensityParam_t)arg1;
- (void)stopSpeechRecognizing;
- (void)startSpeechRecognizing;
- (_Bool)handlePanEventWithTranslation:(struct CGPoint)arg1 position:(struct CGPoint)arg2;
- (_Bool)handleLongPressEventWithPosition:(struct CGPoint)arg1;
- (_Bool)handleRotationEvent:(double)arg1;
- (_Bool)handleTouchEvent:(struct CGPoint)arg1;
- (_Bool)handleScaleEvent:(double)arg1;
- (_Bool)handleTouchDown:(struct CGPoint)arg1 withType:(unsigned long long)arg2;
- (_Bool)handleTouchUp:(struct CGPoint)arg1 withType:(unsigned long long)arg2;
- (id)getCurrentComposerNodes;
- (void)resetRecording;
- (void)startRecordingWithDuration:(double)arg1 delay:(double)arg2 fps:(unsigned long long)arg3 WithCompletionHandler:(CDUnknownBlockType)arg4;
- (void)resumeEffect:(long long)arg1;
- (void)pauseEffect:(long long)arg1;
- (void)sendMessage:(unsigned long long)arg1 param1:(unsigned long long)arg2 param2:(unsigned long long)arg3 userInfo:(id)arg4;
- (void)sendMessage:(unsigned long long)arg1 param1:(unsigned long long)arg2 param2:(unsigned long long)arg3;
- (void)sendMessage:(unsigned long long)arg1 param1:(unsigned long long)arg2;
- (void)sendMessage:(unsigned long long)arg1;
- (void)setEffectMessageBlock:(CDUnknownBlockType)arg1;
- (void)enableFakeCake:(_Bool)arg1;
- (void)applyEffectKey:(id)arg1 image:(id)arg2;
- (void)switchFilterWithLeftPath:(id)arg1 rightPath:(id)arg2 progress:(double)arg3;
- (void)setVideoProcessedCallback:(CDUnknownBlockType)arg1;
- (void)setMaxStickerMemoryCache:(unsigned long long)arg1;
- (void)setCakeDetectStatusBlock:(CDUnknownBlockType)arg1;
- (void)applyIndensity:(struct IESLiveIndensityParam_t)arg1 type:(long long)arg2;
- (void)applyEffect:(id)arg1 type:(long long)arg2 enableFakeCake:(_Bool)arg3;
- (void)applyEffect:(id)arg1 type:(long long)arg2;
- (void)removeComposerNodes:(id)arg1 tags:(id)arg2;
- (void)removeComposerNodes:(id)arg1;
- (void)updateComposerNode:(id)arg1 tag:(id)arg2 value:(double)arg3;
- (void)applyComposerNodes:(id)arg1 enableFakeCake:(_Bool)arg2;
- (void)applyComposerNodes:(id)arg1 tags:(id)arg2 enableFakeCake:(_Bool)arg3;
- (void)setComposerMode:(int)arg1 orderType:(int)arg2;
- (void)setPurgeMemoryIfNeeded:(_Bool)arg1;
- (void)setEffectedABInfo:(id)arg1;
- (struct CGSize)effectedOutputSize;
- (void)setEffectedOutputSize:(struct CGSize)arg1;
- (id)resetPreviewView:(id)arg1;
- (void)stopAudioCapture;
- (void)stopVideoCapture;
- (void)startAudioCapture;
- (void)startVideoCapture;
- (void)audioCaptureInterrupted:(_Bool)arg1;
- (void)cleanup;
- (id)initWithLiveCoreCapture:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


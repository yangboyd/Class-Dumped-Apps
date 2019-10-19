//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ARCamera, ARSession, NSError;

@protocol ARSessionObserver <NSObject>

@optional
- (void)session:(ARSession *)arg1 didOutputAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (_Bool)sessionShouldAttemptRelocalization:(ARSession *)arg1;
- (void)sessionInterruptionEnded:(ARSession *)arg1;
- (void)sessionWasInterrupted:(ARSession *)arg1;
- (void)session:(ARSession *)arg1 cameraDidChangeTrackingState:(ARCamera *)arg2;
- (void)session:(ARSession *)arg1 didFailWithError:(NSError *)arg2;
@end


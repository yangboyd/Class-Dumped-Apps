//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class UIView;
@protocol SCPFrameProvidingDelegate, SCPFrameRecording;

@protocol SCPFrameProviding <NSObject>
@property(nonatomic) unsigned int color;
@property(nonatomic) __weak id <SCPFrameProvidingDelegate> delegate;
- (id <SCPFrameRecording>)frameRecorder;
- (void)captureFrameWithFlash:(_Bool)arg1 completion:(void (^)(struct opaqueCMSampleBuffer *, struct opaqueCMSampleBuffer *, NSError *))arg2;
- (void)focusWithPointOfInterest:(struct CGPoint)arg1;
- (void)resume;
- (void)pause;
- (void)updateWithInterfaceOrientation:(long long)arg1;
- (void)stop;
- (void)start;
- (void)prepareWithInterfaceOrientation:(long long)arg1;
- (_Bool)isRunning;
- (UIView *)previewView;
@end


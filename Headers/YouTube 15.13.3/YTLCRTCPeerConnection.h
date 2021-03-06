//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class RTCPeerConnection, YTLCRTCAudioBufferInjector, YTLCRTCHandshakeController, YTLCRTCVideoFrameInjector;

@interface YTLCRTCPeerConnection : NSObject
{
    YTLCRTCHandshakeController *_handshakeController;
    YTLCRTCVideoFrameInjector *_videoFrameInjector;
    YTLCRTCAudioBufferInjector *_audioBufferInjector;
    RTCPeerConnection *_peerConnection;
}

@property(retain, nonatomic) RTCPeerConnection *peerConnection; // @synthesize peerConnection=_peerConnection;
@property(retain, nonatomic) YTLCRTCAudioBufferInjector *audioBufferInjector; // @synthesize audioBufferInjector=_audioBufferInjector;
@property(retain, nonatomic) YTLCRTCVideoFrameInjector *videoFrameInjector; // @synthesize videoFrameInjector=_videoFrameInjector;
@property(retain, nonatomic) YTLCRTCHandshakeController *handshakeController; // @synthesize handshakeController=_handshakeController;
- (void).cxx_destruct;
- (id)mediaStream;
- (id)localVideoTrack;
- (id)localAudioTrack;
@property(nonatomic, getter=isAudioEnabled) _Bool audioEnabled;
- (void)close;
- (void)stopRTCEventLog;
- (void)startRTCEventLogWithFilePath:(id)arg1 maxSizeInBytes:(long long)arg2;
- (void)setBitrateBps:(int)arg1;
- (id)mediaStatisticsReporterWithDelegate:(id)arg1;
- (void)pushAudioData:(const char *)arg1 size:(unsigned long long)arg2 bytesPerFrame:(int)arg3 sampleRate:(int)arg4 numberOfChannels:(int)arg5 numberOfFrames:(int)arg6;
- (void)pushYUVPixelBuffer:(struct __CVBuffer *)arg1 timestampMilliseconds:(double)arg2;
- (void)connectToURL:(id)arg1 streamKey:(id)arg2 sessionPreferences:(id)arg3 encoderString:(id)arg4 completion:(CDUnknownBlockType)arg5 errorBlock:(CDUnknownBlockType)arg6;
- (id)initWithPeerConnection:(id)arg1 videoFrameInjector:(id)arg2 audioBufferInjector:(id)arg3;

@end


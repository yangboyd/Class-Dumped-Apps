//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HAMFrameSourceDelegate-Protocol.h"

@class AVPlayer, AVPlayerItem, AVPlayerItemVideoOutput, HAMSphericalVideoMesh, MLVideo, NSLock, NSString;
@protocol HAMFrameSource, YTGLVideoProviderDelegate;

@interface YTGLVideoProvider : NSObject <HAMFrameSourceDelegate>
{
    id <YTGLVideoProviderDelegate> _delegate;
    MLVideo *_video;
    _Bool _activePlayerIsAVPlayer;
    _Bool _HAMPlayerPaused;
    AVPlayer *_currentPlayer;
    AVPlayerItem *_currentPlayerItem;
    AVPlayerItemVideoOutput *_videoOutput;
    NSLock *_playerItemChangeLock;
    id <HAMFrameSource> _frameSource;
    long long _AVPlayerShaderType;
    long long _HAMPlayerShaderType;
    int _HAMPlayerProjectionType;
    _Bool _partialSpherical;
    HAMSphericalVideoMesh *_dynamicMeshLeft;
    HAMSphericalVideoMesh *_dynamicMeshRight;
    long long _dynamicVideoLayout;
}

@property(readonly, nonatomic) _Bool partialSpherical; // @synthesize partialSpherical=_partialSpherical;
@property(readonly, nonatomic) long long dynamicVideoLayout; // @synthesize dynamicVideoLayout=_dynamicVideoLayout;
@property(readonly, nonatomic) HAMSphericalVideoMesh *dynamicMeshRight; // @synthesize dynamicMeshRight=_dynamicMeshRight;
@property(readonly, nonatomic) HAMSphericalVideoMesh *dynamicMeshLeft; // @synthesize dynamicMeshLeft=_dynamicMeshLeft;
- (void).cxx_destruct;
- (struct __CVBuffer *)copyHAMPlayerPixelBufferForTimestamp:(double)arg1;
- (struct __CVBuffer *)copyAVPlayerPixelBufferForTimestamp:(double)arg1;
- (void)frameSourceDidUnpause:(id)arg1;
- (void)frameSourceDidPause:(id)arg1;
- (void)frameSourceDidDeactivate:(id)arg1;
- (void)frameSourceDidActivate:(id)arg1;
- (void)AVPlayerItemDidChange;
- (void)setAVPlayer:(id)arg1;
- (struct __CVBuffer *)copyPixelBufferForTimestamp:(double)arg1;
- (void)reportFatalError:(long long)arg1;
@property(readonly, nonatomic) struct CGSize videoViewportSize;
- (void)setVideo:(id)arg1 VRConfig:(id)arg2;
@property(readonly, nonatomic) long long shaderType;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


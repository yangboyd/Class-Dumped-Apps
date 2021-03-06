//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GLKViewDelegate-Protocol.h"
#import "GOOGRTCVideoRenderer-Protocol.h"

@class EAGLContext, GLKView, GOOGRTCVideoFrame, NSString, NSValue, RTCDisplayLinkTimer, RTCI420TextureCache, RTCNV12TextureCache;
@protocol GOOGRTCVideoViewDelegate, GOOGRTCVideoViewShading;

@interface GOOGRTCEAGLVideoView : UIView <GLKViewDelegate, GOOGRTCVideoRenderer>
{
    RTCDisplayLinkTimer *_timer;
    EAGLContext *_glContext;
    _Bool _isDirty;
    id <GOOGRTCVideoViewShading> _shader;
    RTCNV12TextureCache *_nv12TextureCache;
    RTCI420TextureCache *_i420TextureCache;
    long long _lastDrawnFrameTimeStampNs;
    id <GOOGRTCVideoViewDelegate> _delegate;
    GOOGRTCVideoFrame *_videoFrame;
    GLKView *_glkView;
    NSValue *_rotationOverride;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSValue *rotationOverride; // @synthesize rotationOverride=_rotationOverride;
@property(readonly, nonatomic) GLKView *glkView; // @synthesize glkView=_glkView;
@property(retain) GOOGRTCVideoFrame *videoFrame; // @synthesize videoFrame=_videoFrame;
@property(nonatomic) __weak id <GOOGRTCVideoViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)ensureGLContext;
- (void)willResignActive;
- (void)didBecomeActive;
- (void)teardownGL;
- (void)setupGL;
- (void)displayLinkTimerDidFire;
- (void)renderFrame:(id)arg1;
- (void)setSize:(struct CGSize)arg1;
- (void)glkView:(id)arg1 drawInRect:(struct CGRect)arg2;
- (void)layoutSubviews;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (void)setNeedsDisplay;
- (void)dealloc;
- (void)setMultipleTouchEnabled:(_Bool)arg1;
- (_Bool)configure;
- (id)initWithCoder:(id)arg1 shader:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 shader:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


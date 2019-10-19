//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MDXSession.h"

#import "GCKRemoteMediaClientListener-Protocol.h"
#import "GCKRequestDelegate-Protocol.h"
#import "GCKSessionManagerListener-Protocol.h"
#import "MDXCastYouTubeChannelDelegate-Protocol.h"

@class GCKCastSession, GCKSessionManager, MDXCastScreen, MDXCastYouTubeChannel, MDXPairingHandler, NSMutableDictionary, NSString;

@interface MDXCastSession : MDXSession <GCKRemoteMediaClientListener, GCKRequestDelegate, GCKSessionManagerListener, MDXCastYouTubeChannelDelegate>
{
    MDXCastScreen *_screen;
    MDXPairingHandler *_pairingHandler;
    GCKCastSession *_castSession;
    GCKSessionManager *_castSessionManager;
    MDXCastYouTubeChannel *_castYouTubeChannel;
    _Bool _connectedToDevice;
    _Bool _appRunning;
    _Bool _suspended;
    NSMutableDictionary *_requests;
    CDUnknownBlockType _launchCompletionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType launchCompletionBlock; // @synthesize launchCompletionBlock=_launchCompletionBlock;
- (id)screen;
- (void).cxx_destruct;
- (id)newCastChannel;
- (void)logToECatcher:(id)arg1 error:(id)arg2;
- (void)runLaunchCompletionBlockWithError:(id)arg1;
- (void)resumeExistingSession;
- (_Bool)isCurrentlyConnectedToDevice:(id)arg1;
- (id)MDXErrorFromGCKError:(id)arg1;
- (void)request:(id)arg1 didAbortWithReason:(long long)arg2;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)requestDidComplete:(id)arg1;
- (id)sessionDisconnectedLoggingPayload;
- (long long)hardwareVolume;
- (void)stopScreenApp;
- (void)leaveScreenApp;
- (void)launchScreenAppWithPlaybackDescriptor:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)didReceiveSessionStatusWithScreenID:(id)arg1;
- (void)sessionManager:(id)arg1 didResumeCastSession:(id)arg2;
- (void)sessionManager:(id)arg1 didSuspendCastSession:(id)arg2 withReason:(long long)arg3;
- (void)sessionManager:(id)arg1 didEndCastSession:(id)arg2 withError:(id)arg3;
- (void)sessionManager:(id)arg1 didFailToStartCastSession:(id)arg2 withError:(id)arg3;
- (void)sessionManager:(id)arg1 didStartCastSession:(id)arg2;
- (double)volumeStepInterval;
- (void)setMDXVolume:(long long)arg1;
- (void)seekTo:(double)arg1;
- (void)pause;
- (void)play;
- (_Bool)isSmartRemoteEnabled;
- (void)dealloc;
- (id)initWithScreen:(id)arg1 pairingHandler:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


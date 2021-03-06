//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBAnnouncerBase.h>

#import <FBSharedFramework/SNPlaybackStateListener-Protocol.h>

@class NSString;

@interface SNPlaybackStateListenerAnnouncer : FBAnnouncerBase <SNPlaybackStateListener>
{
}

- (void)playerController:(id)arg1 transitionFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)playerController:(id)arg1 didFailWithError:(id)arg2;
- (void)playerControllerDidPausePlayback:(id)arg1;
- (void)playerControllerDidStartPlayback:(id)arg1;
- (void)playerController:(id)arg1 didFailToPrepareRenderingWithError:(id)arg2;
- (void)playerControllerIsReadyToPlayback:(id)arg1;
- (void)playerControllerStartPrepareRendering:(id)arg1;
- (void)playerControllerDidLoadAsset:(id)arg1;
- (void)playerControllerStartLoadAsset:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCTViewManager.h"

#import "RCTBridgeModule-Protocol.h"

@class NSObject, NSString, RCTBridge;
@protocol OS_dispatch_queue;

@interface RCTVideoManager : RCTViewManager <RCTBridgeModule>
{
}

+ (_Bool)requiresMainQueueSetup;
+ (id)propConfig_onRestoreUserInterfaceForPictureInPictureStop;
+ (id)propConfig_onPictureInPictureStatusChanged;
+ (const struct RCTMethodInfo *)__rct_export__save710;
+ (id)propConfig_onVideoExternalPlaybackChange;
+ (id)propConfig_onPlaybackRateChange;
+ (id)propConfig_onPlaybackResume;
+ (id)propConfig_onPlaybackStalled;
+ (id)propConfig_onReadyForDisplay;
+ (id)propConfig_onVideoFullscreenPlayerDidDismiss;
+ (id)propConfig_onVideoFullscreenPlayerWillDismiss;
+ (id)propConfig_onVideoFullscreenPlayerDidPresent;
+ (id)propConfig_onVideoFullscreenPlayerWillPresent;
+ (id)propConfig_onVideoAudioBecomingNoisy;
+ (id)propConfig_onTimedMetadata;
+ (id)propConfig_onVideoEnd;
+ (id)propConfig_onVideoSeek;
+ (id)propConfig_onBandwidthUpdate;
+ (id)propConfig_onVideoProgress;
+ (id)propConfig_onVideoError;
+ (id)propConfig_onVideoBuffer;
+ (id)propConfig_onVideoLoad;
+ (id)propConfig_onVideoLoadStart;
+ (id)propConfig_restoreUserInterfaceForPIPStopCompletionHandler;
+ (id)propConfig_progressUpdateInterval;
+ (id)propConfig_filterEnabled;
+ (id)propConfig_filter;
+ (id)propConfig_fullscreenOrientation;
+ (id)propConfig_fullscreenAutorotate;
+ (id)propConfig_fullscreen;
+ (id)propConfig_currentTime;
+ (id)propConfig_seek;
+ (id)propConfig_rate;
+ (id)propConfig_ignoreSilentSwitch;
+ (id)propConfig_pictureInPicture;
+ (id)propConfig_playWhenInactive;
+ (id)propConfig_playInBackground;
+ (id)propConfig_volume;
+ (id)propConfig_controls;
+ (id)propConfig_muted;
+ (id)propConfig_paused;
+ (id)propConfig_selectedAudioTrack;
+ (id)propConfig_selectedTextTrack;
+ (id)propConfig_textTracks;
+ (id)propConfig_allowsExternalPlayback;
+ (id)propConfig_repeat;
+ (id)propConfig_resizeMode;
+ (id)propConfig_maxBitRate;
+ (id)propConfig_src;
+ (void)load;
+ (id)moduleName;
- (id)constantsToExport;
- (void)options:(id)arg1 reactTag:(id)arg2 resolver:(CDUnknownBlockType)arg3 rejecter:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
- (id)view;

// Remaining properties
@property(readonly, nonatomic) __weak RCTBridge *bridge;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


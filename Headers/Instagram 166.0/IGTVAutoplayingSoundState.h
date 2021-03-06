//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGSoundStateListenerDelegate-Protocol.h>

@class IGFNFVideoPlayer, IGSoundStateListener, IGUserSession, IGVideo, NSString;
@protocol IGTVAutoplayingSoundStateDelegate;

@interface IGTVAutoplayingSoundState : NSObject <IGSoundStateListenerDelegate>
{
    IGSoundStateListener *_soundStateListener;
    _Bool _lastAudioEnabled;
    IGUserSession *_userSession;
    id <IGTVAutoplayingSoundStateDelegate> _delegate;
    IGVideo *_video;
    IGFNFVideoPlayer *_videoPlayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGFNFVideoPlayer *videoPlayer; // @synthesize videoPlayer=_videoPlayer;
@property(retain, nonatomic) IGVideo *video; // @synthesize video=_video;
@property(nonatomic) __weak id <IGTVAutoplayingSoundStateDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_videoHasAudio;
- (_Bool)_videoHasAudioEnabled;
- (_Bool)_audioEnabled;
- (void)_updateAudioEnabledIfNeededForReason:(long long)arg1;
- (void)soundListenerDidUpdate:(id)arg1;
- (void)soundListenerDidSetStickySoundState:(id)arg1;
@property(readonly, nonatomic) long long soundIndicatorType;
- (void)toggleAudioEnabled;
- (void)stopPlayback;
- (void)pausePlayback;
- (void)startPlayback;
- (void)preparePlayback;
@property(readonly, nonatomic) _Bool audioEnabled;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


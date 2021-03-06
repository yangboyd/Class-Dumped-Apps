//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/IGMusicBookmarkableAudioAssetProtocol-Protocol.h>

@class IGUser, NSString, NSURL;

@protocol IGSundialAudioAssetProtocol <IGMusicBookmarkableAudioAssetProtocol>
@property(readonly, nonatomic) double audioStartTime;
@property(readonly, copy, nonatomic) NSURL *audioFileUrl;
@property(readonly, copy, nonatomic) NSURL *albumArtThumbnailUrl;
@property(readonly, copy, nonatomic) NSURL *albumArtUrl;
@property(readonly, nonatomic) _Bool isExplicit;
@property(readonly, copy, nonatomic) NSString *originalAudioAssetId;
@property(readonly, nonatomic) long long durationInMs;
@property(readonly, nonatomic) _Bool useOfAudioDisabled;
@property(readonly, copy, nonatomic) NSString *shouldMuteAudioReason;
@property(readonly, nonatomic) _Bool shouldMuteAudio;
@property(readonly, copy, nonatomic) NSString *artistDisplayName;
@property(readonly, copy, nonatomic) IGUser *artist;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, copy, nonatomic) NSString *audioClusterId;
@property(readonly, copy, nonatomic) NSString *audioAssetId;
@property(readonly, copy, nonatomic) NSString *pk;
@end


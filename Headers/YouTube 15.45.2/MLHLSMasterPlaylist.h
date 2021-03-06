//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MLHLSRemotePlaylist, MLHLSStartTag, NSArray, YTIAudioTrack;

@interface MLHLSMasterPlaylist : NSObject
{
    _Bool _hasIndependentSegments;
    NSArray *_remotePlaylists;
    NSArray *_audioStreams;
    NSArray *_allStreams;
    NSArray *_mediaTags;
    MLHLSStartTag *_startTag;
}

+ (id)removeUnavailableGroupIDsForPlaylist:(id)arg1 availableAudioGroupIDs:(id)arg2 availableVideoGroupIDs:(id)arg3 availableSubtitlesGroupIDs:(id)arg4;
+ (id)buildMasterPlaylistWithPlaylists:(id)arg1 mediaTags:(id)arg2 initialPlaylist:(id)arg3 defaultAudioTrack:(id)arg4 hasIndependentSegments:(_Bool)arg5 startTag:(id)arg6;
+ (id)masterPlaylistByPairingStreams:(id)arg1 videoToAudioItagMap:(id)arg2 captionTrackLanguageToURLMap:(id)arg3 hasIndependentSegments:(_Bool)arg4 startTag:(id)arg5 createPairedAudioURLs:(_Bool)arg6 error:(id *)arg7;
- (void).cxx_destruct;
@property(readonly, nonatomic) MLHLSStartTag *startTag; // @synthesize startTag=_startTag;
@property(readonly, nonatomic) _Bool hasIndependentSegments; // @synthesize hasIndependentSegments=_hasIndependentSegments;
@property(readonly, nonatomic) NSArray *mediaTags; // @synthesize mediaTags=_mediaTags;
@property(readonly, nonatomic) NSArray *allStreams; // @synthesize allStreams=_allStreams;
@property(readonly, nonatomic) NSArray *audioStreams; // @synthesize audioStreams=_audioStreams;
@property(readonly, nonatomic) NSArray *remotePlaylists; // @synthesize remotePlaylists=_remotePlaylists;
- (id)initialAudioStreamWithAudioTrack:(id)arg1;
@property(readonly, nonatomic) YTIAudioTrack *defaultAudioTrack;
@property(readonly, nonatomic) MLHLSRemotePlaylist *initialPlaylist;
- (id)initWithRemotePlaylists:(id)arg1 mediaTags:(id)arg2 hasIndependentSegments:(_Bool)arg3 startTag:(id)arg4;

@end


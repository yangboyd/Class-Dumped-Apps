//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NFUIPlayerFoundation/NFUIPlaybackRequest.h>

@class NFUIPlatformPlaybackParams, NSDictionary, NSNumber, NSString, NSURL, PlaybackSourceModel;

@interface PlaybackRequest : NFUIPlaybackRequest
{
    _Bool _automaticPlayback;
    _Bool _supplemental;
    _Bool _supportsPrePlay;
    NSNumber *_videoId;
    NSURL *_videoURL;
    PlaybackSourceModel *_sourceModel;
    long long _target;
    NSString *_mdxTargetUuid;
    PlaybackRequest *_nextPlaybackRequest;
    NSDictionary *_userInfo;
    NSString *_webVTTPlistLocation;
    long long _validationType;
}

@property(nonatomic) long long validationType; // @synthesize validationType=_validationType;
@property(retain, nonatomic) NSString *webVTTPlistLocation; // @synthesize webVTTPlistLocation=_webVTTPlistLocation;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) _Bool supportsPrePlay; // @synthesize supportsPrePlay=_supportsPrePlay;
@property(retain, nonatomic) PlaybackRequest *nextPlaybackRequest; // @synthesize nextPlaybackRequest=_nextPlaybackRequest;
@property(retain, nonatomic) NSString *mdxTargetUuid; // @synthesize mdxTargetUuid=_mdxTargetUuid;
@property(nonatomic, getter=isSupplemental) _Bool supplemental; // @synthesize supplemental=_supplemental;
@property(nonatomic) _Bool automaticPlayback; // @synthesize automaticPlayback=_automaticPlayback;
@property(nonatomic) long long target; // @synthesize target=_target;
@property(copy, nonatomic) PlaybackSourceModel *sourceModel; // @synthesize sourceModel=_sourceModel;
@property(copy, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
@property(copy, nonatomic) NSNumber *videoId; // @synthesize videoId=_videoId;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) double loadTimeoutInterval;
@property(readonly, copy, nonatomic) NFUIPlatformPlaybackParams *params;
- (id)initWithVideoURL:(id)arg1 sourceModel:(id)arg2;
- (id)initWithVideoId:(id)arg1 sourceModel:(id)arg2;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCContextSnapViewMetrics;

@interface SCStorySnapViewLogParameters : NSObject <NSCopying>
{
    _Bool _fullyViewed;
    NSString *_snaplogId;
    NSString *_posterId;
    long long _storyType;
    long long _storyTypeSpecific;
    double _snapTimeViewed;
    double _snapTime;
    long long _exitReason;
    long long _viewLocationPos;
    long long _viewSource;
    double _playbackVolume;
    long long _playbackAudio;
    SCContextSnapViewMetrics *_contextSnapViewMetrics;
    long long _playMode;
    long long _storyAccessType;
    long long _mediaType;
    long long _snapSource;
    long long _snapIndexCount;
    long long _snapIndexPos;
    NSString *_teamSnapchatStorySnapHash;
}

@property(readonly, copy, nonatomic) NSString *teamSnapchatStorySnapHash; // @synthesize teamSnapchatStorySnapHash=_teamSnapchatStorySnapHash;
@property(readonly, nonatomic) long long snapIndexPos; // @synthesize snapIndexPos=_snapIndexPos;
@property(readonly, nonatomic) long long snapIndexCount; // @synthesize snapIndexCount=_snapIndexCount;
@property(readonly, nonatomic) long long snapSource; // @synthesize snapSource=_snapSource;
@property(readonly, nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, nonatomic) long long storyAccessType; // @synthesize storyAccessType=_storyAccessType;
@property(readonly, nonatomic) long long playMode; // @synthesize playMode=_playMode;
@property(readonly, copy, nonatomic) SCContextSnapViewMetrics *contextSnapViewMetrics; // @synthesize contextSnapViewMetrics=_contextSnapViewMetrics;
@property(readonly, nonatomic) long long playbackAudio; // @synthesize playbackAudio=_playbackAudio;
@property(readonly, nonatomic) double playbackVolume; // @synthesize playbackVolume=_playbackVolume;
@property(readonly, nonatomic) long long viewSource; // @synthesize viewSource=_viewSource;
@property(readonly, nonatomic) long long viewLocationPos; // @synthesize viewLocationPos=_viewLocationPos;
@property(readonly, nonatomic) long long exitReason; // @synthesize exitReason=_exitReason;
@property(readonly, nonatomic) _Bool fullyViewed; // @synthesize fullyViewed=_fullyViewed;
@property(readonly, nonatomic) double snapTime; // @synthesize snapTime=_snapTime;
@property(readonly, nonatomic) double snapTimeViewed; // @synthesize snapTimeViewed=_snapTimeViewed;
@property(readonly, nonatomic) long long storyTypeSpecific; // @synthesize storyTypeSpecific=_storyTypeSpecific;
@property(readonly, nonatomic) long long storyType; // @synthesize storyType=_storyType;
@property(readonly, copy, nonatomic) NSString *posterId; // @synthesize posterId=_posterId;
@property(readonly, copy, nonatomic) NSString *snaplogId; // @synthesize snaplogId=_snaplogId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSnaplogId:(id)arg1 posterId:(id)arg2 storyType:(long long)arg3 storyTypeSpecific:(long long)arg4 snapTimeViewed:(double)arg5 snapTime:(double)arg6 fullyViewed:(_Bool)arg7 exitReason:(long long)arg8 viewLocationPos:(long long)arg9 viewSource:(long long)arg10 playbackVolume:(double)arg11 playbackAudio:(long long)arg12 contextSnapViewMetrics:(id)arg13 playMode:(long long)arg14 storyAccessType:(long long)arg15 mediaType:(long long)arg16 snapSource:(long long)arg17 snapIndexCount:(long long)arg18 snapIndexPos:(long long)arg19 teamSnapchatStorySnapHash:(id)arg20;

@end


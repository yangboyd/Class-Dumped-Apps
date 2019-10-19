//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class GCKMediaMetadata, GCKMediaTextTrackStyle, GCKVASTAdsRequest, NSArray, NSString, NSURL;

@interface GCKMediaInformation : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_contentID;
    id _customData;
    NSURL *_contentURL;
    long long _streamType;
    NSString *_contentType;
    GCKMediaMetadata *_metadata;
    NSArray *_adBreaks;
    NSArray *_adBreakClips;
    double _streamDuration;
    NSArray *_mediaTracks;
    GCKMediaTextTrackStyle *_textTrackStyle;
    NSString *_entity;
    GCKVASTAdsRequest *_VMAP;
    double _startAbsoluteTime;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) id customData; // @synthesize customData=_customData;
@property(readonly, nonatomic) double startAbsoluteTime; // @synthesize startAbsoluteTime=_startAbsoluteTime;
@property(readonly, nonatomic) GCKVASTAdsRequest *VMAP; // @synthesize VMAP=_VMAP;
@property(readonly, copy, nonatomic) NSString *entity; // @synthesize entity=_entity;
@property(readonly, copy, nonatomic) GCKMediaTextTrackStyle *textTrackStyle; // @synthesize textTrackStyle=_textTrackStyle;
@property(readonly, copy, nonatomic) NSArray *mediaTracks; // @synthesize mediaTracks=_mediaTracks;
@property(readonly, nonatomic) double streamDuration; // @synthesize streamDuration=_streamDuration;
@property(readonly, copy, nonatomic) NSArray *adBreakClips; // @synthesize adBreakClips=_adBreakClips;
@property(copy, nonatomic) NSArray *adBreaks; // @synthesize adBreaks=_adBreaks;
@property(readonly, nonatomic) GCKMediaMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(readonly, nonatomic) long long streamType; // @synthesize streamType=_streamType;
@property(readonly, copy, nonatomic) NSURL *contentURL; // @synthesize contentURL=_contentURL;
@property(readonly, copy, nonatomic) NSString *contentID; // @synthesize contentID=_contentID;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isLive;
- (_Bool)updateFromBreakInfoJSONObject:(id)arg1;
- (id)mediaTrackWithID:(long long)arg1;
- (id)JSONObject;
- (id)initWithJSONObject:(id)arg1;
- (id)initWithContentID:(id)arg1 streamType:(long long)arg2 contentType:(id)arg3 metadata:(id)arg4 adBreaks:(id)arg5 adBreakClips:(id)arg6 streamDuration:(double)arg7 mediaTracks:(id)arg8 textTrackStyle:(id)arg9 customData:(id)arg10;
- (id)initWithContentID:(id)arg1 streamType:(long long)arg2 contentType:(id)arg3 metadata:(id)arg4 streamDuration:(double)arg5 mediaTracks:(id)arg6 textTrackStyle:(id)arg7 customData:(id)arg8;
- (id)initWithContentID:(id)arg1 contentURL:(id)arg2 streamType:(long long)arg3 contentType:(id)arg4 metadata:(id)arg5 adBreaks:(id)arg6 adBreakClips:(id)arg7 streamDuration:(double)arg8 mediaTracks:(id)arg9 textTrackStyle:(id)arg10 entity:(id)arg11 startAbsoluteTime:(double)arg12 VMAP:(id)arg13 customData:(id)arg14;

@end


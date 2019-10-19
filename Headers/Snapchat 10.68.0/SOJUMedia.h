//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUMedia-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString, SOJUMediaUrl;

@interface SOJUMedia : NSObject <SOJUMedia>
{
    NSString *_mediaId;
    NSString *_mediaType;
    NSString *_mediaUrl;
    NSDictionary *_mediaAttributes;
    NSString *_key;
    NSString *_iv;
    NSNumber *_width;
    NSNumber *_height;
    NSString *_owner;
    NSNumber *_timerSec;
    NSNumber *_isZipped;
    NSString *_venueId;
    NSArray *_snapAttachments;
    NSNumber *_isInfiniteDuration;
    NSString *_sourceId;
    NSString *_animatedSnapType;
    NSString *_creatorAttribution;
    SOJUMediaUrl *_directDownloadUrl;
    NSString *_miniThumbnailData;
    NSString *_lensMetadata;
    NSString *_contextClientInfo;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSString *contextClientInfo; // @synthesize contextClientInfo=_contextClientInfo;
@property(readonly, copy, nonatomic) NSString *lensMetadata; // @synthesize lensMetadata=_lensMetadata;
@property(readonly, copy, nonatomic) NSString *miniThumbnailData; // @synthesize miniThumbnailData=_miniThumbnailData;
@property(readonly, copy, nonatomic) SOJUMediaUrl *directDownloadUrl; // @synthesize directDownloadUrl=_directDownloadUrl;
@property(readonly, copy, nonatomic) NSString *creatorAttribution; // @synthesize creatorAttribution=_creatorAttribution;
@property(readonly, copy, nonatomic) NSString *animatedSnapType; // @synthesize animatedSnapType=_animatedSnapType;
@property(readonly, copy, nonatomic) NSString *sourceId; // @synthesize sourceId=_sourceId;
@property(readonly, copy, nonatomic) NSNumber *isInfiniteDuration; // @synthesize isInfiniteDuration=_isInfiniteDuration;
@property(readonly, copy, nonatomic) NSArray *snapAttachments; // @synthesize snapAttachments=_snapAttachments;
@property(readonly, copy, nonatomic) NSString *venueId; // @synthesize venueId=_venueId;
@property(readonly, copy, nonatomic) NSNumber *isZipped; // @synthesize isZipped=_isZipped;
@property(readonly, copy, nonatomic) NSNumber *timerSec; // @synthesize timerSec=_timerSec;
@property(readonly, copy, nonatomic) NSString *owner; // @synthesize owner=_owner;
@property(readonly, copy, nonatomic) NSNumber *height; // @synthesize height=_height;
@property(readonly, copy, nonatomic) NSNumber *width; // @synthesize width=_width;
@property(readonly, copy, nonatomic) NSString *iv; // @synthesize iv=_iv;
@property(readonly, copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(readonly, copy, nonatomic) NSDictionary *mediaAttributes; // @synthesize mediaAttributes=_mediaAttributes;
@property(readonly, copy, nonatomic) NSString *mediaUrl; // @synthesize mediaUrl=_mediaUrl;
@property(readonly, copy, nonatomic) NSString *mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMediaId:(id)arg1 mediaType:(id)arg2 mediaUrl:(id)arg3 mediaAttributes:(id)arg4 key:(id)arg5 iv:(id)arg6 width:(id)arg7 height:(id)arg8 owner:(id)arg9 timerSec:(id)arg10 isZipped:(id)arg11 venueId:(id)arg12 snapAttachments:(id)arg13 isInfiniteDuration:(id)arg14 sourceId:(id)arg15 animatedSnapType:(id)arg16 creatorAttribution:(id)arg17 directDownloadUrl:(id)arg18 miniThumbnailData:(id)arg19 lensMetadata:(id)arg20 contextClientInfo:(id)arg21;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (long long)animatedSnapTypeEnum;
- (_Bool)isInfiniteDurationValue;
- (_Bool)isZippedValue;
- (float)timerSecValue;
- (int)heightValue;
- (int)widthValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


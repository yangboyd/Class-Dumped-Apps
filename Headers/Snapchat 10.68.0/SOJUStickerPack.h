//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCStickerPack-Protocol.h"
#import "SOJUStickerPack-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUGeofence, SOJUStickerPackContextualMetadata;

@interface SOJUStickerPack : NSObject <SCStickerPack, SOJUStickerPack>
{
    NSString *_packId;
    NSString *_categoryId;
    NSString *_iconUrl;
    NSNumber *_iconVersion;
    NSString *_url;
    NSNumber *_version;
    NSNumber *_active;
    NSString *_type;
    NSArray *_capabilities;
    NSArray *_target;
    NSString *_superCategory;
    SOJUGeofence *_geofence;
    NSString *_unlockablePreviewImgUrl;
    NSString *_title;
    NSNumber *_unlockExpirationTimeInSec;
    SOJUStickerPackContextualMetadata *_contextualPackMetadata;
    NSString *_unlockableId;
    NSNumber *_isExpandable;
    NSString *_metadataUrl;
    NSNumber *_expirationTtlInSec;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSNumber *expirationTtlInSec; // @synthesize expirationTtlInSec=_expirationTtlInSec;
@property(readonly, copy, nonatomic) NSString *metadataUrl; // @synthesize metadataUrl=_metadataUrl;
@property(readonly, copy, nonatomic) NSNumber *isExpandable; // @synthesize isExpandable=_isExpandable;
@property(readonly, copy, nonatomic) NSString *unlockableId; // @synthesize unlockableId=_unlockableId;
@property(readonly, copy, nonatomic) SOJUStickerPackContextualMetadata *contextualPackMetadata; // @synthesize contextualPackMetadata=_contextualPackMetadata;
@property(readonly, copy, nonatomic) NSNumber *unlockExpirationTimeInSec; // @synthesize unlockExpirationTimeInSec=_unlockExpirationTimeInSec;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *unlockablePreviewImgUrl; // @synthesize unlockablePreviewImgUrl=_unlockablePreviewImgUrl;
@property(readonly, copy, nonatomic) SOJUGeofence *geofence; // @synthesize geofence=_geofence;
@property(readonly, copy, nonatomic) NSString *superCategory; // @synthesize superCategory=_superCategory;
@property(readonly, copy, nonatomic) NSArray *target; // @synthesize target=_target;
@property(readonly, copy, nonatomic) NSArray *capabilities; // @synthesize capabilities=_capabilities;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSNumber *active; // @synthesize active=_active;
@property(readonly, copy, nonatomic) NSNumber *version; // @synthesize version=_version;
@property(readonly, copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(readonly, copy, nonatomic) NSNumber *iconVersion; // @synthesize iconVersion=_iconVersion;
@property(readonly, copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(readonly, copy, nonatomic) NSString *categoryId; // @synthesize categoryId=_categoryId;
@property(readonly, copy, nonatomic) NSString *packId; // @synthesize packId=_packId;
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
- (id)initWithPackId:(id)arg1 categoryId:(id)arg2 iconUrl:(id)arg3 iconVersion:(id)arg4 url:(id)arg5 version:(id)arg6 active:(id)arg7 type:(id)arg8 capabilities:(id)arg9 target:(id)arg10 superCategory:(id)arg11 geofence:(id)arg12 unlockablePreviewImgUrl:(id)arg13 title:(id)arg14 unlockExpirationTimeInSec:(id)arg15 contextualPackMetadata:(id)arg16 unlockableId:(id)arg17 isExpandable:(id)arg18 metadataUrl:(id)arg19 expirationTtlInSec:(id)arg20;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (long long)expirationTtlInSecValue;
- (_Bool)isExpandableValue;
- (long long)unlockExpirationTimeInSecValue;
- (long long)superCategoryEnum;
- (long long)typeEnum;
- (_Bool)activeValue;
- (int)versionValue;
- (int)iconVersionValue;
@property(readonly, nonatomic) NSString *metadataURLString;
@property(readonly, nonatomic) long long versionIntegerValue;
@property(nonatomic) _Bool isSponsored; // @dynamic isSponsored;
- (id)initWithProtoBuf:(id)arg1;
- (id)initWithProtoBinary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUGalleryServletCollectionsGalleryCollection-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUGalleryEncryptionBlob;

@interface SOJUGalleryServletCollectionsGalleryCollection : NSObject <SOJUGalleryServletCollectionsGalleryCollection>
{
    NSString *_collectionId;
    NSString *_title;
    NSNumber *_createTime;
    NSNumber *_lastUpdatedTime;
    NSNumber *_expirationTime;
    NSNumber *_collectionType;
    NSNumber *_category;
    NSArray *_groups;
    NSString *_thumbnailUrl;
    NSNumber *_thumbnailFormat;
    SOJUGalleryEncryptionBlob *_encryption;
    NSNumber *_minimumGroupsCountRequirement;
    NSString *_bitmojiComicId;
    NSString *_subtitle;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *bitmojiComicId; // @synthesize bitmojiComicId=_bitmojiComicId;
@property(readonly, copy, nonatomic) NSNumber *minimumGroupsCountRequirement; // @synthesize minimumGroupsCountRequirement=_minimumGroupsCountRequirement;
@property(readonly, copy, nonatomic) SOJUGalleryEncryptionBlob *encryption; // @synthesize encryption=_encryption;
@property(readonly, copy, nonatomic) NSNumber *thumbnailFormat; // @synthesize thumbnailFormat=_thumbnailFormat;
@property(readonly, copy, nonatomic) NSString *thumbnailUrl; // @synthesize thumbnailUrl=_thumbnailUrl;
@property(readonly, copy, nonatomic) NSArray *groups; // @synthesize groups=_groups;
@property(readonly, copy, nonatomic) NSNumber *category; // @synthesize category=_category;
@property(readonly, copy, nonatomic) NSNumber *collectionType; // @synthesize collectionType=_collectionType;
@property(readonly, copy, nonatomic) NSNumber *expirationTime; // @synthesize expirationTime=_expirationTime;
@property(readonly, copy, nonatomic) NSNumber *lastUpdatedTime; // @synthesize lastUpdatedTime=_lastUpdatedTime;
@property(readonly, copy, nonatomic) NSNumber *createTime; // @synthesize createTime=_createTime;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *collectionId; // @synthesize collectionId=_collectionId;
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
- (id)initWithCollectionId:(id)arg1 title:(id)arg2 createTime:(id)arg3 lastUpdatedTime:(id)arg4 expirationTime:(id)arg5 collectionType:(id)arg6 category:(id)arg7 groups:(id)arg8 thumbnailUrl:(id)arg9 thumbnailFormat:(id)arg10 encryption:(id)arg11 minimumGroupsCountRequirement:(id)arg12 bitmojiComicId:(id)arg13 subtitle:(id)arg14;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (int)minimumGroupsCountRequirementValue;
- (long long)thumbnailFormatEnum;
- (int)thumbnailFormatValue;
- (long long)categoryEnum;
- (int)categoryValue;
- (long long)collectionTypeEnum;
- (int)collectionTypeValue;
- (long long)expirationTimeValue;
- (long long)lastUpdatedTimeValue;
- (long long)createTimeValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


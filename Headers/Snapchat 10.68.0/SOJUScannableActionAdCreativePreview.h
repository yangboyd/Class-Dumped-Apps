//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUScannableActionAdCreativePreview-Protocol.h"

@class NSNumber, NSString;

@interface SOJUScannableActionAdCreativePreview : NSObject <SOJUScannableActionAdCreativePreview>
{
    NSString *_entityType;
    NSString *_entityId;
    NSNumber *_createdTimestampInMillis;
    NSNumber *_isActionExpirable;
    NSNumber *_ttlInMillis;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSNumber *ttlInMillis; // @synthesize ttlInMillis=_ttlInMillis;
@property(readonly, copy, nonatomic) NSNumber *isActionExpirable; // @synthesize isActionExpirable=_isActionExpirable;
@property(readonly, copy, nonatomic) NSNumber *createdTimestampInMillis; // @synthesize createdTimestampInMillis=_createdTimestampInMillis;
@property(readonly, copy, nonatomic) NSString *entityId; // @synthesize entityId=_entityId;
@property(readonly, copy, nonatomic) NSString *entityType; // @synthesize entityType=_entityType;
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
- (id)initWithEntityType:(id)arg1 entityId:(id)arg2 createdTimestampInMillis:(id)arg3 isActionExpirable:(id)arg4 ttlInMillis:(id)arg5;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (long long)ttlInMillisValue;
- (_Bool)isActionExpirableValue;
- (long long)createdTimestampInMillisValue;
- (long long)entityTypeEnum;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


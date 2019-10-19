//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUBroadcastMobsModelGeofencedMobStoryExtraData-Protocol.h"

@class NSNumber, NSString, SOJUBroadcastMobsModelLocation;

@interface SOJUBroadcastMobsModelGeofencedMobStoryExtraData : NSObject <SOJUBroadcastMobsModelGeofencedMobStoryExtraData>
{
    SOJUBroadcastMobsModelLocation *_center;
    NSNumber *_radius;
    NSString *_privacyType;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSString *privacyType; // @synthesize privacyType=_privacyType;
@property(readonly, copy, nonatomic) NSNumber *radius; // @synthesize radius=_radius;
@property(readonly, copy, nonatomic) SOJUBroadcastMobsModelLocation *center; // @synthesize center=_center;
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
- (id)initWithCenter:(id)arg1 radius:(id)arg2 privacyType:(id)arg3;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (long long)privacyTypeEnum;
- (double)radiusValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUMediaUrl-Protocol.h"

@class NSNumber, NSString;

@interface SOJUMediaUrl : NSObject <SOJUMediaUrl>
{
    NSString *_url;
    NSNumber *_expirySecs;
    NSString *_type;
    NSString *_region;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSString *region; // @synthesize region=_region;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSNumber *expirySecs; // @synthesize expirySecs=_expirySecs;
@property(readonly, copy, nonatomic) NSString *url; // @synthesize url=_url;
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
- (id)initWithUrl:(id)arg1 expirySecs:(id)arg2 type:(id)arg3 region:(id)arg4;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (long long)typeEnum;
- (long long)expirySecsValue;
- (id)nsurl;
- (_Bool)hasValidExpirationDate;
- (id)expirationDate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


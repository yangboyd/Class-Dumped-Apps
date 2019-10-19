//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUIdentityTrophyStage-Protocol.h"

@class NSNumber, NSString;

@interface SOJUIdentityTrophyStage : NSObject <SOJUIdentityTrophyStage>
{
    NSString *_label;
    NSString *_unicode;
    NSString *_status;
    NSNumber *_achievedTimestamp;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSNumber *achievedTimestamp; // @synthesize achievedTimestamp=_achievedTimestamp;
@property(readonly, copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(readonly, copy, nonatomic) NSString *unicode; // @synthesize unicode=_unicode;
@property(readonly, copy, nonatomic) NSString *label; // @synthesize label=_label;
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
- (id)initWithLabel:(id)arg1 unicode:(id)arg2 status:(id)arg3 achievedTimestamp:(id)arg4;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (long long)achievedTimestampValue;
- (long long)statusEnum;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


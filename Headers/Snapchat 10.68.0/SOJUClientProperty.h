//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUClientProperty-Protocol.h"

@class NSNumber, NSString;

@interface SOJUClientProperty : NSObject <SOJUClientProperty>
{
    NSString *_name;
    NSString *_value;
    NSNumber *_lastUpdatedTimestamp;
    NSString *_lastUpdatedAppVersion;
    NSString *_lastUpdatedPlatform;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSString *lastUpdatedPlatform; // @synthesize lastUpdatedPlatform=_lastUpdatedPlatform;
@property(readonly, copy, nonatomic) NSString *lastUpdatedAppVersion; // @synthesize lastUpdatedAppVersion=_lastUpdatedAppVersion;
@property(readonly, copy, nonatomic) NSNumber *lastUpdatedTimestamp; // @synthesize lastUpdatedTimestamp=_lastUpdatedTimestamp;
@property(readonly, copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
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
- (id)initWithName:(id)arg1 value:(id)arg2 lastUpdatedTimestamp:(id)arg3 lastUpdatedAppVersion:(id)arg4 lastUpdatedPlatform:(id)arg5;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (long long)lastUpdatedPlatformEnum;
- (long long)lastUpdatedTimestampValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


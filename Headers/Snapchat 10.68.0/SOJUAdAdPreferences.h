//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUAdAdPreferences-Protocol.h"

@class NSNumber, NSString;

@interface SOJUAdAdPreferences : NSObject <SOJUAdAdPreferences>
{
    NSNumber *_isAudienceMatchOptOut;
    NSNumber *_isExternalActivityMatchOptOut;
    NSNumber *_isThirdPartyAdNetworkOptOut;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSNumber *isThirdPartyAdNetworkOptOut; // @synthesize isThirdPartyAdNetworkOptOut=_isThirdPartyAdNetworkOptOut;
@property(readonly, copy, nonatomic) NSNumber *isExternalActivityMatchOptOut; // @synthesize isExternalActivityMatchOptOut=_isExternalActivityMatchOptOut;
@property(readonly, copy, nonatomic) NSNumber *isAudienceMatchOptOut; // @synthesize isAudienceMatchOptOut=_isAudienceMatchOptOut;
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
- (id)initWithIsAudienceMatchOptOut:(id)arg1 isExternalActivityMatchOptOut:(id)arg2 isThirdPartyAdNetworkOptOut:(id)arg3;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)isThirdPartyAdNetworkOptOutValue;
- (_Bool)isExternalActivityMatchOptOutValue;
- (_Bool)isAudienceMatchOptOutValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


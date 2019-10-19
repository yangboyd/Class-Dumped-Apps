//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUIdentityLagunaContextNotificationSetting-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface SOJUIdentityLagunaContextNotificationSetting : NSObject <SOJUIdentityLagunaContextNotificationSetting>
{
    NSNumber *_type;
    NSNumber *_notificationsEnabled;
    NSNumber *_colorSelection;
    NSArray *_rules;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSArray *rules; // @synthesize rules=_rules;
@property(readonly, copy, nonatomic) NSNumber *colorSelection; // @synthesize colorSelection=_colorSelection;
@property(readonly, copy, nonatomic) NSNumber *notificationsEnabled; // @synthesize notificationsEnabled=_notificationsEnabled;
@property(readonly, copy, nonatomic) NSNumber *type; // @synthesize type=_type;
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
- (id)initWithType:(id)arg1 notificationsEnabled:(id)arg2 colorSelection:(id)arg3 rules:(id)arg4;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (int)colorSelectionValue;
- (_Bool)notificationsEnabledValue;
- (int)typeValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


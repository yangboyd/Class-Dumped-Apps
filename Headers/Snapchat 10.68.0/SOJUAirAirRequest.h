//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUAirAirRequest-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUAirReportOption;

@interface SOJUAirAirRequest : NSObject <SOJUAirAirRequest>
{
    NSString *_idValue;
    NSString *_reportType;
    NSString *_descriptionValue;
    NSString *_feature;
    NSString *_subFeature;
    NSString *_connectionType;
    NSNumber *_bandwidth;
    NSString *_shakeSensitivity;
    NSNumber *_deviceScore;
    NSString *_otherInfo;
    SOJUAirReportOption *_reportOption;
    NSArray *_notificationEmails;
    NSNumber *_appUsedMemory;
    NSNumber *_freeMemory;
    NSString *_blobData;
    NSString *_reportSource;
    NSString *_appLastChangeCommitHash;
    NSString *_userId;
    NSString *_deviceId;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(readonly, copy, nonatomic) NSString *appLastChangeCommitHash; // @synthesize appLastChangeCommitHash=_appLastChangeCommitHash;
@property(readonly, copy, nonatomic) NSString *reportSource; // @synthesize reportSource=_reportSource;
@property(readonly, copy, nonatomic) NSString *blobData; // @synthesize blobData=_blobData;
@property(readonly, copy, nonatomic) NSNumber *freeMemory; // @synthesize freeMemory=_freeMemory;
@property(readonly, copy, nonatomic) NSNumber *appUsedMemory; // @synthesize appUsedMemory=_appUsedMemory;
@property(readonly, copy, nonatomic) NSArray *notificationEmails; // @synthesize notificationEmails=_notificationEmails;
@property(readonly, copy, nonatomic) SOJUAirReportOption *reportOption; // @synthesize reportOption=_reportOption;
@property(readonly, copy, nonatomic) NSString *otherInfo; // @synthesize otherInfo=_otherInfo;
@property(readonly, copy, nonatomic) NSNumber *deviceScore; // @synthesize deviceScore=_deviceScore;
@property(readonly, copy, nonatomic) NSString *shakeSensitivity; // @synthesize shakeSensitivity=_shakeSensitivity;
@property(readonly, copy, nonatomic) NSNumber *bandwidth; // @synthesize bandwidth=_bandwidth;
@property(readonly, copy, nonatomic) NSString *connectionType; // @synthesize connectionType=_connectionType;
@property(readonly, copy, nonatomic) NSString *subFeature; // @synthesize subFeature=_subFeature;
@property(readonly, copy, nonatomic) NSString *feature; // @synthesize feature=_feature;
@property(readonly, copy, nonatomic) NSString *descriptionValue; // @synthesize descriptionValue=_descriptionValue;
@property(readonly, copy, nonatomic) NSString *reportType; // @synthesize reportType=_reportType;
@property(readonly, copy, nonatomic) NSString *idValue; // @synthesize idValue=_idValue;
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
- (id)initWithIdValue:(id)arg1 reportType:(id)arg2 descriptionValue:(id)arg3 feature:(id)arg4 subFeature:(id)arg5 connectionType:(id)arg6 bandwidth:(id)arg7 shakeSensitivity:(id)arg8 deviceScore:(id)arg9 otherInfo:(id)arg10 reportOption:(id)arg11 notificationEmails:(id)arg12 appUsedMemory:(id)arg13 freeMemory:(id)arg14 blobData:(id)arg15 reportSource:(id)arg16 appLastChangeCommitHash:(id)arg17 userId:(id)arg18 deviceId:(id)arg19;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (long long)reportSourceEnum;
- (long long)freeMemoryValue;
- (long long)appUsedMemoryValue;
- (double)deviceScoreValue;
- (long long)shakeSensitivityEnum;
- (long long)bandwidthValue;
- (long long)connectionTypeEnum;
- (long long)reportTypeEnum;
- (id)initWithProtoBuf:(id)arg1;
- (id)initWithProtoBinary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


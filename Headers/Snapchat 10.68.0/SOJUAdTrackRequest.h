//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUAdTrackRequest-Protocol.h"

@class NSNumber, NSString, SOJUAdApp, SOJUAdClientRankingFeatures, SOJUAdClientRankingModelOutput, SOJUAdDevice, SOJUAdImpressionData, SOJUAdTargeting;

@interface SOJUAdTrackRequest : NSObject <SOJUAdTrackRequest>
{
    NSString *_requestId;
    NSNumber *_canTrack;
    NSString *_userAdId;
    NSString *_rawUserData;
    NSString *_rawAdData;
    SOJUAdTargeting *_targeting;
    SOJUAdImpressionData *_impressionData;
    NSNumber *_debug;
    NSString *_sessionId;
    NSNumber *_trackSeqNum;
    NSNumber *_attemptSeqNum;
    SOJUAdClientRankingModelOutput *_clientRankingModelOutput;
    NSNumber *_clientRankingNoShow;
    SOJUAdClientRankingFeatures *_clientRankingFeatures;
    NSString *_opportunityRequestId;
    NSNumber *_creationTimestampMs;
    SOJUAdApp *_appInfo;
    SOJUAdDevice *_deviceInfo;
    NSNumber *_numberOfAttempts;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSNumber *numberOfAttempts; // @synthesize numberOfAttempts=_numberOfAttempts;
@property(readonly, copy, nonatomic) SOJUAdDevice *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property(readonly, copy, nonatomic) SOJUAdApp *appInfo; // @synthesize appInfo=_appInfo;
@property(readonly, copy, nonatomic) NSNumber *creationTimestampMs; // @synthesize creationTimestampMs=_creationTimestampMs;
@property(readonly, copy, nonatomic) NSString *opportunityRequestId; // @synthesize opportunityRequestId=_opportunityRequestId;
@property(readonly, copy, nonatomic) SOJUAdClientRankingFeatures *clientRankingFeatures; // @synthesize clientRankingFeatures=_clientRankingFeatures;
@property(readonly, copy, nonatomic) NSNumber *clientRankingNoShow; // @synthesize clientRankingNoShow=_clientRankingNoShow;
@property(readonly, copy, nonatomic) SOJUAdClientRankingModelOutput *clientRankingModelOutput; // @synthesize clientRankingModelOutput=_clientRankingModelOutput;
@property(readonly, copy, nonatomic) NSNumber *attemptSeqNum; // @synthesize attemptSeqNum=_attemptSeqNum;
@property(readonly, copy, nonatomic) NSNumber *trackSeqNum; // @synthesize trackSeqNum=_trackSeqNum;
@property(readonly, copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(readonly, copy, nonatomic) NSNumber *debug; // @synthesize debug=_debug;
@property(readonly, copy, nonatomic) SOJUAdImpressionData *impressionData; // @synthesize impressionData=_impressionData;
@property(readonly, copy, nonatomic) SOJUAdTargeting *targeting; // @synthesize targeting=_targeting;
@property(readonly, copy, nonatomic) NSString *rawAdData; // @synthesize rawAdData=_rawAdData;
@property(readonly, copy, nonatomic) NSString *rawUserData; // @synthesize rawUserData=_rawUserData;
@property(readonly, copy, nonatomic) NSString *userAdId; // @synthesize userAdId=_userAdId;
@property(readonly, copy, nonatomic) NSNumber *canTrack; // @synthesize canTrack=_canTrack;
@property(readonly, copy, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
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
- (id)initWithRequestId:(id)arg1 canTrack:(id)arg2 userAdId:(id)arg3 rawUserData:(id)arg4 rawAdData:(id)arg5 targeting:(id)arg6 impressionData:(id)arg7 debug:(id)arg8 sessionId:(id)arg9 trackSeqNum:(id)arg10 attemptSeqNum:(id)arg11 clientRankingModelOutput:(id)arg12 clientRankingNoShow:(id)arg13 clientRankingFeatures:(id)arg14 opportunityRequestId:(id)arg15 creationTimestampMs:(id)arg16 appInfo:(id)arg17 deviceInfo:(id)arg18 numberOfAttempts:(id)arg19;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (int)numberOfAttemptsValue;
- (long long)creationTimestampMsValue;
- (_Bool)clientRankingNoShowValue;
- (int)attemptSeqNumValue;
- (int)trackSeqNumValue;
- (_Bool)debugValue;
- (_Bool)canTrackValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


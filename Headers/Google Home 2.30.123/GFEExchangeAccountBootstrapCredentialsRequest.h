//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class CARSDeviceRiskSignals, GFEDeviceSignals, GFEHttpConnectionContext, NSMutableArray, NSString;

@interface GFEExchangeAccountBootstrapCredentialsRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GFEHttpConnectionContext *HTTPContext; // @dynamic HTTPContext;
@property(retain, nonatomic) NSMutableArray *assertionInfoArray; // @dynamic assertionInfoArray;
@property(readonly, nonatomic) unsigned long long assertionInfoArray_Count; // @dynamic assertionInfoArray_Count;
@property(copy, nonatomic) NSString *clientId; // @dynamic clientId;
@property(nonatomic) int credentialType; // @dynamic credentialType;
@property(nonatomic) _Bool deferCredentialsAfterFallback; // @dynamic deferCredentialsAfterFallback;
@property(nonatomic) int flowType; // @dynamic flowType;
@property(nonatomic) _Bool hasClientId; // @dynamic hasClientId;
@property(nonatomic) _Bool hasCredentialType; // @dynamic hasCredentialType;
@property(nonatomic) _Bool hasDeferCredentialsAfterFallback; // @dynamic hasDeferCredentialsAfterFallback;
@property(nonatomic) _Bool hasFlowType; // @dynamic hasFlowType;
@property(nonatomic) _Bool hasHTTPContext; // @dynamic hasHTTPContext;
@property(nonatomic) _Bool hasLocale; // @dynamic hasLocale;
@property(nonatomic) _Bool hasPlatformVariant; // @dynamic hasPlatformVariant;
@property(nonatomic) _Bool hasTargetDeviceSignals; // @dynamic hasTargetDeviceSignals;
@property(nonatomic) _Bool hasTargetDeviceSignalsV2; // @dynamic hasTargetDeviceSignalsV2;
@property(copy, nonatomic) NSString *locale; // @dynamic locale;
@property(nonatomic) int platformVariant; // @dynamic platformVariant;
@property(retain, nonatomic) GFEDeviceSignals *targetDeviceSignals; // @dynamic targetDeviceSignals;
@property(retain, nonatomic) CARSDeviceRiskSignals *targetDeviceSignalsV2; // @dynamic targetDeviceSignalsV2;

@end


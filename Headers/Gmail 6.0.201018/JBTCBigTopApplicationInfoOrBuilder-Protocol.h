//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class ComGoogleAppsBigtopServicesDebugDebugOverrides, JBTCBigTopApplicationInfo_ClientRequestedServerBehavior, JBTCBigTopCommonEnums_Codebase, JBTCBigTopCommonEnums_DeviceFormFactor, JBTCBigTopCommonEnums_DeviceOs, NSString;

@protocol JBTCBigTopApplicationInfoOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (long long)getLastKnownServerVersion;
- (_Bool)hasLastKnownServerVersion;
- (ComGoogleAppsBigtopServicesDebugDebugOverrides *)getDebugOverrides;
- (_Bool)hasDebugOverrides;
- (NSString *)getDeviceId;
- (_Bool)hasDeviceId;
- (NSString *)getClientId;
- (_Bool)hasClientId;
- (NSString *)getCampaignId;
- (_Bool)hasCampaignId;
- (_Bool)getBigtopDataEnabled;
- (_Bool)hasBigtopDataEnabled;
- (long long)getCurrentTimestampMs;
- (_Bool)hasCurrentTimestampMs;
- (NSString *)getTimeZone;
- (_Bool)hasTimeZone;
- (int)getTimezoneOffsetMs;
- (_Bool)hasTimezoneOffsetMs;
- (NSString *)getDeviceModel;
- (_Bool)hasDeviceModel;
- (JBTCBigTopCommonEnums_DeviceFormFactor *)getDeviceFormFactor;
- (_Bool)hasDeviceFormFactor;
- (JBTCBigTopCommonEnums_DeviceOs *)getDeviceOs;
- (_Bool)hasDeviceOs;
- (int)getClientVersion;
- (_Bool)hasClientVersion;
- (NSString *)getBuildLabel;
- (_Bool)hasBuildLabel;
- (JBTCBigTopCommonEnums_Codebase *)getCodebase;
- (_Bool)hasCodebase;
- (NSString *)getIdKey;
- (_Bool)hasIdKey;
- (JBTCBigTopApplicationInfo_ClientRequestedServerBehavior *)getClientRequestedServerBehavior;
- (_Bool)hasClientRequestedServerBehavior;
@end


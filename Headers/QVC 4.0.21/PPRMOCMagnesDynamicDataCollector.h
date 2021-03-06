//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface PPRMOCMagnesDynamicDataCollector : NSObject
{
    NSMutableDictionary *dynamicData;
    NSString *optionalPassInCMID;
}

+ (id)shared;
- (void).cxx_destruct;
- (id)getConnectionType;
- (id)getSSIDInfo;
- (id)getCollectedDynamicData;
- (id)getMGIdWithAppGuid:(id)arg1 withTimeStamp:(id)arg2 withPairingId:(id)arg3;
- (id)getDCIdWithAppGuid:(id)arg1 WithTimestamp:(id)arg2;
- (_Bool)isValidVpn:(id)arg1;
- (_Bool)isSystemVersionGraterThan:(id)arg1;
- (id)getVPNSettings;
- (id)getProxySettings;
- (id)getLocationDict;
- (id)getLocationAuthStatus;
- (id)getLocaleCountry;
- (id)getLocaleLang;
- (id)getDs;
- (int)getCounter;
- (id)getSSID;
- (id)getBSSID;
- (id)getTZName;
- (id)getTZ;
- (id)getTimestamp;
- (id)getPinLockTimestamp;
- (id)getPairingId;
- (id)getRiskCompSessionId;
- (id)getNetworkInterfaceAddresses;
- (id)getIPAddrs;
- (void)updateDynamicDictWithValue:(id)arg1 withKey:(id)arg2 withLengthCheck:(unsigned char)arg3;
- (id)collectDynamicDataWithCollectedAppGuid:(id)arg1 forFlow:(int)arg2;
- (void)setOptionalPassInCMID:(id)arg1;
- (id)init;

@end


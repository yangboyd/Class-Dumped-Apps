//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCEndpointDeviceIDManager-Protocol.h"

@class NSData, NSString, SCSessionRequestManager;

@interface SCDeviceIDManager : NSObject <SCEndpointDeviceIDManager>
{
    SCSessionRequestManager *_requestManager;
    NSData *_deviceTokenKey;
    NSData *_deviceTokenVal;
}

+ (void)setPushNotificationDeviceToken:(id)arg1;
+ (id)shared;
@property(copy) NSData *deviceTokenVal; // @synthesize deviceTokenVal=_deviceTokenVal;
@property(copy) NSData *deviceTokenKey; // @synthesize deviceTokenKey=_deviceTokenKey;
- (void).cxx_destruct;
- (id)deviceTokenIdHash;
- (id)deviceToken;
- (id)deviceIDParameters:(id)arg1;
- (void)storeDeviceIDWithKey:(id)arg1 value:(id)arg2;
- (id)getChallengeResponseParametersForChallenge:(id)arg1 endpoint:(id)arg2 username:(id)arg3;
- (void)_populateDeviceIdOnNotification;
- (void)_populateDeviceId;
- (void)_fetchDeviceID;
- (void)_migrateOldDeviceID;
- (void)_writeToKeychain;
- (void)_loadFromKeychain;
- (_Bool)_deviceIdentifierExists;
- (id)initWithRequestManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


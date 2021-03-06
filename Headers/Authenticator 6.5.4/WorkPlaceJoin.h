//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WorkPlaceJoin : NSObject
{
    NSString *_sharedGroup;
    NSString *_cloudClientId;
    NSString *_oauthRedirectUri;
}

+ (void)setLoggerDelegate:(id)arg1;
+ (id)WorkPlaceJoinManager;
- (void).cxx_destruct;
@property(retain) NSString *oauthRedirectUri; // @synthesize oauthRedirectUri=_oauthRedirectUri;
@property(retain) NSString *cloudClientId; // @synthesize cloudClientId=_cloudClientId;
@property(retain) NSString *sharedGroup; // @synthesize sharedGroup=_sharedGroup;
- (id)appendACLInternal:(id)arg1;
- (id)appendACL:(id)arg1;
- (int)retrieveNumberOfKeychainItemsFor:(id)arg1 sharedAccessGroup:(id)arg2;
- (id)updateKeychainItemForAccessGroup:(id)arg1 updateDictionary:(id)arg2 searchDictionary:(id)arg3;
- (id)updateKeychainItemsForAccessGroup:(id)arg1;
- (id)checkKeychainItemForAttributeUpdate:(id)arg1;
- (void)setLoggerDelegate:(id)arg1;
- (void)serverSideWPJConfirmationInternal:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)serverSideWPJConfirmation:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)getDeviceTenantInformationInternal:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)getDeviceTenantInformation:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)patchDeviceAttributeIfNeededWithSi:(id)arg1 oldAttributeValue:(id)arg2 newAttributeValue:(id)arg3 serviceInformation:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (unsigned char)clearWorkplaceJoinStateFromDevice:(out id *)arg1;
- (void)removeDeviceObjectFromCDRSThenClearSystemState:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)discoverDataForUserOnCDRS:(id)arg1 correlationId:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)getHostFromKeyChain:(id *)arg1;
- (void)doDiscoveryForUpnInternal:(id)arg1 wpjEnvironment:(int)arg2 correlationId:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)doDiscoveryForUpn:(id)arg1 wpjEnvironment:(int)arg2 correlationId:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)disableAriaLogging;
- (void)initializeAriaForTenant:(id)arg1;
- (int)derEncodingGetSizeFrom:(id)arg1 at:(int *)arg2;
- (id)getPublicKeyMod:(id)arg1;
- (id)getPublicKeyExp:(id)arg1;
- (id)createPublicKeyJWK:(id)arg1;
- (void)registerDeviceForUserInternal:(id)arg1 isSharedDevice:(_Bool)arg2 token:(id)arg3 WPJServiceInformation:(id)arg4 trustedAppsPath:(id)arg5 correlationId:(id)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (void)registerDeviceForUser:(id)arg1 isSharedDevice:(_Bool)arg2 token:(id)arg3 registrationEndpoint:(id)arg4 registrationServiceVersion:(id)arg5 correlationId:(id)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (void)registerDeviceForUser:(id)arg1 token:(id)arg2 registrationEndpoint:(id)arg3 registrationServiceVersion:(id)arg4 correlationId:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)joinFailedWithError:(id)arg1 correlationId:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)getUserId:(id *)arg1;
- (void)sendRequestLinkEasIdToDeviceIdTo:(id)arg1 body:(id)arg2 accessToken:(id)arg3 completionCallback:(CDUnknownBlockType)arg4;
- (void)performLinkDeviceIdToEasId:(id)arg1 correlationId:(id)arg2 accessToken:(id)arg3 completionCallback:(CDUnknownBlockType)arg4;
- (void)linkDeviceIdToEasId:(id)arg1 correlationId:(id)arg2 accessToken:(id)arg3 completionCallback:(CDUnknownBlockType)arg4;
- (void)linkDeviceIdToEasIdInternal:(id)arg1 correlationId:(id)arg2 accessToken:(id)arg3 completionCallback:(CDUnknownBlockType)arg4;
- (void)leaveWithCorrelationId:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)deviceIdInternal:(id *)arg1;
- (id)deviceId:(id *)arg1;
- (int)isWorkPlaceJoinedInternal:(id *)arg1;
- (int)isWorkPlaceJoined;
- (id)getWorkPlaceJoinKeyObj:(id *)arg1;
- (id)getRegistrationInformationInternal:(id *)arg1;
- (id)getRegistrationInformation:(id *)arg1;
- (id)getWPJRegistrationObject:(id *)arg1;
- (id)init;
- (int)adbIsWorkPlaceJoinedToTheSameTenant:(id)arg1;
- (int)adbIsWorkPlaceJoined:(id)arg1;

@end


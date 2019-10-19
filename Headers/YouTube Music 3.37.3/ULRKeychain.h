//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ULRKeychain : NSObject
{
    NSString *_identifyingURLScheme;
    long long _libraryLevel;
    CDUnknownBlockType _testingContentionBlock;
}

+ (id)accessGroup;
+ (_Bool)appMeetsKeychainConstraintsWithError:(id *)arg1;
+ (_Bool)appHasULRKeychainGroupAccess;
+ (_Bool)appHasValidAppIdentifierPrefix;
+ (id)currentAppIdentifierPrefix;
+ (id)metadataForIncognitoRecord:(id)arg1 Error:(id *)arg2;
+ (id)testKeychainIncognitoServiceName;
+ (void)setTestKeychainIncognitoServiceName:(id)arg1;
+ (id)testKeychainReportingInterestServiceName;
+ (void)setTestKeychainReportingInterestServiceName:(id)arg1;
+ (id)testKeychainReportingKillRequestServiceName;
+ (void)setTestKeychainReportingKillRequestServiceName:(id)arg1;
+ (id)testKeychainDeviceRestrictionServiceName;
+ (void)setTestKeychainDeviceRestrictionServiceName:(id)arg1;
+ (id)testKeychainDeviceServiceName;
+ (void)setTestKeychainDeviceServiceName:(id)arg1;
+ (id)testKeychainIdentityServiceName;
+ (void)setTestKeychainIdentityServiceName:(id)arg1;
+ (id)testKeychainReportingResponsibilityServiceName;
+ (void)setTestKeychainReportingResponsibilityServiceName:(id)arg1;
- (void).cxx_destruct;
- (id)metadataFromKeychainEntry:(id)arg1 errorRecordName:(id)arg2 error:(id *)arg3;
- (id)accountForUserID:(id)arg1 device:(id)arg2 error:(id *)arg3;
- (id)initWithIdentifyingURLScheme:(id)arg1 libraryLevel:(long long)arg2;
- (id)deviceForSSOIdentity:(id)arg1 error:(id *)arg2;
- (id)deviceMetadataPlistForDevice:(id)arg1 error:(id *)arg2;
- (id)deviceQueryForSSOIdentity:(id)arg1 error:(id *)arg2;
- (id)baseDeviceQueryWithError:(id *)arg1;
- (id)userIDFromAccount:(id)arg1 error:(id *)arg2;
- (_Bool)scrubIdentitiesMissingFromSSOService:(id)arg1 error:(id *)arg2;
- (_Bool)removeIdentity:(id)arg1 error:(id *)arg2;
- (_Bool)updateIdentity:(id)arg1 serverSettings:(id)arg2 error:(id *)arg3;
- (id)identityForSSOIdentity:(id)arg1 error:(id *)arg2;
- (id)identityMetadataPlistForServerSettings:(id)arg1 priorMetadata:(id)arg2 error:(id *)arg3;
- (id)identityQueryForSSOIdentity:(id)arg1 device:(id)arg2 error:(id *)arg3;
- (id)baseIdentityQueryWithError:(id *)arg1;
- (_Bool)scrubIncognitoRecordsWithError:(id *)arg1;
- (_Bool)removeIncognitoRecordsWithIdentifyingURLScheme:(id)arg1 error:(id *)arg2;
- (_Bool)saveIncognitoRecord:(id)arg1 error:(id *)arg2;
- (id)effectiveIncognitoRecordWithError:(id *)arg1;
- (id)incognitoRecordWithIdentifyingURLScheme:(id)arg1 error:(id *)arg2;
- (id)incognitoRecordForKeychainEntry:(id)arg1 error:(id *)arg2;
- (id)baseIncognitoQueryWithError:(id *)arg1;
- (_Bool)scrubReportingInterestsMissingFromDeviceWithError:(id *)arg1;
- (id)identifyingURLSchemesInterestedInReportingIdentity:(id)arg1 error:(id *)arg2;
- (_Bool)removeReportingInterestForIdentifyingURLScheme:(id)arg1 error:(id *)arg2;
- (_Bool)removeReportingInterestWithError:(id *)arg1;
- (_Bool)registerReportingInterestForIdentities:(id)arg1 error:(id *)arg2;
- (id)reportingInterestMetadataPlistForIdentities:(id)arg1 error:(id *)arg2;
- (id)reportingInterestQueryForIdentifyingURLScheme:(id)arg1 error:(id *)arg2;
- (id)baseReportingInterestQueryWithError:(id *)arg1;
- (_Bool)removeReportingKillRequest:(id)arg1 error:(id *)arg2;
- (id)reportingKillRequestForIdentity:(id)arg1 error:(id *)arg2;
- (_Bool)killReportingForIdentity:(id)arg1 auditToken:(id)arg2 error:(id *)arg3;
- (id)reportingKillRequestMetadataPlistWithAuditToken:(id)arg1 error:(id *)arg2;
- (id)reportingKillRequestQueryForULRIdentity:(id)arg1 error:(id *)arg2;
- (id)baseReportingKillRequestQueryWithError:(id *)arg1;
- (long long)motionActivityCapabilityFromMetadata:(id)arg1;
- (long long)bleScannerCapabilityFromMetadata:(id)arg1;
- (_Bool)disavowAllResponsibilitiesWithError:(id *)arg1;
- (_Bool)disavowResponsibilityForIdentity:(id)arg1 error:(id *)arg2;
- (_Bool)disavowResponsibilitiesOtherThanIdentities:(id)arg1 error:(id *)arg2;
- (_Bool)scrubResponsibilitiesMissingFromDeviceWithError:(id *)arg1;
- (_Bool)removeResponsibility:(id)arg1 error:(id *)arg2;
- (_Bool)assumeResponsibilityForIdentity:(id)arg1 bleScannerCapable:(long long)arg2 motionActivityCapable:(long long)arg3 lastForegroundActivity:(id)arg4 collectionStrategy:(long long)arg5 priorResponsibility:(id)arg6 error:(id *)arg7;
- (id)currentResponsibilityForIdentity:(id)arg1 error:(id *)arg2;
- (id)reportingResponsibilityQueryForULRIdentity:(id)arg1 error:(id *)arg2;
- (id)baseReportingResponsibilityQueryWithError:(id *)arg1;
- (_Bool)scrubDeviceRestrictionsMissingFromDeviceWithError:(id *)arg1;
- (id)allDeviceRestrictionsForIdentity:(id)arg1 error:(id *)arg2;
- (_Bool)removeDeviceRestrictionForIdentity:(id)arg1 error:(id *)arg2;
- (id)deviceRestrictionForIdentity:(id)arg1 error:(id *)arg2;
- (_Bool)updateDeviceRestrictionForIdentity:(id)arg1 localReportingRestriction:(long long)arg2 error:(id *)arg3;
- (int)deviceRestrictionDeviceIDFromKeychainAccount:(id)arg1 error:(id *)arg2;
- (id)deviceRestrictionUserIDFromKeychainAccount:(id)arg1 error:(id *)arg2;
- (id)deviceRestrictionIdentifyingURLSchemeFromKeychainAccount:(id)arg1 error:(id *)arg2;
- (id)deviceRestrictionMetadataPlistForIdentity:(id)arg1 localReportingRestriction:(long long)arg2 error:(id *)arg3;
- (id)deviceRestrictionQueryForIdentity:(id)arg1 identifyingURLScheme:(id)arg2 error:(id *)arg3;
- (id)baseDeviceRestrictionQueryWithError:(id *)arg1;
- (_Bool)setTestReportingResponsibilityMetadata:(id)arg1 forIdentity:(id)arg2;
- (_Bool)setTestDeviceRestrictionMetadata:(id)arg1 forIdentity:(id)arg2;
- (_Bool)setTestMetadata:(id)arg1 forQuery:(id)arg2;
- (void)setTestingContentionBlock:(CDUnknownBlockType)arg1;
- (_Bool)identityExistsForSSOIdentity:(id)arg1 error:(id *)arg2;
- (_Bool)removeAllDevicesWithError:(id *)arg1;
- (_Bool)removeAllIdentitiesWithError:(id *)arg1;

@end


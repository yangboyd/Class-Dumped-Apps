//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GHCDeviceId, NSArray, NSString;

@protocol HMEUserData <NSObject>
- (void)setUserPreferenceWithStructureID:(NSString *)arg1 deviceID:(GHCDeviceId *)arg2 preferenceSelector:(int)arg3 preferenceSettingsArray:(NSArray *)arg4 completion:(void (^)(GHCSetUserPreferencesResponse *, NSError *))arg5;
- (void)fetchDevicePreferencesWithStructureID:(NSString *)arg1 ghcDeviceID:(GHCDeviceId *)arg2 ghcParameters:(NSArray *)arg3 preferenceSelectors:(NSArray *)arg4 completion:(void (^)(NSArray *, NSError *))arg5;
- (void)fetchUserPreferencesWithStructureID:(NSString *)arg1 preferenceSelectors:(NSArray *)arg2 completion:(void (^)(NSArray *, NSError *))arg3;
- (void)sendAppSubscriptionUpdateForStructureID:(NSString *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)fetchDeviceArbitrationConsentRequirementsWithCompletion:(void (^)(int, NSError *))arg1;
- (void)fetchWorksWithNestAccountLinkStateWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)createNestAccountForEnvironment:(NSString *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)fetchNestAccountLinkStateWithCompletion:(void (^)(HMENestAccountLinkState *, NSError *))arg1;
@end


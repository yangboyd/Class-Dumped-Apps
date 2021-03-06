//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/RCTBridgeModule-Protocol.h>
#import <InstagramAppCoreFramework/RCTTurboModule-Protocol.h>

@class NSDictionary, NSString;

@protocol NativeIGCheckpointReactModuleSpec <RCTBridgeModule, RCTTurboModule>
- (void)fetchFacebookToken:(void (^)(id))arg1 reject:(void (^)(NSString *, NSString *, NSError *))arg2;
- (void)fetchGoogleOAuthToken:(double)arg1 resolve:(void (^)(id))arg2 reject:(void (^)(NSString *, NSString *, NSError *))arg3;
- (void)fetchBBT:(void (^)(id))arg1 reject:(void (^)(NSString *, NSString *, NSError *))arg2;
- (void)resetChallengeWithReactTag:(double)arg1;
- (void)replayChallengeWithParams:(NSDictionary *)arg1 resolve:(void (^)(id))arg2 reject:(void (^)(NSString *, NSString *, NSError *))arg3;
- (void)proceedChallengeWithParams:(NSDictionary *)arg1 resolve:(void (^)(id))arg2 reject:(void (^)(NSString *, NSString *, NSError *))arg3;
- (void)proceedAndUpdateChallengeWithParams:(NSDictionary *)arg1 data:(NSDictionary *)arg2 rootTag:(double)arg3 resolve:(void (^)(id))arg4 reject:(void (^)(NSString *, NSString *, NSError *))arg5;
- (void)logoutAllUsersWithReactTag:(double)arg1;
- (void)goToHomeScreen;
- (void)generateURIWithPreviewDataString:(NSString *)arg1 resolve:(void (^)(id))arg2 reject:(void (^)(NSString *, NSString *, NSError *))arg3;
- (void)getEncryptedPassword:(NSString *)arg1 confirmedPassword:(NSString *)arg2 resolve:(void (^)(id))arg3 reject:(void (^)(NSString *, NSString *, NSError *))arg4;
- (void)extractCountryCodeAndNumber:(NSString *)arg1 resolve:(void (^)(id))arg2 reject:(void (^)(NSString *, NSString *, NSError *))arg3;
- (void)continueChallengeWithData:(NSDictionary *)arg1 rootTag:(double)arg2;
- (void)closeCheckpoint:(double)arg1;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/_TtP25FCFuncorpNetworkingiFunny21NetworkAccountService_-Protocol.h>

@interface _TtC25FCFuncorpNetworkingiFunny25NetworkAccountServiceImpl : NSObject <_TtP25FCFuncorpNetworkingiFunny21NetworkAccountService_>
{
    // Error parsing type: , name: networkClient
}

- (void).cxx_destruct;
- (id)init;
- (void)editInstallDataWithIsNewby:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)confirmPhoneByCode:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)changePhoneNumber:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)activateChatsWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)mergeGuestSmilesWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)changeEmailWithEmail:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)updateIncomingPermissionsWithPrivacyStatus:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)resetPasswordWithEmail:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)disconnectSocialAccountWithSocialNetwork:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)connectSocialAccountWithSocialNetwork:(id)arg1 clientId:(id)arg2 clientToken:(id)arg3 clientTokenSecret:(id)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (void)getCurrentUserAccountWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)getProfileCoversWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)verifyEmailWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)checkPushRequestWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;

@end


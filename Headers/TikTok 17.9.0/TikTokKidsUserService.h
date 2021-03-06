//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSService.h"

#import "TikTokKidsUserService-Protocol.h"

@class NSString;

@interface TikTokKidsUserService : HTSService <TikTokKidsUserService>
{
}

- (void)didReceiveFatalItemIDs:(id)arg1;
- (void)migrateToNewPassportPersistance;
- (id)_logoutTitleWithReason:(id)arg1;
- (void)_hideLogoutHUDWithReason:(id)arg1;
- (void)_showLogoutHUDWithReason:(id)arg1 nextActionBlock:(CDUnknownBlockType)arg2;
- (void)logoutCompletionWithReason:(id)arg1 userID:(id)arg2 enterFrom:(id)arg3 success:(_Bool)arg4 error:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_logoutAwemeUserWithError:(id)arg1 enterFrom:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_logoutAwemeUserWithReason:(id)arg1 enterFrom:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)logoutAwemeUserWithReason:(id)arg1 enterFrom:(id)arg2;
- (void)logoutAwemeUserWithReason:(id)arg1;
- (void)logoutAwemeUser;
- (void)syncAwemeUser:(CDUnknownBlockType)arg1;
- (_Bool)isCurrentLoginUserWithID:(id)arg1;
- (void)pr_checkUserState:(id)arg1;
- (void)updateCurrentUser:(id)arg1;
- (id)currentLoginUser;
- (id)sessionID;
- (id)secUserId;
- (id)userID;
- (void)onServiceTerminate;
- (void)kickoutOthersIfNeeded:(CDUnknownBlockType)arg1;
- (_Bool)isLogin;
- (void)pr_handleError:(id)arg1;
- (void)synchronizeUserOnLaunch;
- (void)onAppLaunch;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


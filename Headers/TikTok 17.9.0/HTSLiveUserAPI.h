//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSLiveApi.h"

@protocol IESLiveUserService;

@interface HTSLiveUserAPI : HTSLiveApi
{
    id <IESLiveUserService> _userService;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <IESLiveUserService> userService; // @synthesize userService=_userService;
- (void)managerAnonymousUserWithRoomID:(id)arg1 didSilence:(_Bool)arg2 finished:(CDUnknownBlockType)arg3;
- (void)changePushStatus:(long long)arg1 secToUser:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)changeFollowStatusToUser:(id)arg1 secToUser:(id)arg2 roomID:(id)arg3 isFollow:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_fetchUserInfoWithParams:(id)arg1 finished:(CDUnknownBlockType)arg2;
- (void)fetchUserInfo:(id)arg1 secTargetUid:(id)arg2 finished:(CDUnknownBlockType)arg3;
- (void)fetchUserInfo:(id)arg1 secTargetUid:(id)arg2 roomID:(id)arg3 anchorID:(id)arg4 secAnchorID:(id)arg5 requestFrom:(id)arg6 finished:(CDUnknownBlockType)arg7;
- (void)selectFansMedal:(id)arg1 finished:(CDUnknownBlockType)arg2;
- (void)unKickout:(id)arg1 roomID:(id)arg2 finished:(CDUnknownBlockType)arg3;
- (void)fetchKickOutUsers:(id)arg1 offset:(id)arg2 count:(id)arg3 finished:(CDUnknownBlockType)arg4;
- (void)kickout:(id)arg1 secUserId:(id)arg2 roomID:(id)arg3 finished:(CDUnknownBlockType)arg4;
- (void)fetchAdministrators:(id)arg1 secAnchorID:(id)arg2 finished:(CDUnknownBlockType)arg3;
- (void)changeAdministrateStatus:(id)arg1 secUserId:(id)arg2 setAdmin:(_Bool)arg3 roomID:(id)arg4 anchorID:(id)arg5 finished:(CDUnknownBlockType)arg6;
- (void)unbanUser:(id)arg1 secUid:(id)arg2 roomID:(id)arg3 finished:(CDUnknownBlockType)arg4;
- (void)banUser:(id)arg1 secUid:(id)arg2 roomID:(id)arg3 finished:(CDUnknownBlockType)arg4;
- (void)fetchBanUsers:(id)arg1 offset:(id)arg2 count:(id)arg3 finished:(CDUnknownBlockType)arg4;

@end


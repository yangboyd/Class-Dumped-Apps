//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEStudioExternalMethodProtocol-Protocol.h"

@class NSString;

@interface AWEStudioExternalModuleProvider : NSObject <AWEStudioExternalMethodProtocol>
{
}

- (id)openGoodsSeedManageWithDraftID:(id)arg1 title:(id)arg2 willOpen:(_Bool)arg3;
- (void)openGoodsManageWithDraftID:(id)arg1;
- (id)linkAdPublishData;
- (void)setLinkAdPublishData:(id)arg1;
- (void)cleanLinkAdPublishData;
- (_Bool)canBeLivePodcast;
- (void)setClickShootToLive:(_Bool)arg1;
- (_Bool)clickShootToLive;
- (void)setCameraDefaultDirection:(_Bool)arg1;
- (_Bool)hasCreatedLiveRoom;
- (void)checkLivePermission:(CDUnknownBlockType)arg1;
- (void)requestHashTagItemWithName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)shouldMarkFromPushForAwemeID:(id)arg1;
- (id)lastPlayingAwemeID;
- (id)currentAwemeLogPb;
- (id)mainStorage;
- (_Bool)isYouthControlEnabled;
- (void)requestChallengeItemWithID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showAddressListAuthorizationOnLiveViewController:(id)arg1;
- (_Bool)shouldForbidWartermarkWhenDownloadAweme;
- (id)goodsSeedDraftKeyWithTaskID:(id)arg1 userID:(id)arg2;
- (id)goodsDraftKeyWithTaskID:(id)arg1 userID:(id)arg2;
- (_Bool)isSelfSeeWhenPostAmeme;
- (_Bool)isSuccessOrSelfSeeWhenPostAmeme;
- (_Bool)checkAndShowBindPhoneAlertOnAwemeWithConfirmBlock:(CDUnknownBlockType)arg1 cancelBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SendBirdSDK/SBDUser.h>

#import <Funny/IFChatUserEntity-Protocol.h>

@class NSNumber, NSString;

@interface SBDUser (ChatUserEntity) <IFChatUserEntity>
@property(readonly) NSNumber *lastSeenDate;
@property(readonly) NSString *nick_color;
@property(readonly) NSString *nick;
@property(readonly) NSString *avatarUrl;
@property(readonly) NSString *ID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end


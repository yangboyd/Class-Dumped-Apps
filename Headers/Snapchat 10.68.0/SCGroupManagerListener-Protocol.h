//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SOJUIdentityMischief;
@protocol SCChatGroup;

@protocol SCGroupManagerListener <NSObject>
- (void)didCreateGroupOnServerWithId:(NSString *)arg1 initialSojuMischief:(SOJUIdentityMischief *)arg2;
- (void)didJoinGroup:(id <SCChatGroup>)arg1;
- (void)didBeginLeavingGroupWithId:(NSString *)arg1;
- (void)didChangeInfoForGroup:(id <SCChatGroup>)arg1;
- (void)didFinishLoadingGroups;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseReq.h"

@class NSString;

@interface JoinChatRoomReq : BaseReq
{
    NSString *_groupId;
    NSString *_chatRoomNickName;
    NSString *_extMsg;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *extMsg; // @synthesize extMsg=_extMsg;
@property(copy, nonatomic) NSString *chatRoomNickName; // @synthesize chatRoomNickName=_chatRoomNickName;
@property(copy, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;

@end


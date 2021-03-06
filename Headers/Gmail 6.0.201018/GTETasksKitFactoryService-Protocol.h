//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GTEChatRoomIdentity;
@protocol GTETasksKitAppContext, GTETasksKitRoomFactoryService, GTETasksKitUserContext;

@protocol GTETasksKitFactoryService <NSObject>
@property(retain, nonatomic) id <GTETasksKitUserContext> userContext;
@property(retain, nonatomic) id <GTETasksKitAppContext> appContext;
- (void)unregisterChatRoomServiceWithID:(GTEChatRoomIdentity *)arg1 sender:(id)arg2;
- (id <GTETasksKitRoomFactoryService>)chatRoomServiceWithID:(GTEChatRoomIdentity *)arg1 sender:(id)arg2;
@end


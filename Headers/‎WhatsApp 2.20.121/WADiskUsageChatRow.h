//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectID, NSString, WAChatJID;

@interface WADiskUsageChatRow : NSObject
{
    WAChatJID *_chatJID;
    NSString *_chatName;
    NSManagedObjectID *_chatID;
    unsigned long long _size;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(readonly, nonatomic) NSManagedObjectID *chatID; // @synthesize chatID=_chatID;
@property(readonly, nonatomic) NSString *chatName; // @synthesize chatName=_chatName;
@property(readonly, nonatomic) WAChatJID *chatJID; // @synthesize chatJID=_chatJID;
- (id)description;
- (long long)compare:(id)arg1;
- (id)initWithChatJID:(id)arg1 chatName:(id)arg2 chatID:(id)arg3 size:(unsigned long long)arg4;

@end


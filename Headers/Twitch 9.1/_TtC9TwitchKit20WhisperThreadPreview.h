//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, _TtC9TwitchKit13TWChatMessage;

@interface _TtC9TwitchKit20WhisperThreadPreview : NSObject
{
    // Error parsing type: , name: identifier
    // Error parsing type: , name: isArchived
    // Error parsing type: , name: isMuted
    // Error parsing type: , name: participants
    // Error parsing type: , name: unreadMessagesCount
    // Error parsing type: , name: lastMessage
}

- (void).cxx_destruct;
- (id)init;
- (id)copyWithNewLastMessage:(id)arg1;
- (id)copyWithNewUnreadMessagesCount:(long long)arg1;
- (id)copyWithNewIsMuted:(_Bool)arg1;
@property(nonatomic, readonly) _TtC9TwitchKit13TWChatMessage *lastMessage; // @synthesize lastMessage;
@property(nonatomic, readonly) long long unreadMessagesCount; // @synthesize unreadMessagesCount;
@property(nonatomic, readonly) NSArray *participants;
@property(nonatomic, readonly) _Bool isMuted; // @synthesize isMuted;
@property(nonatomic, readonly) _Bool isArchived; // @synthesize isArchived;

@end


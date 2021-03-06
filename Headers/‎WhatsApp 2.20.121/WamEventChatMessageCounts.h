//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WamEvent.h>

@class NSNumber;

@interface WamEventChatMessageCounts : WamEvent
{
    NSNumber *_chat_muted_number;
    NSNumber *_chat_type_ind_number;
    double _chat_ephemerality_duration;
    double _ephemeral_messages_received;
    double _ephemeral_messages_sent;
    double _is_a_contact;
    double _is_a_group;
    double _is_archived;
    double _is_pinned;
    double _messages_received;
    double _messages_sent;
    double _messages_starred;
    double _messages_unread;
    double _start_time;
}

- (void).cxx_destruct;
@property(nonatomic) double start_time; // @synthesize start_time=_start_time;
@property(nonatomic) double messages_unread; // @synthesize messages_unread=_messages_unread;
@property(nonatomic) double messages_starred; // @synthesize messages_starred=_messages_starred;
@property(nonatomic) double messages_sent; // @synthesize messages_sent=_messages_sent;
@property(nonatomic) double messages_received; // @synthesize messages_received=_messages_received;
@property(nonatomic) double is_pinned; // @synthesize is_pinned=_is_pinned;
@property(nonatomic) double is_archived; // @synthesize is_archived=_is_archived;
@property(nonatomic) double is_a_group; // @synthesize is_a_group=_is_a_group;
@property(nonatomic) double is_a_contact; // @synthesize is_a_contact=_is_a_contact;
@property(nonatomic) double ephemeral_messages_sent; // @synthesize ephemeral_messages_sent=_ephemeral_messages_sent;
@property(nonatomic) double ephemeral_messages_received; // @synthesize ephemeral_messages_received=_ephemeral_messages_received;
@property(nonatomic) double chat_ephemerality_duration; // @synthesize chat_ephemerality_duration=_chat_ephemerality_duration;
@property(nonatomic) long long chat_type_ind;
- (_Bool)is_chat_type_ind_set;
@property(nonatomic) long long chat_muted;
- (_Bool)is_chat_muted_set;
- (void)serializeFields;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (int)getChannel;
- (id)init;

@end


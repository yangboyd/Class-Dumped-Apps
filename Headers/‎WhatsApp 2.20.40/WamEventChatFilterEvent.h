//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WamEvent.h>

@class NSNumber;

@interface WamEventChatFilterEvent : WamEvent
{
    NSNumber *_action_type_number;
    NSNumber *_filter_type_number;
    double _session_id;
}

@property(nonatomic) double session_id; // @synthesize session_id=_session_id;
- (void).cxx_destruct;
@property(nonatomic) long long filter_type;
- (_Bool)is_filter_type_set;
@property(nonatomic) long long action_type;
- (_Bool)is_action_type_set;
- (void)serializeFields;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (int)getChannel;
- (id)init;

@end


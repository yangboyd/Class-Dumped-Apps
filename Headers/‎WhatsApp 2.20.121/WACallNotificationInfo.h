//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, WAGroupJID, WAUserJID;

@interface WACallNotificationInfo : NSObject
{
    NSArray *_participantJIDs;
    _Bool _videoEnabled;
    int _scheduledCount;
    unsigned long long _notificationType;
    NSString *_callID;
    WAUserJID *_callerJID;
    WAGroupJID *_groupJID;
    NSString *_callerPushName;
}

- (void).cxx_destruct;
@property(nonatomic) int scheduledCount; // @synthesize scheduledCount=_scheduledCount;
@property(copy, nonatomic) NSString *callerPushName; // @synthesize callerPushName=_callerPushName;
@property(readonly, nonatomic) WAGroupJID *groupJID; // @synthesize groupJID=_groupJID;
@property(readonly, nonatomic) WAUserJID *callerJID; // @synthesize callerJID=_callerJID;
@property(readonly, copy, nonatomic) NSString *callID; // @synthesize callID=_callID;
@property(readonly, nonatomic) _Bool videoEnabled; // @synthesize videoEnabled=_videoEnabled;
@property(readonly, nonatomic) unsigned long long notificationType; // @synthesize notificationType=_notificationType;
@property(readonly, nonatomic) _Bool isJoinable;
@property(readonly, nonatomic) _Bool shouldReschedule;
@property(readonly, nonatomic) _Bool isGroupCall;
- (id)description;
@property(readonly, copy, nonatomic) NSArray *participantJIDsOrderedByCallerJID;
- (id)initWithCallID:(id)arg1 callerJID:(id)arg2 groupJID:(id)arg3 callerPushName:(id)arg4 participantJIDs:(id)arg5 videoEnabled:(_Bool)arg6 notificationType:(unsigned long long)arg7;

@end


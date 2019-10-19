//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class NSNumber, NSString;

@interface SCEventProfileContentViewModel : SCComposerMarshallableObject
{
    NSString *_groupInviteId;
    NSString *_groupId;
    NSString *_inviteId;
    NSNumber *_isEventProfile;
    NSNumber *_isEventSheet;
    double _bottomOffset;
    NSString *_currentUserId;
    double _refreshCount;
}

@property(nonatomic) double refreshCount; // @synthesize refreshCount=_refreshCount;
@property(copy, nonatomic) NSString *currentUserId; // @synthesize currentUserId=_currentUserId;
@property(nonatomic) double bottomOffset; // @synthesize bottomOffset=_bottomOffset;
@property(retain, nonatomic) NSNumber *isEventSheet; // @synthesize isEventSheet=_isEventSheet;
@property(retain, nonatomic) NSNumber *isEventProfile; // @synthesize isEventProfile=_isEventProfile;
@property(copy, nonatomic) NSString *inviteId; // @synthesize inviteId=_inviteId;
@property(copy, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(copy, nonatomic) NSString *groupInviteId; // @synthesize groupInviteId=_groupInviteId;
- (void).cxx_destruct;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (id)initWithGroupId:(id)arg1 inviteId:(id)arg2 bottomOffset:(double)arg3 refreshCount:(double)arg4;
- (id)initWithGroupInviteId:(id)arg1 groupId:(id)arg2 inviteId:(id)arg3 isEventProfile:(id)arg4 isEventSheet:(id)arg5 bottomOffset:(double)arg6 currentUserId:(id)arg7 refreshCount:(double)arg8;

@end


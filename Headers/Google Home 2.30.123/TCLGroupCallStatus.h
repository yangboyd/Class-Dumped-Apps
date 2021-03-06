//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMId, NSArray, NSDate, NSString;

@interface TCLGroupCallStatus : NSObject
{
    _Bool _isActive;
    GIMId *_groupId;
    NSString *_groupName;
    NSDate *_lastSessionStartTime;
    NSArray *_groupMembers;
    NSArray *_activeMembers;
}

+ (id)groupCallStatusWithGroupId:(id)arg1 groupName:(id)arg2 isActive:(_Bool)arg3 lastSessionStartTime:(id)arg4 groupMembers:(id)arg5 activeMembers:(id)arg6;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *activeMembers; // @synthesize activeMembers=_activeMembers;
@property(readonly, nonatomic) NSArray *groupMembers; // @synthesize groupMembers=_groupMembers;
@property(readonly, nonatomic) NSDate *lastSessionStartTime; // @synthesize lastSessionStartTime=_lastSessionStartTime;
@property(readonly, nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(readonly, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(readonly, nonatomic) GIMId *groupId; // @synthesize groupId=_groupId;
- (id)description;
- (id)initWithGroupId:(id)arg1 groupName:(id)arg2 isActive:(_Bool)arg3 lastSessionStartTime:(id)arg4 groupMembers:(id)arg5 activeMembers:(id)arg6;

@end


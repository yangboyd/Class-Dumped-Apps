//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TDLTask_Builder;

@interface ComGoogleAppsTasksSharedDataProtoBusinessobjectBusinessObjectBuilders_BaseTaskBuilder : NSObject
{
    TDLTask_Builder *protoBuilder_;
}

- (void)dealloc;
- (id)build;
- (id)asProtoBuilder;
- (id)setCreatorWithTDLTask_User_Builder:(id)arg1;
- (id)clearCreator;
- (id)setCreatorWithTDLTask_User:(id)arg1;
- (id)setSourceGroupWithTDLTask_DynamiteGroup_Builder:(id)arg1;
- (id)clearSourceGroup;
- (id)setSourceGroupWithTDLTask_DynamiteGroup:(id)arg1;
- (id)setSourceUserWithTDLTask_User_Builder:(id)arg1;
- (id)clearSourceUser;
- (id)setSourceUserWithTDLTask_User:(id)arg1;
- (id)setAssignmentInfoWithTDLTask_AssignmentInfo_Builder:(id)arg1;
- (id)clearAssignmentInfo;
- (id)setAssignmentInfoWithTDLTask_AssignmentInfo:(id)arg1;
- (id)setMarkedForPurgeWithBoolean:(_Bool)arg1;
- (id)setPrivateUserDataWithTDLTask_PrivateUserData_Builder:(id)arg1;
- (id)clearPrivateUserData;
- (id)setPrivateUserDataWithTDLTask_PrivateUserData:(id)arg1;
- (id)clearExperimental;
- (id)addExperimentalWithTDLExperimentalMapEntry_Builder:(id)arg1;
- (id)addExperimentalWithTDLExperimentalMapEntry:(id)arg1;
- (id)setLastParentTaskIdWithNSString:(id)arg1;
- (id)setTaskListIdWithNSString:(id)arg1;
- (id)setLastModifiedWithComGoogleProtobufTimestamp_Builder:(id)arg1;
- (id)clearLastModified;
- (id)setLastModifiedWithComGoogleProtobufTimestamp:(id)arg1;
- (id)setCreateTimeWithComGoogleProtobufTimestamp_Builder:(id)arg1;
- (id)clearCreateTime;
- (id)setCreateTimeWithComGoogleProtobufTimestamp:(id)arg1;
- (id)setPropertiesWithTDLTask_Properties_Builder:(id)arg1;
- (id)clearProperties;
- (id)setPropertiesWithTDLTask_Properties:(id)arg1;
- (id)setVersionInfoWithTDLVersionInfo_Builder:(id)arg1;
- (id)clearVersionInfo;
- (id)setVersionInfoWithTDLVersionInfo:(id)arg1;
- (id)setTaskIdWithNSString:(id)arg1;

@end


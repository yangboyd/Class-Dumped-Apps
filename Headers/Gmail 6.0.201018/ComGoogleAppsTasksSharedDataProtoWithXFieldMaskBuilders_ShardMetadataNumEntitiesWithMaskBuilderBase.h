//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsTasksSharedDataProtoWithXFieldMaskBuilders_ShardMetadataNumEntitiesWithMaskBuildable-Protocol.h"

@class ComGoogleAppsTasksUtilsXfieldmaskXFieldMask_Builder, NSString, TDLShardMetadata_NumEntities_Builder;

@interface ComGoogleAppsTasksSharedDataProtoWithXFieldMaskBuilders_ShardMetadataNumEntitiesWithMaskBuilderBase : NSObject <ComGoogleAppsTasksSharedDataProtoWithXFieldMaskBuilders_ShardMetadataNumEntitiesWithMaskBuildable>
{
    TDLShardMetadata_NumEntities_Builder *protoBuilder_;
    ComGoogleAppsTasksUtilsXfieldmaskXFieldMask_Builder *fieldMaskBuilder_;
}

- (void)dealloc;
- (void)resetWithTDLShardMetadata_NumEntities_Builder:(id)arg1 withComGoogleAppsTasksUtilsXfieldmaskXFieldMask_Builder:(id)arg2;
- (id)buildFieldMaskProto;
- (id)buildFieldMask;
- (id)buildProto;
- (id)setNumTaskRecurrencesWithLong:(long long)arg1;
- (id)setNumTaskListsWithLong:(long long)arg1;
- (id)setNumTasksWithLong:(long long)arg1;
- (id)setLastCalculateEventExecutionWithMaskWithComGoogleProtobufWithXFieldMaskBuilders_TimestampWithMaskBuildable:(id)arg1;
- (id)setLastCalculateEventExecutionWithMaskWithComGoogleProtobufTimestamp:(id)arg1 withComGoogleAppsTasksUtilsXfieldmaskXFieldMask:(id)arg2;
- (id)clearLastCalculateEventExecution;
- (id)setLastCalculateEventExecutionWithComGoogleProtobufTimestamp:(id)arg1;
- (id)mergeFromWithComGoogleAppsTasksSharedDataProtoWithXFieldMaskBuilders_ShardMetadataNumEntitiesWithMaskBuilderBase:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


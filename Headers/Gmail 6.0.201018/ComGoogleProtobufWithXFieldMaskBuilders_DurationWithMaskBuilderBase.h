//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleProtobufWithXFieldMaskBuilders_DurationWithMaskBuildable-Protocol.h"

@class ComGoogleAppsTasksUtilsXfieldmaskXFieldMask_Builder, ComGoogleProtobufDuration_Builder, NSString;

@interface ComGoogleProtobufWithXFieldMaskBuilders_DurationWithMaskBuilderBase : NSObject <ComGoogleProtobufWithXFieldMaskBuilders_DurationWithMaskBuildable>
{
    ComGoogleProtobufDuration_Builder *protoBuilder_;
    ComGoogleAppsTasksUtilsXfieldmaskXFieldMask_Builder *fieldMaskBuilder_;
}

- (void)dealloc;
- (void)resetWithComGoogleProtobufDuration_Builder:(id)arg1 withComGoogleAppsTasksUtilsXfieldmaskXFieldMask_Builder:(id)arg2;
- (id)buildFieldMaskProto;
- (id)buildFieldMask;
- (id)buildProto;
- (id)setNanosWithInt:(int)arg1;
- (id)setSecondsWithLong:(long long)arg1;
- (id)mergeFromWithComGoogleProtobufWithXFieldMaskBuilders_DurationWithMaskBuilderBase:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleTypeWithXFieldMaskBuilders_DateWithMaskBuildable-Protocol.h"

@class ComGoogleAppsTasksUtilsXfieldmaskXFieldMask_Builder, ComGoogleTypeDate_Builder, NSString;

@interface ComGoogleTypeWithXFieldMaskBuilders_DateWithMaskBuilderBase : NSObject <ComGoogleTypeWithXFieldMaskBuilders_DateWithMaskBuildable>
{
    ComGoogleTypeDate_Builder *protoBuilder_;
    ComGoogleAppsTasksUtilsXfieldmaskXFieldMask_Builder *fieldMaskBuilder_;
}

- (void)dealloc;
- (void)resetWithComGoogleTypeDate_Builder:(id)arg1 withComGoogleAppsTasksUtilsXfieldmaskXFieldMask_Builder:(id)arg2;
- (id)buildFieldMaskProto;
- (id)buildFieldMask;
- (id)buildProto;
- (id)setDayWithInt:(int)arg1;
- (id)setMonthWithInt:(int)arg1;
- (id)setYearWithInt:(int)arg1;
- (id)mergeFromWithComGoogleTypeWithXFieldMaskBuilders_DateWithMaskBuilderBase:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


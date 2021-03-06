//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DYNSStorageSchemaTopicRangeDao-Protocol.h"

@class ComGoogleAppsXplatStorageDbAbstractDatabase, NSString;

@interface DYNSStorageSchemaTopicRangeDao_XplatSql : NSObject <DYNSStorageSchemaTopicRangeDao>
{
    ComGoogleAppsXplatStorageDbAbstractDatabase *database_;
}

+ (void)initialize;
- (void)dealloc;
- (id)updateTimestampsWithLong:(long long)arg1 withLong:(long long)arg2 withLong:(long long)arg3;
- (id)getRangeTopicCountWithDYNSCommonGroupId:(id)arg1;
- (id)getOverlappedRangeRecordsInOrderWithDYNSCommonGroupId:(id)arg1 withLong:(long long)arg2 withLong:(long long)arg3;
- (id)getEnclosingRangeRecordWithDYNSCommonGroupId:(id)arg1 withLong:(long long)arg2;
- (id)delete__WithNSString:(id)arg1 withLong:(long long)arg2 withLong:(long long)arg3;
- (id)delete__WithDYNSCommonGroupId:(id)arg1;
- (id)bulkInsertWithJavaUtilList:(id)arg1;
- (id)bulkDeleteWithJavaUtilList:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TDLTaskDao-Protocol.h"

@class ComGoogleAppsXplatStorageDbAbstractDatabase, NSString;

@interface TDLTaskDao_XplatSql : NSObject <TDLTaskDao>
{
    ComGoogleAppsXplatStorageDbAbstractDatabase *database_;
}

+ (void)initialize;
- (void)dealloc;
- (id)insertAllWithJavaUtilList:(id)arg1;
- (id)insertWithTDLTaskEntity:(id)arg1;
- (id)getTasksWithDueDateFilterWithNSString:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3;
- (id)getCompletedTasksWithNSString:(id)arg1 withNSString:(id)arg2 withBoolean:(_Bool)arg3;
- (id)getByTaskRecurrenceIdWithNSString:(id)arg1 withNSString:(id)arg2;
- (id)getByTaskListIdWithNSString:(id)arg1 withNSString:(id)arg2;
- (id)getByIdWithNSString:(id)arg1 withNSString:(id)arg2;
- (id)getAllWithNSString:(id)arg1;
- (id)deleteByIdWithNSString:(id)arg1 withNSString:(id)arg2;
- (id)deleteAllWithNSString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


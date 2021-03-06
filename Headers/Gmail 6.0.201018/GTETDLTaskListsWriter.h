//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GTETaskListsWriter-Protocol.h"

@class GTEDataReaderImpl, NSString;
@protocol TDLTaskListMutator, TDLUserDataMutator;

@interface GTETDLTaskListsWriter : NSObject <GTETaskListsWriter>
{
    id <TDLTaskListMutator> _taskListMutator;
    id <TDLUserDataMutator> _userMetadataMutator;
    GTEDataReaderImpl *_dataReaderWrapper;
}

- (void).cxx_destruct;
- (id)createTaskListWithTitle:(id)arg1 identity:(id)arg2;
- (id)createTaskListWithTitle:(id)arg1;
- (id)updateTaskList:(id)arg1 withNewTitle:(id)arg2;
- (void)deleteTaskList:(id)arg1;
- (void)setSelectedTaskList:(id)arg1;
- (id)initWithTaskListMutator:(id)arg1 userMetadataMutator:(id)arg2 dataReaderWrapper:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


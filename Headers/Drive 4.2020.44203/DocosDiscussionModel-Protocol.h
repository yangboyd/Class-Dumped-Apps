//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@protocol DocosDiscussionAuthor, DocosDiscussionModel_DiscussionModelListener, DocosDiscussionPostEntry, DocosPostEntryId, JavaUtilCollection, JavaUtilConcurrentExecutor, JavaUtilSet;

@protocol DocosDiscussionModel <JavaObject>
- (void)setAuthorWithDocosDiscussionAuthor:(id <DocosDiscussionAuthor>)arg1;
- (id <DocosDiscussionAuthor>)getAuthor;
- (id <JavaUtilCollection>)getDirtyDiscussions;
- (id <DocosDiscussionPostEntry>)getDiscussionWithDocosPostEntryId:(id <DocosPostEntryId>)arg1;
- (id <JavaUtilSet>)getDiscussions;
- (void)updateWithJavaUtilCollection:(id <JavaUtilCollection>)arg1 withJavaUtilCollection:(id <JavaUtilCollection>)arg2 withBoolean:(_Bool)arg3 withBoolean:(_Bool)arg4;
- (void)initialize__WithJavaUtilCollection:(id <JavaUtilCollection>)arg1;
- (void)releaseListenerWithDocosDiscussionModel_DiscussionModelListener:(id <DocosDiscussionModel_DiscussionModelListener>)arg1;
- (void)registerListenerWithJavaUtilConcurrentExecutor:(id <JavaUtilConcurrentExecutor>)arg1 withDocosDiscussionModel_DiscussionModelListener:(id <DocosDiscussionModel_DiscussionModelListener>)arg2;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsBigtopDataStorageSchemaItemMessageAttachmentDao-Protocol.h"

@class ComGoogleAppsXplatStorageDbAbstractDatabase, NSString;

@interface ComGoogleAppsBigtopDataStorageSchemaItemMessageAttachmentDao_XplatSql : NSObject <ComGoogleAppsBigtopDataStorageSchemaItemMessageAttachmentDao>
{
    ComGoogleAppsXplatStorageDbAbstractDatabase *database_;
}

+ (void)initialize;
- (void)dealloc;
- (id)partialReplaceIsSyncedWithJavaUtilList:(id)arg1;
- (id)insertOrReplaceWithComGoogleCommonCollectImmutableList:(id)arg1;
- (id)getUnsyncedAttachmentsForSyncReasonRowIdWithBoolean:(_Bool)arg1 withLong:(long long)arg2 withInt:(int)arg3;
- (id)getRowsByItemMessageRowIdWithLong:(long long)arg1;
- (id)getRowsByIsSyncedWithBoolean:(_Bool)arg1;
- (id)countUnsyncedDefaultSyncSubscriptionAttachmentsWithBoolean:(_Bool)arg1 withLong:(long long)arg2;
- (id)bulkDeleteByItemMessageRowIdsWithJavaUtilList:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


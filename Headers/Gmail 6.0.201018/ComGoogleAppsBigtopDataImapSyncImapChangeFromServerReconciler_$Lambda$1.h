//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsXplatSqlSqlDatabase_RunInTransaction-Protocol.h"

@class ComGoogleAppsBigtopDataImapImapProto_ImapFolder, ComGoogleAppsBigtopDataImapSyncImapChangeFromServerReconciler, ComGoogleCommonCollectImmutableList, NSString;
@protocol JavaUtilCollection;

@interface ComGoogleAppsBigtopDataImapSyncImapChangeFromServerReconciler_$Lambda$1 : NSObject <ComGoogleAppsXplatSqlSqlDatabase_RunInTransaction>
{
    ComGoogleAppsBigtopDataImapSyncImapChangeFromServerReconciler *this$0_;
    id <JavaUtilCollection> val$uidsOfExistingMessagesToReconcile_;
    ComGoogleAppsBigtopDataImapImapProto_ImapFolder *val$folder_;
    ComGoogleCommonCollectImmutableList *val$fetchFlagsResponsesForExistingMessagesToReconcile_;
    ComGoogleCommonCollectImmutableList *val$newMessagesFromServer_;
    ComGoogleCommonCollectImmutableList *val$fingerprintsOfNewlyCreatedMessages_;
}

- (void)dealloc;
- (id)runWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


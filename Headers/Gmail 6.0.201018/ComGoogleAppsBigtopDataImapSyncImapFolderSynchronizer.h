//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleAppsBigtopDataImapCommandsImapFetchCommandProcessor, ComGoogleAppsBigtopDataImapCommandsImapSelectCommandProcessor, ComGoogleAppsBigtopDataImapStorageImapFolderTableController, ComGoogleAppsBigtopDataImapStorageMessageSummaryTableController, ComGoogleAppsBigtopDataImapSyncImapChangeFromServerReconciler, ComGoogleAppsXplatSqlSqlDatabase;
@protocol ComGoogleAppsBigtopDataMailconnectionMailConnectionTaskRunner, JavaxInjectProvider;

@interface ComGoogleAppsBigtopDataImapSyncImapFolderSynchronizer : NSObject
{
    ComGoogleAppsBigtopDataImapStorageMessageSummaryTableController *messageSummaryTableController_;
    ComGoogleAppsBigtopDataImapSyncImapChangeFromServerReconciler *changeFromServerReconciler_;
    id <ComGoogleAppsBigtopDataMailconnectionMailConnectionTaskRunner> connectionTaskRunner_;
    ComGoogleAppsXplatSqlSqlDatabase *database_;
    ComGoogleAppsBigtopDataImapStorageImapFolderTableController *imapFolderTableController_;
    ComGoogleAppsBigtopDataImapCommandsImapFetchCommandProcessor *fetchCommandProcessor_;
    ComGoogleAppsBigtopDataImapCommandsImapSelectCommandProcessor *selectCommandProcessor_;
    id <JavaxInjectProvider> imapExecutor_;
}

+ (void)initialize;
- (void)dealloc;
- (id)synchronizeFolderWithComGoogleAppsBigtopDataImapImapProto_ImapFolder:(id)arg1 withInt:(int)arg2;

@end


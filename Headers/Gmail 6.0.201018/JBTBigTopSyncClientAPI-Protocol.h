//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@class NSString;
@protocol ComGoogleAppsBigtopSyncClientApiSnapshotsSnapshots, ComGoogleAppsBigtopSyncClientApiSurveysSurveys, ComGoogleCommonUtilConcurrentListenableFuture, JBTAttachmentFetching, JBTCallback, JBTClusterLists, JBTClusters, JBTCompose, JBTContacts, JBTConversations, JBTCounts, JBTFilters, JBTId, JBTImageUrlSettings_Factory, JBTItemLists, JBTItems, JBTLabels, JBTMedias, JBTMetrics, JBTNetwork, JBTOrganizationElements, JBTOriginalMessageBodyFetching, JBTPrefetchers, JBTSearch, JBTSettings, JBTSpan, JBTStatus, JBTSync, JBTTaskCompose, JBTTasks, JBTWeekdays, JBTWorkQueueController;

@protocol JBTBigTopSyncClientAPI <JavaObject>
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)getSerializedStore;
- (void)waitForBackgroundJobsToCompleteWithJBTCallback:(id <JBTCallback>)arg1 withJBTSpan:(id <JBTSpan>)arg2;
- (_Bool)initializeOneLazyObjectForInboxWithJBTSpan:(id <JBTSpan>)arg1;
- (void)hibernateWithInt:(int)arg1 withJBTCallback:(id <JBTCallback>)arg2 withJBTSpan:(id <JBTSpan>)arg3;
- (void)shutdownWithInt:(int)arg1 withJBTCallback:(id <JBTCallback>)arg2;
- (void)performNonCriticalStartupActivitiesWithJBTSpan:(id <JBTSpan>)arg1;
- (void)startWithJBTSpan:(id <JBTSpan>)arg1 withJBTCallback:(id <JBTCallback>)arg2;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)unifiedInboxManager;
- (id <JBTOriginalMessageBodyFetching>)originalMessageBodyFetching;
- (id <JBTAttachmentFetching>)attachmentFetching;
- (id <JBTLabels>)labels;
- (id <ComGoogleAppsBigtopSyncClientApiSnapshotsSnapshots>)snapshots;
- (void)loadSearchWithJBTCallback:(id <JBTCallback>)arg1 withJBTSpan:(id <JBTSpan>)arg2;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)searchHistory;
- (id <JBTSearch>)search;
- (id <JBTWeekdays>)weekdays;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)userSettings;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)userActions;
- (id <ComGoogleAppsBigtopSyncClientApiSurveysSurveys>)surveys;
- (id <JBTWorkQueueController>)workQueueController;
- (id <JBTSync>)sync;
- (id <JBTImageUrlSettings_Factory>)getImageUrlSettingsFactory;
- (id <JBTSettings>)settings;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)offlineSyncEventPublisher;
- (id <JBTNetwork>)network;
- (id <JBTId>)deserializeIdWithNSString:(NSString *)arg1;
- (id <JBTMetrics>)metrics;
- (void)loadMediasWithJBTCallback:(id <JBTCallback>)arg1 withJBTSpan:(id <JBTSpan>)arg2;
- (id <JBTMedias>)medias;
- (id <JBTStatus>)status;
- (id <JBTCounts>)counts;
- (id <JBTPrefetchers>)prefetchers;
- (id <JBTOrganizationElements>)organizationElements;
- (id <JBTFilters>)filters;
- (id <JBTClusterLists>)clusterLists;
- (id <JBTClusters>)clusters;
- (id <JBTItemLists>)itemLists;
- (id <JBTItems>)items;
- (id <JBTTaskCompose>)taskCompose;
- (id <JBTTasks>)tasks;
- (id <JBTContacts>)contacts;
- (id <JBTCompose>)compose;
- (id <JBTConversations>)conversations;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)ads;
@end


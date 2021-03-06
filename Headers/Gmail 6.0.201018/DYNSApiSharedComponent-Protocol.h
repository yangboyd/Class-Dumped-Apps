//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@class DYNSAnalyticsStopwatchManager, DYNSDebugDebugManager, NSString;
@protocol ComGoogleAppsDynamiteV1SharedDebugUtilsDebugDataCreatorUtil, ComGoogleAppsDynamiteV1SharedUtilAccountuserAccountUser, ComGoogleAppsDynamiteV1SharedUtilMessageIdGenerationUtil, ComGoogleAppsXplatHttpOAuthTokenProducer, ComGoogleCommonUtilConcurrentListenableFuture, DYNSAnalyticsClearcutEventDataLogger, DYNSAnalyticsClearcutEventsLogger, DYNSAnalyticsClearcutStreamzLogger, DYNSAnalyticsStopwatchFactory, DYNSAnnotationsDriveAclUtil, DYNSApiAppState, DYNSApiSharedApi, DYNSApiSubscriptionsBlockedRoomSummaryListSubscription, DYNSApiSubscriptionsConversationSuggestionsSubscription, DYNSApiSubscriptionsFilesUpdateSubscription, DYNSApiSubscriptionsGroupSubscription, DYNSApiSubscriptionsGroupTasksIntegrationPayloadSubscription, DYNSApiSubscriptionsMessageDeliverySubscription, DYNSApiSubscriptionsReadReceiptsSubscription, DYNSApiSubscriptionsRoomInvitesListSubscription, DYNSApiSubscriptionsSearchMessagesV2ResultSubscription, DYNSApiSubscriptionsSpamDmInvitesListSubscription, DYNSApiSubscriptionsStreamSubscriptionFactory, DYNSApiSubscriptionsTypingStateSubscription, DYNSApiSubscriptionsWorldFilterResultsSubscription, DYNSApiSubscriptionsWorldSubscription, DYNSApiSyncClientStateController, DYNSApiSyncStatus, DYNSApiWebChannelController, DYNSAutocompleteAutocompleteSession, DYNSAutocompleteAutocompleteUserConverter, DYNSAutocompleteAutocompletionParser, DYNSAutocompleteUserAutocomplete, DYNSCommonAppFocusStateTracker, DYNSCommonDeviceNotificationEnablingTracker, DYNSCommonDynamiteClock, DYNSCommonHelperGroupAttributesHelper, DYNSCommonHelperGroupAttributesInfoHelper, DYNSCommonServerTime, DYNSControlServiceControl, DYNSEventsModelObservables, DYNSFlagsSharedConfiguration, DYNSMixinsFilter, DYNSNetworkConnectivityNetworkConnectionState, DYNSSettingsSettingsManager, DYNSStringsBotStringFormatter, DYNSStringsSystemMessageFormatter, DYNSStringsTimeFormatter, DYNSStringsUiModelFormatter, DYNSUIModelsUiModelHelper, DYNSUploadUploadEventLogger, DYNSUrlScottyUrlFactory, JavaUtilConcurrentExecutor, JavaUtilConcurrentScheduledExecutorService, XPTExecutorFactory;

@protocol DYNSApiSharedComponent <JavaObject>
- (id <DYNSApiSubscriptionsRoomInvitesListSubscription>)roomInvitesListSubscription;
- (id <DYNSApiSubscriptionsBlockedRoomSummaryListSubscription>)blockedRoomSummaryListSubscription;
- (id <DYNSApiSubscriptionsSearchMessagesV2ResultSubscription>)searchMessagesV2ResultSubscription;
- (id <DYNSApiSubscriptionsSpamDmInvitesListSubscription>)spamDmInvitesListSubscription;
- (id <DYNSApiSubscriptionsStreamSubscriptionFactory>)streamSubscriptionFactory;
- (id <DYNSApiSubscriptionsConversationSuggestionsSubscription>)conversationSuggestionsSubscription;
- (id <DYNSApiSubscriptionsFilesUpdateSubscription>)filesUpdateSubscription;
- (id <DYNSApiSubscriptionsReadReceiptsSubscription>)readReceiptsSubscription;
- (id <DYNSApiSubscriptionsMessageDeliverySubscription>)messageDeliverySubscription;
- (id <DYNSApiSubscriptionsTypingStateSubscription>)typingStateSubscription;
- (id <DYNSApiSubscriptionsGroupTasksIntegrationPayloadSubscription>)groupTasksIntegrationPayloadSubscription;
- (id <DYNSApiSubscriptionsGroupSubscription>)groupSubscription;
- (id <DYNSApiSubscriptionsWorldFilterResultsSubscription>)newWorldFilterResultsSubscription;
- (id <DYNSApiSubscriptionsWorldSubscription>)newWorldSubscription;
- (id <DYNSApiWebChannelController>)webChannel;
- (id <DYNSAutocompleteUserAutocomplete>)userAutocomplete;
- (id <DYNSUploadUploadEventLogger>)uploadEventLogger;
- (id <DYNSUIModelsUiModelHelper>)uiModelHelper;
- (id <DYNSStringsUiModelFormatter>)uiModelFormatter;
- (id <DYNSStringsTimeFormatter>)timeFormatter;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)tracer;
- (id <DYNSStringsSystemMessageFormatter>)systemMessageFormatter;
- (id <DYNSApiSyncStatus>)syncStatus;
- (id <DYNSApiSyncClientStateController>)syncClientStateController;
- (NSString *)deviceUuid;
- (NSString *)accountToken;
- (DYNSAnalyticsStopwatchManager *)stopwatchManager;
- (id <DYNSAnalyticsStopwatchFactory>)stopwatchFactory;
- (id <DYNSApiSharedApi>)sharedApi;
- (id <DYNSSettingsSettingsManager>)settingsManager;
- (id <DYNSControlServiceControl>)serviceControl;
- (id <DYNSCommonServerTime>)serverTime;
- (id <DYNSUrlScottyUrlFactory>)scottyUrlFactory;
- (id <JavaUtilConcurrentScheduledExecutorService>)scheduledExecutor;
- (id <ComGoogleAppsXplatHttpOAuthTokenProducer>)oAuthTokenProducer;
- (id <DYNSNetworkConnectivityNetworkConnectionState>)networkConnectionState;
- (id <DYNSEventsModelObservables>)modelObservables;
- (id <ComGoogleAppsDynamiteV1SharedUtilMessageIdGenerationUtil>)messageIdGenerationUtil;
- (id <DYNSCommonHelperGroupAttributesHelper>)groupAttributesHelper;
- (id <DYNSCommonHelperGroupAttributesInfoHelper>)groupAttributesInfoHelper;
- (id <DYNSMixinsFilter>)fiter;
- (id <XPTExecutorFactory>)executorFactory;
- (id <JavaUtilConcurrentExecutor>)mainExecutor;
- (id <DYNSCommonDynamiteClock>)clock;
- (id <DYNSAnnotationsDriveAclUtil>)driveACLUtil;
- (DYNSDebugDebugManager *)debugManager;
- (id <ComGoogleAppsDynamiteV1SharedDebugUtilsDebugDataCreatorUtil>)debugDataCreatorUtil;
- (id <DYNSFlagsSharedConfiguration>)configuration;
- (id <DYNSAnalyticsClearcutEventDataLogger>)clearcutEventDataLogger;
- (id <DYNSAnalyticsClearcutStreamzLogger>)clearcutStreamzLogger;
- (id <DYNSAnalyticsClearcutEventsLogger>)clearcutEventLogger;
- (id <DYNSStringsBotStringFormatter>)botStringFormatter;
- (id <DYNSAutocompleteAutocompleteUserConverter>)autocompleteUserConverter;
- (id <DYNSAutocompleteAutocompleteSession>)autocompleteSession;
- (id <DYNSAutocompleteAutocompletionParser>)autocompletionParser;
- (id <DYNSCommonDeviceNotificationEnablingTracker>)deviceNotificationEnablingTracker;
- (id <DYNSCommonAppFocusStateTracker>)appFocusStateTracker;
- (id <DYNSApiAppState>)appState;
- (id <ComGoogleAppsDynamiteV1SharedUtilAccountuserAccountUser>)accountUser;
@end


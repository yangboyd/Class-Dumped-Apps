//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleAppsBigtopDataItemsAttachedmessagefetcherApiAsyncAttachedMessageFetcherServiceComponent, ComGoogleAppsBigtopDataItemsAttachmentfetchingApiAsyncAttachmentFetchingServiceComponent, ComGoogleAppsBigtopDataItemsCalendarApiAsyncCalendarEventDataServiceComponent, ComGoogleAppsBigtopDataItemsMessagesApiAsyncItemMessageListServiceComponent, ComGoogleAppsBigtopDataItemsOriginalmessagebodyfetchingApiAsyncOriginalMessageBodyFetchingServiceComponent, ComGoogleAppsBigtopSyncClientImplAddonsAsyncApiAsyncAddOnsComponent, ComGoogleAppsBigtopSyncClientImplClienttriggeredscanApiAsyncClientTriggeredScanComponent, ComGoogleAppsBigtopSyncClientImplComposeAsyncApiAsyncComposeComponent, ComGoogleAppsBigtopSyncClientImplDynamicmailApiAsyncDynamicMailComponent, ComGoogleAppsBigtopSyncClientImplSmartmailCalendarApiAsyncCalendarSmartMailComponent, JBTRuntimeOptionsComponent;
@protocol ComGoogleAppsBigtopDataClientexperimentoverridesApiClientExperimentOverridesComponent, ComGoogleAppsBigtopDataCommonClientInfoComponent, ComGoogleAppsBigtopDataCommonCommonComponent, ComGoogleAppsBigtopDataItemsMessagesApiItemMessageListServiceComponent, ComGoogleAppsBigtopDataNetworkSyncserverApiNetworkSyncServerComponent, ComGoogleAppsBigtopDataSettingsSettingsClientComponent, ComGoogleAppsBigtopServicesGmailCommonComponentGmailCommonDaggerComponent, ComGoogleAppsBigtopSyncClientImplCommonFeedbackloggingApiFeedbackLoggingComponent, ComGoogleAppsBigtopSyncClientImplCommonSapiMainThreadComponent, ComGoogleAppsBigtopSyncClientImplCommonScheduledsendScheduledSendCommonComponent, ComGoogleAppsBigtopSyncClientImplCommonUserinfoUserInfoComponent, ComGoogleAppsBigtopSyncClientImplContactsApiSapiContactsComponent, ComGoogleAppsBigtopSyncClientImplConversationsFactoryApiConversationsFactoryComponent, ComGoogleAppsBigtopSyncClientImplDynamicmailDisplayconditionApiDynamicMailDisplayConditionComponent, ComGoogleAppsBigtopSyncClientImplItemsApiItemsComponent, ComGoogleAppsBigtopSyncClientImplItemsTransactionApiItemsTransactionComponent, ComGoogleAppsBigtopSyncClientImplLabelsVisibleVisibleLabelsComponent, ComGoogleAppsBigtopSyncClientImplLockerApiLockerComponent, ComGoogleAppsBigtopSyncClientImplMetricsApiMetricsComponent, ComGoogleAppsBigtopSyncClientImplPlatformPlatformComponent, ComGoogleAppsBigtopSyncClientImplQuerymetadataApiQueryMetadataComponent, ComGoogleAppsBigtopSyncClientImplSecurityApiSecurityComponent, ComGoogleAppsBigtopSyncClientImplSettingsApiSapiSettingsComponent, ComGoogleAppsBigtopSyncClientImplStarsStarStateCalculatorComponent, ComGoogleAppsBigtopSyncClientImplStarsSyncstatusStarsSyncStatusComponent, JBTISapiSmartMailComponent, JBTISmartMailCommonComponent, JBTLoggingEventLoggingComponent;

@interface ComGoogleAppsBigtopSyncClientImplConversationsDaggerConversationsComponentImpl_Builder : NSObject
{
    ComGoogleAppsBigtopSyncClientImplAddonsAsyncApiAsyncAddOnsComponent *asyncAddOnsComponent_;
    ComGoogleAppsBigtopDataItemsAttachedmessagefetcherApiAsyncAttachedMessageFetcherServiceComponent *asyncAttachedMessageFetcherServiceComponent_;
    ComGoogleAppsBigtopDataItemsAttachmentfetchingApiAsyncAttachmentFetchingServiceComponent *asyncAttachmentFetchingServiceComponent_;
    ComGoogleAppsBigtopDataItemsCalendarApiAsyncCalendarEventDataServiceComponent *asyncCalendarEventDataServiceComponent_;
    ComGoogleAppsBigtopSyncClientImplSmartmailCalendarApiAsyncCalendarSmartMailComponent *asyncCalendarSmartMailComponent_;
    ComGoogleAppsBigtopSyncClientImplClienttriggeredscanApiAsyncClientTriggeredScanComponent *asyncClientTriggeredScanComponent_;
    ComGoogleAppsBigtopSyncClientImplComposeAsyncApiAsyncComposeComponent *asyncComposeComponent_;
    ComGoogleAppsBigtopSyncClientImplDynamicmailApiAsyncDynamicMailComponent *asyncDynamicMailComponent_;
    ComGoogleAppsBigtopDataItemsMessagesApiAsyncItemMessageListServiceComponent *asyncItemMessageListServiceComponent_;
    ComGoogleAppsBigtopDataItemsOriginalmessagebodyfetchingApiAsyncOriginalMessageBodyFetchingServiceComponent *asyncOriginalMessageBodyFetchingServiceComponent_;
    id <ComGoogleAppsBigtopDataClientexperimentoverridesApiClientExperimentOverridesComponent> clientExperimentOverridesComponent_;
    id <ComGoogleAppsBigtopDataCommonClientInfoComponent> clientInfoComponent_;
    id <ComGoogleAppsBigtopSyncClientImplConversationsFactoryApiConversationsFactoryComponent> conversationsFactoryComponent_;
    id <ComGoogleAppsBigtopDataCommonCommonComponent> commonComponent_;
    id <ComGoogleAppsBigtopSyncClientImplDynamicmailDisplayconditionApiDynamicMailDisplayConditionComponent> dynamicMailDisplayConditionComponent_;
    id <JBTLoggingEventLoggingComponent> eventLoggingComponent_;
    id <ComGoogleAppsBigtopSyncClientImplCommonFeedbackloggingApiFeedbackLoggingComponent> feedbackLoggingComponent_;
    id <ComGoogleAppsBigtopServicesGmailCommonComponentGmailCommonDaggerComponent> gmailCommonDaggerComponent_;
    id <ComGoogleAppsBigtopDataItemsMessagesApiItemMessageListServiceComponent> itemMessageListServiceComponent_;
    id <ComGoogleAppsBigtopSyncClientImplItemsApiItemsComponent> itemsComponent_;
    id <ComGoogleAppsBigtopSyncClientImplItemsTransactionApiItemsTransactionComponent> itemsTransactionComponent_;
    id <ComGoogleAppsBigtopSyncClientImplLockerApiLockerComponent> lockerComponent_;
    id <ComGoogleAppsBigtopSyncClientImplMetricsApiMetricsComponent> metricsComponent_;
    id <ComGoogleAppsBigtopDataNetworkSyncserverApiNetworkSyncServerComponent> networkSyncServerComponent_;
    id <ComGoogleAppsBigtopSyncClientImplPlatformPlatformComponent> platformComponent_;
    id <ComGoogleAppsBigtopSyncClientImplQuerymetadataApiQueryMetadataComponent> queryMetadataComponent_;
    JBTRuntimeOptionsComponent *runtimeOptionsComponent_;
    id <ComGoogleAppsBigtopSyncClientImplContactsApiSapiContactsComponent> sapiContactsComponent_;
    id <ComGoogleAppsBigtopSyncClientImplCommonSapiMainThreadComponent> sapiMainThreadComponent_;
    id <ComGoogleAppsBigtopSyncClientImplSettingsApiSapiSettingsComponent> sapiSettingsComponent_;
    id <JBTISapiSmartMailComponent> sapiSmartMailComponent_;
    id <ComGoogleAppsBigtopSyncClientImplCommonScheduledsendScheduledSendCommonComponent> scheduledSendCommonComponent_;
    id <ComGoogleAppsBigtopSyncClientImplSecurityApiSecurityComponent> securityComponent_;
    id <ComGoogleAppsBigtopDataSettingsSettingsClientComponent> settingsClientComponent_;
    id <JBTISmartMailCommonComponent> smartMailCommonComponent_;
    id <ComGoogleAppsBigtopSyncClientImplStarsStarStateCalculatorComponent> starStateCalculatorComponent_;
    id <ComGoogleAppsBigtopSyncClientImplStarsSyncstatusStarsSyncStatusComponent> starsSyncStatusComponent_;
    id <ComGoogleAppsBigtopSyncClientImplCommonUserinfoUserInfoComponent> userInfoComponent_;
    id <ComGoogleAppsBigtopSyncClientImplLabelsVisibleVisibleLabelsComponent> visibleLabelsComponent_;
}

- (void)dealloc;
- (id)build;
- (id)visibleLabelsComponentWithComGoogleAppsBigtopSyncClientImplLabelsVisibleVisibleLabelsComponent:(id)arg1;
- (id)userInfoComponentWithComGoogleAppsBigtopSyncClientImplCommonUserinfoUserInfoComponent:(id)arg1;
- (id)starsSyncStatusComponentWithComGoogleAppsBigtopSyncClientImplStarsSyncstatusStarsSyncStatusComponent:(id)arg1;
- (id)starStateCalculatorComponentWithComGoogleAppsBigtopSyncClientImplStarsStarStateCalculatorComponent:(id)arg1;
- (id)smartMailCommonComponentWithJBTISmartMailCommonComponent:(id)arg1;
- (id)settingsClientComponentWithComGoogleAppsBigtopDataSettingsSettingsClientComponent:(id)arg1;
- (id)securityComponentWithComGoogleAppsBigtopSyncClientImplSecurityApiSecurityComponent:(id)arg1;
- (id)scheduledSendCommonComponentWithComGoogleAppsBigtopSyncClientImplCommonScheduledsendScheduledSendCommonComponent:(id)arg1;
- (id)sapiSmartMailComponentWithJBTISapiSmartMailComponent:(id)arg1;
- (id)sapiSettingsComponentWithComGoogleAppsBigtopSyncClientImplSettingsApiSapiSettingsComponent:(id)arg1;
- (id)sapiMainThreadComponentWithComGoogleAppsBigtopSyncClientImplCommonSapiMainThreadComponent:(id)arg1;
- (id)sapiContactsComponentWithComGoogleAppsBigtopSyncClientImplContactsApiSapiContactsComponent:(id)arg1;
- (id)runtimeOptionsComponentWithJBTRuntimeOptionsComponent:(id)arg1;
- (id)queryMetadataComponentWithComGoogleAppsBigtopSyncClientImplQuerymetadataApiQueryMetadataComponent:(id)arg1;
- (id)platformComponentWithComGoogleAppsBigtopSyncClientImplPlatformPlatformComponent:(id)arg1;
- (id)networkSyncServerComponentWithComGoogleAppsBigtopDataNetworkSyncserverApiNetworkSyncServerComponent:(id)arg1;
- (id)metricsComponentWithComGoogleAppsBigtopSyncClientImplMetricsApiMetricsComponent:(id)arg1;
- (id)lockerComponentWithComGoogleAppsBigtopSyncClientImplLockerApiLockerComponent:(id)arg1;
- (id)itemsTransactionComponentWithComGoogleAppsBigtopSyncClientImplItemsTransactionApiItemsTransactionComponent:(id)arg1;
- (id)itemsComponentWithComGoogleAppsBigtopSyncClientImplItemsApiItemsComponent:(id)arg1;
- (id)itemMessageListServiceComponentWithComGoogleAppsBigtopDataItemsMessagesApiItemMessageListServiceComponent:(id)arg1;
- (id)gmailCommonDaggerComponentWithComGoogleAppsBigtopServicesGmailCommonComponentGmailCommonDaggerComponent:(id)arg1;
- (id)feedbackLoggingComponentWithComGoogleAppsBigtopSyncClientImplCommonFeedbackloggingApiFeedbackLoggingComponent:(id)arg1;
- (id)eventLoggingComponentWithJBTLoggingEventLoggingComponent:(id)arg1;
- (id)dynamicMailDisplayConditionComponentWithComGoogleAppsBigtopSyncClientImplDynamicmailDisplayconditionApiDynamicMailDisplayConditionComponent:(id)arg1;
- (id)commonComponentWithComGoogleAppsBigtopDataCommonCommonComponent:(id)arg1;
- (id)conversationsFactoryComponentWithComGoogleAppsBigtopSyncClientImplConversationsFactoryApiConversationsFactoryComponent:(id)arg1;
- (id)clientInfoComponentWithComGoogleAppsBigtopDataCommonClientInfoComponent:(id)arg1;
- (id)clientExperimentOverridesComponentWithComGoogleAppsBigtopDataClientexperimentoverridesApiClientExperimentOverridesComponent:(id)arg1;
- (id)asyncOriginalMessageBodyFetchingServiceComponentWithComGoogleAppsBigtopDataItemsOriginalmessagebodyfetchingApiAsyncOriginalMessageBodyFetchingServiceComponent:(id)arg1;
- (id)asyncItemMessageListServiceComponentWithComGoogleAppsBigtopDataItemsMessagesApiAsyncItemMessageListServiceComponent:(id)arg1;
- (id)asyncDynamicMailComponentWithComGoogleAppsBigtopSyncClientImplDynamicmailApiAsyncDynamicMailComponent:(id)arg1;
- (id)asyncComposeComponentWithComGoogleAppsBigtopSyncClientImplComposeAsyncApiAsyncComposeComponent:(id)arg1;
- (id)asyncClientTriggeredScanComponentWithComGoogleAppsBigtopSyncClientImplClienttriggeredscanApiAsyncClientTriggeredScanComponent:(id)arg1;
- (id)asyncCalendarSmartMailComponentWithComGoogleAppsBigtopSyncClientImplSmartmailCalendarApiAsyncCalendarSmartMailComponent:(id)arg1;
- (id)asyncCalendarEventDataServiceComponentWithComGoogleAppsBigtopDataItemsCalendarApiAsyncCalendarEventDataServiceComponent:(id)arg1;
- (id)asyncAttachmentFetchingServiceComponentWithComGoogleAppsBigtopDataItemsAttachmentfetchingApiAsyncAttachmentFetchingServiceComponent:(id)arg1;
- (id)asyncAttachedMessageFetcherServiceComponentWithComGoogleAppsBigtopDataItemsAttachedmessagefetcherApiAsyncAttachedMessageFetcherServiceComponent:(id)arg1;
- (id)asyncAddOnsComponentWithComGoogleAppsBigtopSyncClientImplAddonsAsyncApiAsyncAddOnsComponent:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JBTPlatformComponentImpl-Protocol.h"

@class NSString;
@protocol JavaxInjectProvider;

@interface JBTDaggerPlatformComponentImpl : NSObject <JBTPlatformComponentImpl>
{
    id <JavaxInjectProvider> provideTimeHelperProvider_;
    id <JavaxInjectProvider> provideI18nComparatorProvider_;
    id <JavaxInjectProvider> provideTranslationHelperProvider_;
    id <JavaxInjectProvider> provideUserLocaleHelperProvider_;
    id <JavaxInjectProvider> provideDateTimeFormatterProvider_;
    id <JavaxInjectProvider> provideClusterIdentifierProvider_;
    id <JavaxInjectProvider> provideClusterRankComparatorProvider_;
    id <JavaxInjectProvider> provideContactsFetcherCacheSizeProvider_;
    id <JavaxInjectProvider> provideHyperCollapseThresholdProvider_;
    id <JavaxInjectProvider> provideHyperCollapseOffsetProvider_;
    id <JavaxInjectProvider> provideInboxChangeBatchingDelayMsProvider_;
    id <JavaxInjectProvider> provideMediaListTypesProvider_;
    id <JavaxInjectProvider> provideClientProvidedMediaSourcesProvider_;
    id <JavaxInjectProvider> provideInitialDataSetProvider_;
    id <JavaxInjectProvider> provideInitialDataSetLoadedCallbackProvider_;
    id <JavaxInjectProvider> provideHtmlRendererProvider_;
    id <JavaxInjectProvider> provideTranslationEngineProvider_;
    id <JavaxInjectProvider> provideOptionalWorkQueueControllerProvider_;
    id <JavaxInjectProvider> provideContactsByEmailsFetcherProvider_;
    id <JavaxInjectProvider> provideHelpPageHelperProvider_;
    id <JavaxInjectProvider> provideLimitedNotificationsHelperProvider_;
    id <JavaxInjectProvider> provideOpenGmailHelperProvider_;
    id <JavaxInjectProvider> provideOpenUrlHelperProvider_;
    id <JavaxInjectProvider> provideOptIntoChatActionHandlerProvider_;
}

- (void)dealloc;
- (id)provideOptIntoChatActionHandler;
- (id)provideOpenUrlHelper;
- (id)provideOpenGmailHelper;
- (id)provideLimitedNotificationsHelper;
- (id)provideHelpPageHelper;
- (id)getContactsByEmailsFetcher;
- (id)getOptionalWorkQueueController;
- (id)getTranslationEngine;
- (id)getHtmlRenderer;
- (id)getInitialDataSetLoadedCallback;
- (id)getInitialDataSet;
- (id)getClientProvidedMediaSources;
- (id)getMediaListTypes;
- (int)getInboxChangeBatchingDelayMs;
- (id)getHypercollapseOffset;
- (id)getHypercollapseThreshold;
- (int)getContactsFetcherCacheSize;
- (id)getClusterRankComparator;
- (id)getClusterIdentifier;
- (id)getDateTimeFormatter;
- (id)getUserLocaleHelper;
- (id)getTranslationHelper;
- (id)getI18nComparator;
- (id)getTimeHelper;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


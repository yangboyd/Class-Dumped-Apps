//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DaggerInternalFactory-Protocol.h"

@class NSString;
@protocol JavaxInjectProvider;

@interface DYNSSyncPrefetchPrefetchManagerImplWorldUpdate_Factory : NSObject <DaggerInternalFactory>
{
    id <JavaxInjectProvider> appFocusStateTrackerProvider_;
    id <JavaxInjectProvider> backfillManagerProvider_;
    id <JavaxInjectProvider> sharedConfigurationProvider_;
    id <JavaxInjectProvider> debugManagerProvider_;
    id <JavaxInjectProvider> entityManagerUtilsProvider_;
    id <JavaxInjectProvider> executorProvider_;
    id <JavaxInjectProvider> modelObservablesProvider_;
    id <JavaxInjectProvider> subscribedEntityObservableProvider_;
    id <JavaxInjectProvider> prefetchLoggerProvider_;
    id <JavaxInjectProvider> prefetchStatusControllerProvider_;
    id <JavaxInjectProvider> prefetchStatusReaderProvider_;
    id <JavaxInjectProvider> prefetchStrategyProvider_;
    id <JavaxInjectProvider> prefetchSyncHelperProvider_;
    id <JavaxInjectProvider> smartReplyPrefetcherProvider_;
    id <JavaxInjectProvider> webChannelPushServiceProvider_;
}

- (void)dealloc;
- (id)get;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


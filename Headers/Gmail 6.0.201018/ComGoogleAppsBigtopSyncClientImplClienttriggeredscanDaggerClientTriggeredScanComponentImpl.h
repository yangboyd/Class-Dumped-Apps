//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsBigtopSyncClientImplClienttriggeredscanClientTriggeredScanComponentImpl-Protocol.h"

@class NSString;
@protocol JavaxInjectProvider;

@interface ComGoogleAppsBigtopSyncClientImplClienttriggeredscanDaggerClientTriggeredScanComponentImpl : NSObject <ComGoogleAppsBigtopSyncClientImplClienttriggeredscanClientTriggeredScanComponentImpl>
{
    id <JavaxInjectProvider> provideSapiMainExecutorProvider_;
    id <JavaxInjectProvider> getGmailApiServerApiaryClientProvider_;
    id <JavaxInjectProvider> getItemsSyncControlServiceProvider_;
    id <JavaxInjectProvider> servicesSystemProvider_;
    id <JavaxInjectProvider> provideServiceFactoryProvider_;
    id <JavaxInjectProvider> provideServiceStubProvider_;
    id <JavaxInjectProvider> applicationInfoProvider_;
    id <JavaxInjectProvider> apiResponseFormatProvider_;
    id <JavaxInjectProvider> apiaryStagingProvider_;
    id <JavaxInjectProvider> clientTriggeredScanUriProvider_;
    id <JavaxInjectProvider> getSpamDisplayReasonConverterProvider_;
    id <JavaxInjectProvider> getSuspicionReasonConverterProvider_;
    id <JavaxInjectProvider> factoryProvider_;
    id <JavaxInjectProvider> factoryProvider2_;
    id <JavaxInjectProvider> getTransactionFactoryForItemsProvider_;
    id <JavaxInjectProvider> getCountersApiProvider_;
    id <JavaxInjectProvider> factoryProvider3_;
}

- (void)dealloc;
- (id)getClientTriggeredScannerFactory;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


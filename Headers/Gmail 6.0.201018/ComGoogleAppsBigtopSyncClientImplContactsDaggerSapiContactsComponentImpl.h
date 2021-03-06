//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsBigtopSyncClientImplContactsSapiContactsComponentImpl-Protocol.h"

@class NSString;
@protocol JavaxInjectProvider;

@interface ComGoogleAppsBigtopSyncClientImplContactsDaggerSapiContactsComponentImpl : NSObject <ComGoogleAppsBigtopSyncClientImplContactsSapiContactsComponentImpl>
{
    id <JavaxInjectProvider> texturedMonogramsProvider_;
    id <JavaxInjectProvider> multiLoginUrlRewriterProvider_;
    id <JavaxInjectProvider> factoryImplProvider_;
    id <JavaxInjectProvider> provideSapiSpanFactoryProvider_;
    id <JavaxInjectProvider> rootLifecycleProvider_;
    id <JavaxInjectProvider> getContactsFetcherCacheSizeProvider_;
    id <JavaxInjectProvider> emailNormalizerProvider_;
    id <JavaxInjectProvider> provideContactsCacheProvider_;
    id <JavaxInjectProvider> provideSchedulerProvider_;
    id <JavaxInjectProvider> contactFactoryImplProvider_;
    id <JavaxInjectProvider> getContactsByEmailsFetcherProvider_;
    id <JavaxInjectProvider> provideSapiMainExecutorProvider_;
    id <JavaxInjectProvider> enableContactsLookupProvider_;
    id <JavaxInjectProvider> populousBulkContactResolverProvider_;
    id <JavaxInjectProvider> getSmimeCertificateFactoryProvider_;
    id <JavaxInjectProvider> contactsImplProvider_;
    id <JavaxInjectProvider> provideLifecycleProvider_;
}

- (void)dealloc;
- (id)getLifecycle;
- (id)getContacts;
- (id)getContactResolver;
- (id)getPerContactPhotoUrlsFactory;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


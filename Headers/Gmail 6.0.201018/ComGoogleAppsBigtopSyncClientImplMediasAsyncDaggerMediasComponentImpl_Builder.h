//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol ComGoogleAppsBigtopServicesGmailCommonComponentGmailCommonDaggerComponent, ComGoogleAppsBigtopSyncClientImplItemlistsApiItemListsComponent, ComGoogleAppsBigtopSyncClientImplLivelistLiveListComponent, ComGoogleAppsBigtopSyncClientImplMetricsApiMetricsComponent, ComGoogleAppsBigtopSyncClientImplPlatformPlatformComponent, JBTISapiSmartMailComponent;

@interface ComGoogleAppsBigtopSyncClientImplMediasAsyncDaggerMediasComponentImpl_Builder : NSObject
{
    id <ComGoogleAppsBigtopSyncClientImplItemlistsApiItemListsComponent> itemListsComponent_;
    id <ComGoogleAppsBigtopServicesGmailCommonComponentGmailCommonDaggerComponent> gmailCommonDaggerComponent_;
    id <ComGoogleAppsBigtopSyncClientImplLivelistLiveListComponent> liveListComponent_;
    id <ComGoogleAppsBigtopSyncClientImplMetricsApiMetricsComponent> metricsComponent_;
    id <ComGoogleAppsBigtopSyncClientImplPlatformPlatformComponent> platformComponent_;
    id <JBTISapiSmartMailComponent> sapiSmartMailComponent_;
}

- (void)dealloc;
- (id)build;
- (id)sapiSmartMailComponentWithJBTISapiSmartMailComponent:(id)arg1;
- (id)platformComponentWithComGoogleAppsBigtopSyncClientImplPlatformPlatformComponent:(id)arg1;
- (id)metricsComponentWithComGoogleAppsBigtopSyncClientImplMetricsApiMetricsComponent:(id)arg1;
- (id)liveListComponentWithComGoogleAppsBigtopSyncClientImplLivelistLiveListComponent:(id)arg1;
- (id)gmailCommonDaggerComponentWithComGoogleAppsBigtopServicesGmailCommonComponentGmailCommonDaggerComponent:(id)arg1;
- (id)itemListsComponentWithComGoogleAppsBigtopSyncClientImplItemlistsApiItemListsComponent:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleAppsBigtopDataNetworkApiaryApiAsyncNetworkApiaryComponent, JBTRuntimeOptionsComponent;
@protocol ComGoogleAppsBigtopDataCommonClientInfoComponent, ComGoogleAppsBigtopDataCommonCommonComponent, ComGoogleAppsBigtopDataSettingsSettingsClientComponent, ComGoogleAppsBigtopSyncClientImplCommonSapiMainThreadComponent, ComGoogleAppsBigtopSyncClientImplPlatformPlatformComponent, JBTLoggingEventLoggingComponent;

@interface ComGoogleAppsBigtopSyncClientImplLockerDaggerLockerComponentImpl_Builder : NSObject
{
    ComGoogleAppsBigtopDataNetworkApiaryApiAsyncNetworkApiaryComponent *asyncNetworkApiaryComponent_;
    id <ComGoogleAppsBigtopDataCommonClientInfoComponent> clientInfoComponent_;
    id <ComGoogleAppsBigtopDataCommonCommonComponent> commonComponent_;
    id <JBTLoggingEventLoggingComponent> eventLoggingComponent_;
    id <ComGoogleAppsBigtopSyncClientImplPlatformPlatformComponent> platformComponent_;
    JBTRuntimeOptionsComponent *runtimeOptionsComponent_;
    id <ComGoogleAppsBigtopSyncClientImplCommonSapiMainThreadComponent> sapiMainThreadComponent_;
    id <ComGoogleAppsBigtopDataSettingsSettingsClientComponent> settingsClientComponent_;
}

- (void)dealloc;
- (id)build;
- (id)settingsClientComponentWithComGoogleAppsBigtopDataSettingsSettingsClientComponent:(id)arg1;
- (id)sapiMainThreadComponentWithComGoogleAppsBigtopSyncClientImplCommonSapiMainThreadComponent:(id)arg1;
- (id)runtimeOptionsComponentWithJBTRuntimeOptionsComponent:(id)arg1;
- (id)platformComponentWithComGoogleAppsBigtopSyncClientImplPlatformPlatformComponent:(id)arg1;
- (id)eventLoggingComponentWithJBTLoggingEventLoggingComponent:(id)arg1;
- (id)commonComponentWithComGoogleAppsBigtopDataCommonCommonComponent:(id)arg1;
- (id)clientInfoComponentWithComGoogleAppsBigtopDataCommonClientInfoComponent:(id)arg1;
- (id)asyncNetworkApiaryComponentWithComGoogleAppsBigtopDataNetworkApiaryApiAsyncNetworkApiaryComponent:(id)arg1;

@end


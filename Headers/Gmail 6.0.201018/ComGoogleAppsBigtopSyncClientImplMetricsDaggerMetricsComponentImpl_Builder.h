//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleAppsBigtopSyncClientImplMetricsMetricsComponentConfig, JBTRuntimeOptionsComponent;
@protocol ComGoogleAppsBigtopDataCommonCommonComponent, ComGoogleAppsBigtopSyncClientImplCommonSapiMainThreadComponent, JBTLoggingEventLoggingComponent;

@interface ComGoogleAppsBigtopSyncClientImplMetricsDaggerMetricsComponentImpl_Builder : NSObject
{
    id <ComGoogleAppsBigtopDataCommonCommonComponent> commonComponent_;
    id <JBTLoggingEventLoggingComponent> eventLoggingComponent_;
    ComGoogleAppsBigtopSyncClientImplMetricsMetricsComponentConfig *metricsComponentConfig_;
    JBTRuntimeOptionsComponent *runtimeOptionsComponent_;
    id <ComGoogleAppsBigtopSyncClientImplCommonSapiMainThreadComponent> sapiMainThreadComponent_;
}

- (void)dealloc;
- (id)build;
- (id)sapiMainThreadComponentWithComGoogleAppsBigtopSyncClientImplCommonSapiMainThreadComponent:(id)arg1;
- (id)runtimeOptionsComponentWithJBTRuntimeOptionsComponent:(id)arg1;
- (id)metricsComponentConfigWithComGoogleAppsBigtopSyncClientImplMetricsMetricsComponentConfig:(id)arg1;
- (id)eventLoggingComponentWithJBTLoggingEventLoggingComponent:(id)arg1;
- (id)commonComponentWithComGoogleAppsBigtopDataCommonCommonComponent:(id)arg1;
- (id)metricsModuleWithComGoogleAppsBigtopSyncClientImplMetricsMetricsModule:(id)arg1;

@end


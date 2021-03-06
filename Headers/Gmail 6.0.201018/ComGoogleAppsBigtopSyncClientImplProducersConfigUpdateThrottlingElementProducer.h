//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleAppsBigtopSyncClientImplProducersWrappingElementProducer.h"

@class ComGoogleAppsBigtopServicesGmailCommonComponentMessageVisibilityHelperFactory, ComGoogleAppsBigtopSyncClientImplCommonSapiSpan_Factory, ComGoogleAppsBigtopSyncClientImplCommonScheduler, ComGoogleAppsBigtopSyncClientImplProducersElementProducer_Config, JavaLangInteger;
@protocol ComGoogleAppsBigtopSyncClientImplCommonSapiSpan, JBTSpan;

@interface ComGoogleAppsBigtopSyncClientImplProducersConfigUpdateThrottlingElementProducer : ComGoogleAppsBigtopSyncClientImplProducersWrappingElementProducer
{
    ComGoogleAppsBigtopSyncClientImplCommonScheduler *scheduler_;
    ComGoogleAppsBigtopSyncClientImplCommonSapiSpan_Factory *sapiSpanFactory_;
    int delayMs_;
    ComGoogleAppsBigtopServicesGmailCommonComponentMessageVisibilityHelperFactory *messageVisibilityHelperFactory_;
    JavaLangInteger *schedulerToken_;
    ComGoogleAppsBigtopSyncClientImplProducersElementProducer_Config *delayedConfig_;
    id <JBTSpan> updateConfigDelayedSpan_;
    id <ComGoogleAppsBigtopSyncClientImplCommonSapiSpan> spanToMeasureDelay_;
}

+ (void)initialize;
- (void)dealloc;
- (id)getConfig;
- (void)updateConfigWithComGoogleAppsBigtopSyncClientImplProducersElementProducer_Config:(id)arg1 withJBTSpan:(id)arg2;
- (void)stop;

@end


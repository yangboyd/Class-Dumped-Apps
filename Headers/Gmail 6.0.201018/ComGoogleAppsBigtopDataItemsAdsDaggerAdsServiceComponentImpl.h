//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsBigtopDataItemsAdsAdsServiceComponentImpl-Protocol.h"

@class NSString;
@protocol ComGoogleAppsBigtopDataAdsApiAdsComponent, JavaxInjectProvider;

@interface ComGoogleAppsBigtopDataItemsAdsDaggerAdsServiceComponentImpl : NSObject <ComGoogleAppsBigtopDataItemsAdsAdsServiceComponentImpl>
{
    id <ComGoogleAppsBigtopDataAdsApiAdsComponent> adsComponent_;
    id <JavaxInjectProvider> currentJobExecutorProvider_;
    id <JavaxInjectProvider> getAdsManagerProvider_;
    id <JavaxInjectProvider> getAdsUpkeeperProvider_;
    id <JavaxInjectProvider> adsEnabledProvider_;
    id <JavaxInjectProvider> adsStartupJobFactoryProvider_;
    id <JavaxInjectProvider> getJobQueueProvider_;
    id <JavaxInjectProvider> adsServiceServerProvider_;
}

- (void)dealloc;
- (id)getAdsService;
- (id)getAdsItemListSnapshotDecorator;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


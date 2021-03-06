//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol AMIWeblabBridgeService, ANXMetricsService;

@interface WNDRawItemParser : NSObject
{
    id <ANXMetricsService> _metricsService;
    id <AMIWeblabBridgeService> _weblabBridge;
}

@property(nonatomic) __weak id <AMIWeblabBridgeService> weblabBridge; // @synthesize weblabBridge=_weblabBridge;
@property(retain, nonatomic) id <ANXMetricsService> metricsService; // @synthesize metricsService=_metricsService;
- (void).cxx_destruct;
- (_Bool)isValid:(id)arg1;
- (_Bool)validateWonderlandData:(id)arg1;
- (_Bool)isValidForParsing:(id)arg1;
- (id)prepareWonderlandCampaign:(id)arg1 failureCallback:(CDUnknownBlockType)arg2;
- (void)parseRawData:(id)arg1 isRemoteData:(_Bool)arg2 successCallback:(CDUnknownBlockType)arg3 failureCallback:(CDUnknownBlockType)arg4;
- (id)initWithMetrics:(id)arg1 weblabBridge:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCLazy;

@interface SCAdServices : NSObject
{
    SCLazy *_adMediaMetadataCoordinator;
    SCLazy *_adLifecycleWatermarkEventsTracker;
    SCLazy *_adShake2ReportLogger;
    SCLazy *_zipContentFetcher;
    SCLazy *_adContentDelivery;
}

@property(readonly, nonatomic) SCLazy *adContentDelivery; // @synthesize adContentDelivery=_adContentDelivery;
@property(readonly, nonatomic) SCLazy *zipContentFetcher; // @synthesize zipContentFetcher=_zipContentFetcher;
@property(readonly, nonatomic) SCLazy *adShake2ReportLogger; // @synthesize adShake2ReportLogger=_adShake2ReportLogger;
@property(readonly, nonatomic) SCLazy *adLifecycleWatermarkEventsTracker; // @synthesize adLifecycleWatermarkEventsTracker=_adLifecycleWatermarkEventsTracker;
@property(readonly, nonatomic) SCLazy *adMediaMetadataCoordinator; // @synthesize adMediaMetadataCoordinator=_adMediaMetadataCoordinator;
- (void).cxx_destruct;
- (id)initWithAdMediaMetadataCoordinator:(id)arg1 adLifecycleWatermarkEventsTracker:(id)arg2 adShake2ReportLogger:(id)arg3 zipContentFetcher:(id)arg4 adContentDelivery:(id)arg5;

@end


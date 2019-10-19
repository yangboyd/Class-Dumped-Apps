//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "LDSampleable-Protocol.h"

@class LDExposureCalculator, LDTimer, NSMutableDictionary, NSString;
@protocol LDActiveViewDisplayConfig;

@interface LDActiveViewDisplayMonitor : NSObject <LDSampleable>
{
    NSMutableDictionary *_adBlocks;
    LDTimer *_timer;
    LDExposureCalculator *_exposureCalculator;
    id <LDActiveViewDisplayConfig> _displayConfig;
}

+ (id)viewabilityFields;
+ (id)sharedInstanceWithDisplayConfig:(id)arg1;
@property(retain, nonatomic) id <LDActiveViewDisplayConfig> displayConfig; // @synthesize displayConfig=_displayConfig;
@property(retain, nonatomic) LDExposureCalculator *exposureCalculator; // @synthesize exposureCalculator=_exposureCalculator;
@property(retain, nonatomic) LDTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSMutableDictionary *adBlocks; // @synthesize adBlocks=_adBlocks;
- (void).cxx_destruct;
- (_Bool)shouldPeriodicallySample;
- (void)sample;
- (void)appWillEnterForeground;
- (void)appDidEnterBackground;
- (id)buildViewabilityStringsOfAdBlock:(id)arg1 pingType:(id)arg2 doneReasonCode:(id)arg3;
- (void)sendEndOfSessionImpressionWithAdBlock:(id)arg1;
- (void)sendViewableImpressionWithAdBlock:(id)arg1;
- (void)stopMonitoringAdBlock:(id)arg1;
- (void)updateViewabilityOfAdBlock:(id)arg1 usingView:(id)arg2;
- (void)updateViewabilityOfAdBlock:(id)arg1;
- (_Bool)shouldReportEndOfSessionImpressionOfAdBlock:(id)arg1;
- (struct CGRect)statusBarRect;
- (id)mainView;
- (void)deleteAdWithID:(id)arg1;
- (void)stopMonitoringAdWithID:(id)arg1;
- (void)clearCreativePositionOfAdWithID:(id)arg1;
- (void)updateCreativePositionOfAdWithID:(id)arg1 offsetX:(double)arg2 offsetY:(double)arg3 width:(double)arg4 height:(double)arg5;
- (void)startMonitoringAdWithID:(id)arg1 view:(id)arg2 delegate:(id)arg3;
- (void)dealloc;
- (id)initWithTimerAndDisplayConfig:(id)arg1 displayConfig:(id)arg2;
- (id)initWithDisplayConfig:(id)arg1;
- (void)overwriteConfigIfNecessary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


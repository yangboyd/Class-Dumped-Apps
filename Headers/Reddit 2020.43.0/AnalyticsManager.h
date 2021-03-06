//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AnalyticsProcessorDelegate-Protocol.h"

@class AnalyticsEventProcessor, AppSettings, ExperimentManager, Loid, NSString;

@interface AnalyticsManager : NSObject <AnalyticsProcessorDelegate>
{
    Loid *_loid;
    AppSettings *_appSettings;
    AnalyticsEventProcessor *_eventProcessor;
    ExperimentManager *_experimentManager;
}

+ (void)appBackgroundedUsingAnalyticsLogger:(id)arg1 sender:(id)arg2;
+ (void)setIsEnabled:(_Bool)arg1;
+ (_Bool)isEnabled;
+ (long long)endpoint;
+ (void)setEndpoint:(long long)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) ExperimentManager *experimentManager; // @synthesize experimentManager=_experimentManager;
@property(readonly, nonatomic) AnalyticsEventProcessor *eventProcessor; // @synthesize eventProcessor=_eventProcessor;
@property(readonly, nonatomic) AppSettings *appSettings; // @synthesize appSettings=_appSettings;
@property(readonly, nonatomic) Loid *loid; // @synthesize loid=_loid;
- (void)persistInstallTimeStamp;
- (void)appBackgrounded;
- (void)logAnalyticsEvents:(id)arg1;
- (void)logAnalyticsEvent:(id)arg1;
- (void)configureWithBranchParameters:(id)arg1;
- (_Bool)isProcessingEnabled;
- (id)initWithService:(id)arg1 appSettings:(id)arg2 errorReporter:(id)arg3;
- (void)logEvents:(id)arg1;
- (void)logEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


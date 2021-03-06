//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpeedTestEngine/FIRABTInstanceProvider-Protocol.h>
#import <SpeedTestEngine/FIRLibrary-Protocol.h>

@protocol FIRAnalyticsInterop;

@interface FIRExperimentController : NSObject <FIRABTInstanceProvider, FIRLibrary>
{
    id <FIRAnalyticsInterop> _analytics;
}

+ (id)sharedInstance;
+ (id)componentsToRegister;
+ (void)load;
@property(retain, nonatomic) id <FIRAnalyticsInterop> analytics; // @synthesize analytics=_analytics;
- (void).cxx_destruct;
- (void)activateExperiment:(id)arg1 forServiceOrigin:(id)arg2;
- (void)validateRunningExperimentsForServiceOrigin:(id)arg1 runningExperimentPayloads:(id)arg2;
- (double)latestExperimentStartTimestampBetweenTimestamp:(double)arg1 andPayloads:(id)arg2;
- (void)updateExperimentConditionalUserPropertiesWithServiceOrigin:(id)arg1 events:(id)arg2 policy:(int)arg3 lastStartTime:(double)arg4 payloads:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)updateExperimentsWithServiceOrigin:(id)arg1 events:(id)arg2 policy:(int)arg3 lastStartTime:(double)arg4 payloads:(id)arg5;
- (void)updateExperimentsWithServiceOrigin:(id)arg1 events:(id)arg2 policy:(int)arg3 lastStartTime:(double)arg4 payloads:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (id)initWithAnalytics:(id)arg1;

@end


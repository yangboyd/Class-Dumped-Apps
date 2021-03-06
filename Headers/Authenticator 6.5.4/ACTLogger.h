//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AriaObjC/ACTILogger-Protocol.h>

@class ACTSemanticContext, NSString;
@protocol ACTILogger, ACTISemanticContext;

@interface ACTLogger : NSObject <ACTILogger>
{
    id <ACTILogger> directPipe;
    id <ACTILogger> queuedPipe;
    ACTSemanticContext *loggerContext;
    NSString *_loggerInitId;
}

@property(retain, nonatomic) NSString *loggerInitId; // @synthesize loggerInitId=_loggerInitId;
- (void).cxx_destruct;
- (void)setAppExperimentImpressionId:(id)arg1;
- (void)setAppExperimentETag:(id)arg1;
- (void)setAppExperimentIds:(id)arg1 forEvent:(id)arg2;
- (void)setAppExperimentIds:(id)arg1;
- (id)sessionId;
- (void)logSessionWithState:(int)arg1 eventProperties:(id)arg2;
- (void)logSessionWithState:(int)arg1;
- (void)logUserState:(int)arg1 timeToLiveInMillis:(long long)arg2 eventProperties:(id)arg3;
- (void)logTraceWithTraceLevel:(int)arg1 message:(id)arg2 eventProperties:(id)arg3;
- (void)logAggregatedMetricWithMetricData:(id)arg1 eventProperties:(id)arg2;
- (void)logAggregatedMetricWithName:(id)arg1 duration:(long long)arg2 count:(long long)arg3 eventProperties:(id)arg4;
- (void)logSampledMetricWithName:(id)arg1 doubleValue:(double)arg2 units:(id)arg3 instanceName:(id)arg4 objectClass:(id)arg5 objectIdentity:(id)arg6 eventProperties:(id)arg7;
- (void)logSampledMetricWithName:(id)arg1 doubleValue:(double)arg2 units:(id)arg3 eventProperties:(id)arg4;
- (void)logPageActionWithPageActionData:(id)arg1 eventProperties:(id)arg2;
- (void)logPageActionWithPageViewIdentity:(id)arg1 actionType:(int)arg2 eventProperties:(id)arg3;
- (void)logPageViewWithIdentity:(id)arg1 pageName:(id)arg2 category:(id)arg3 uri:(id)arg4 referrerUri:(id)arg5 eventProperties:(id)arg6;
- (void)logPageViewWithIdentity:(id)arg1 pageName:(id)arg2 eventProperties:(id)arg3;
- (void)logFailureWithSignature:(id)arg1 detail:(id)arg2 category:(id)arg3 identity:(id)arg4 eventProperties:(id)arg5;
- (void)logFailureWithSignature:(id)arg1 detail:(id)arg2 eventProperties:(id)arg3;
- (void)logEventWithEventProperties:(id)arg1;
- (void)logEventWithName:(id)arg1;
- (void)logAppLifecycleWithState:(int)arg1 eventProperties:(id)arg2;
- (void)setContextWithName:(id)arg1 UUIDValue:(id)arg2;
- (void)setContextWithName:(id)arg1 UUIDValue:(id)arg2 piiKind:(int)arg3;
- (void)setContextWithName:(id)arg1 doubleValue:(double)arg2;
- (void)setContextWithName:(id)arg1 doubleValue:(double)arg2 piiKind:(int)arg3;
- (void)setContextWithName:(id)arg1 longValue:(long long)arg2;
- (void)setContextWithName:(id)arg1 longValue:(long long)arg2 piiKind:(int)arg3;
- (void)setContextWithName:(id)arg1 dateValue:(id)arg2;
- (void)setContextWithName:(id)arg1 dateValue:(id)arg2 piiKind:(int)arg3;
- (void)setContextWithName:(id)arg1 boolValue:(_Bool)arg2;
- (void)setContextWithName:(id)arg1 boolValue:(_Bool)arg2 piiKind:(int)arg3;
- (void)setContextWithName:(id)arg1 stringValue:(id)arg2;
- (void)setContextWithName:(id)arg1 stringValue:(id)arg2 customerContentKind:(int)arg3;
- (void)setContextWithName:(id)arg1 stringValue:(id)arg2 piiKind:(int)arg3;
@property(readonly, nonatomic) id <ACTISemanticContext> semanticContext;
- (void)onTeardownComplete:(id)arg1;
- (void)releaseDirectPipe;
- (id)initWithTenant:(id)arg1 source:(id)arg2 contextProvider:(id)arg3;
- (id)pipeForEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


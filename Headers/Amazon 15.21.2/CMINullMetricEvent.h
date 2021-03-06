//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CMIMetricEvent-Protocol.h"

@class NSString;

@interface CMINullMetricEvent : NSObject <CMIMetricEvent>
{
    _Bool _anonymous;
    int _metricEventType;
    NSString *_program;
    NSString *_source;
    NSString *_nonAnonymousCustomerId;
    NSString *_nonAnonymousSessionId;
}

@property(nonatomic) _Bool anonymous; // @synthesize anonymous=_anonymous;
@property(retain, nonatomic) NSString *nonAnonymousSessionId; // @synthesize nonAnonymousSessionId=_nonAnonymousSessionId;
@property(retain, nonatomic) NSString *nonAnonymousCustomerId; // @synthesize nonAnonymousCustomerId=_nonAnonymousCustomerId;
@property(readonly, nonatomic) int metricEventType; // @synthesize metricEventType=_metricEventType;
@property(readonly, copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(readonly, copy, nonatomic) NSString *program; // @synthesize program=_program;
- (void).cxx_destruct;
- (void)addDataPoints:(id)arg1;
- (void)addDataPoint:(id)arg1;
- (id)dataPoints;
- (void)clear;
- (void)addClickstreamStringWithName:(id)arg1 value:(id)arg2;
- (void)removeStringWithName:(id)arg1;
- (void)addStringWithName:(id)arg1 value:(id)arg2;
- (void)removeTimerWithName:(id)arg1;
- (void)stopTimerWithName:(id)arg1;
- (void)startTimerWithName:(id)arg1;
- (void)addTimerWithName:(id)arg1 value:(double)arg2 samples:(long long)arg3;
- (void)addTimerWithName:(id)arg1 value:(double)arg2;
- (void)removeCounterWithName:(id)arg1;
- (void)addCounterWithName:(id)arg1 value:(double)arg2;
- (void)anonymous:(_Bool)arg1;
- (void)nonAnonymousSessionId:(id)arg1;
- (void)nonAnonymousCustomerId:(id)arg1;
- (id)initWithProgram:(id)arg1 source:(id)arg2 metricEventType:(int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TFSTracer : NSObject
{
    // Error parsing type: , name: spanBuilder
    // Error parsing type: , name: spanQueue
    // Error parsing type: , name: traceReporter
    // Error parsing type: , name: traceValueProvider
}

+ (id)loggingChannel;
+ (id)shared;
- (void).cxx_destruct;
- (id)init;
- (id)describeTraceContainingSpanContext:(id)arg1;
- (void)addAnnotationNamed:(id)arg1 toSpan:(id)arg2;
- (void)cancelSpanNamed:(id)arg1 inParentSpanContext:(id)arg2;
- (void)cancelSpan:(id)arg1;
- (_Bool)stopSpan:(id)arg1;
- (id)startSpanNamed:(id)arg1 inParentContext:(id)arg2 childSpanNames:(id)arg3;
- (id)startSpanNamed:(id)arg1 inParentContext:(id)arg2;
- (void)allowReportingOfTraceWithRootSpan:(id)arg1;
- (id)startTraceWithConfiguration:(id)arg1 childSpanNames:(id)arg2;
- (id)startTraceWithConfiguration:(id)arg1;
- (void)measuredWithSpanName:(id)arg1 inParentContext:(id)arg2 childSpanNames:(id)arg3 workToMeasure:(CDUnknownBlockType)arg4;
- (void)measuredWithSpanName:(id)arg1 inParentContext:(id)arg2 workToMeasure:(CDUnknownBlockType)arg3;
- (void)measuredAsyncWithTraceName:(id)arg1 samplingPolicy:(id)arg2 asyncWorkToMeasure:(CDUnknownBlockType)arg3;
- (void)measuredWithTraceName:(id)arg1 samplingPolicy:(id)arg2 workToMeasure:(CDUnknownBlockType)arg3;

@end


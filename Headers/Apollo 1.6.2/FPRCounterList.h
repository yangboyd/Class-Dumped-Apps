//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface FPRCounterList : NSObject
{
    NSObject<OS_dispatch_queue> *_counterSerialQueue;
    NSMutableDictionary *_counterDictionary;
}

@property(retain, nonatomic) NSMutableDictionary *counterDictionary; // @synthesize counterDictionary=_counterDictionary;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *counterSerialQueue; // @synthesize counterSerialQueue=_counterSerialQueue;
- (void).cxx_destruct;
- (_Bool)isValid;
- (void)setIntValue:(long long)arg1 forMetric:(id)arg2;
- (void)deleteMetric:(id)arg1;
- (long long)valueForIntMetric:(id)arg1;
- (void)incrementMetric:(id)arg1 byInt:(long long)arg2;
@property(readonly) unsigned long long numberOfCounters;
@property(readonly) NSDictionary *counters;
- (void)incrementCounterNamed:(id)arg1 by:(long long)arg2;
- (id)init;

@end


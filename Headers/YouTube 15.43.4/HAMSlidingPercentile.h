//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface HAMSlidingPercentile : NSObject
{
    NSMutableArray *_samples;
    long long _totalSampleWeight;
    long long _maxWeight;
}

- (void).cxx_destruct;
@property(nonatomic) long long maxWeight; // @synthesize maxWeight=_maxWeight;
- (void)trimSamples;
- (void)clear;
- (_Bool)hasSamples;
- (float)valueAtPercentile:(float)arg1;
- (void)addSampleWithWeight:(long long)arg1 value:(float)arg2;
- (id)init;
- (id)initWithMaxWeight:(long long)arg1;

@end


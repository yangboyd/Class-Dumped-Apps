//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BDPMonitorData : NSObject
{
    double _cpuRatio;
    double _cpuRatioForSingleApp;
    double _fps;
    double _memory;
    long long _freeze;
    long long _runloopTimes;
}

@property(nonatomic) long long runloopTimes; // @synthesize runloopTimes=_runloopTimes;
@property(nonatomic) long long freeze; // @synthesize freeze=_freeze;
@property(nonatomic) double memory; // @synthesize memory=_memory;
@property(nonatomic) double fps; // @synthesize fps=_fps;
@property(nonatomic) double cpuRatioForSingleApp; // @synthesize cpuRatioForSingleApp=_cpuRatioForSingleApp;
@property(nonatomic) double cpuRatio; // @synthesize cpuRatio=_cpuRatio;

@end


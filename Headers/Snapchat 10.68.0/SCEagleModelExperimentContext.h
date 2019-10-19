//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCExperimentContext.h"

@class NSString;

@interface SCEagleModelExperimentContext : SCExperimentContext
{
    _Bool _eagleModelEnabled;
    float _eagleModelQualityThreshold;
    float _eagleModelGrabRate;
    NSString *_eagleModelVersion;
    long long _eagleModelStrategy;
    long long _eagleModelNumFramesToProcess;
}

@property(readonly, nonatomic) float eagleModelGrabRate; // @synthesize eagleModelGrabRate=_eagleModelGrabRate;
@property(readonly, nonatomic) float eagleModelQualityThreshold; // @synthesize eagleModelQualityThreshold=_eagleModelQualityThreshold;
@property(readonly, nonatomic) long long eagleModelNumFramesToProcess; // @synthesize eagleModelNumFramesToProcess=_eagleModelNumFramesToProcess;
@property(readonly, nonatomic) long long eagleModelStrategy; // @synthesize eagleModelStrategy=_eagleModelStrategy;
@property(readonly, nonatomic) NSString *eagleModelVersion; // @synthesize eagleModelVersion=_eagleModelVersion;
@property(readonly, nonatomic) _Bool eagleModelEnabled; // @synthesize eagleModelEnabled=_eagleModelEnabled;
- (void).cxx_destruct;
- (void)setupParameters;
- (id)experimentName;

@end


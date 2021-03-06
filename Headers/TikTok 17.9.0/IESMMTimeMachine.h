//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IESMMObject.h"

@class AVAsset, NSMutableArray, NSMutableDictionary;

@interface IESMMTimeMachine : IESMMObject
{
    _Bool _isNewTimeMachine;
    long long _currTimeMachineType;
    NSMutableDictionary *_timeMachineBeginTimes;
    NSMutableDictionary *_timeMachineStartTimes;
    AVAsset *_reverseSrcAsset;
    AVAsset *_reverseAsset;
    NSMutableDictionary *_timeMachineDurations;
    double _earliestTimeMachineTime;
    double _allVideoDuration;
    NSMutableArray *_currentTimeMachineRange;
    NSMutableArray *_allTimeMachineRange;
}

@property(retain, nonatomic) NSMutableArray *allTimeMachineRange; // @synthesize allTimeMachineRange=_allTimeMachineRange;
@property(retain, nonatomic) NSMutableArray *currentTimeMachineRange; // @synthesize currentTimeMachineRange=_currentTimeMachineRange;
@property(nonatomic) double allVideoDuration; // @synthesize allVideoDuration=_allVideoDuration;
@property(nonatomic) double earliestTimeMachineTime; // @synthesize earliestTimeMachineTime=_earliestTimeMachineTime;
@property(retain, nonatomic) NSMutableDictionary *timeMachineDurations; // @synthesize timeMachineDurations=_timeMachineDurations;
@property(nonatomic) _Bool isNewTimeMachine; // @synthesize isNewTimeMachine=_isNewTimeMachine;
@property(retain, nonatomic) AVAsset *reverseAsset; // @synthesize reverseAsset=_reverseAsset;
@property(retain, nonatomic) AVAsset *reverseSrcAsset; // @synthesize reverseSrcAsset=_reverseSrcAsset;
@property(retain, nonatomic) NSMutableDictionary *timeMachineStartTimes; // @synthesize timeMachineStartTimes=_timeMachineStartTimes;
@property(retain, nonatomic) NSMutableDictionary *timeMachineBeginTimes; // @synthesize timeMachineBeginTimes=_timeMachineBeginTimes;
@property(nonatomic) long long currTimeMachineType; // @synthesize currTimeMachineType=_currTimeMachineType;
- (void).cxx_destruct;
- (CDStruct_1b6d18a9)convertToTimemachinTime:(CDStruct_1b6d18a9)arg1;
- (double)getTheRealDesOutTime;
- (double)caculateTimeMachineRangeDesoutTime:(id)arg1;
- (double)caculateTimeMachineRangeDesInTime:(id)arg1;
- (double)p_convertTimeMachinTimeToRealTimeFromRange:(id)arg1 realTime:(double)arg2;
- (void)updateAndGenerateAllTimeRange;
- (double)convertTimeMachinTimeToRealTime:(double)arg1;
- (void)dealloc;
- (double)currentTimeMachineDuration;
- (double)currentStartTime;
- (double)currentBeginTime;
- (double)currentTimeMachineDurationWithType:(long long)arg1;
- (double)startTimeWithType:(long long)arg1;
- (double)beginTimeWithType:(long long)arg1;
- (void)updateTimeMachineWithConfig:(id)arg1;
- (void)updateBeginTime:(double)arg1 andStartTime:(double)arg2 type:(long long)arg3;
- (void)updateBeginTime:(double)arg1 type:(long long)arg2;
- (void)clearReverseAsset;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end


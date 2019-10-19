//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;
@protocol OS_dispatch_queue;

@interface NFLXMLTest2 : NSObject
{
    _Bool _coreML;
    NSNumber *_modelKey;
    NSNumber *_threshold;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(copy, nonatomic) NSNumber *threshold; // @synthesize threshold=_threshold;
@property(copy, nonatomic) NSNumber *modelKey; // @synthesize modelKey=_modelKey;
@property(nonatomic) _Bool coreML; // @synthesize coreML=_coreML;
- (void).cxx_destruct;
- (id)predictionWithModel:(unsigned long long)arg1 fromMemoryUsed:(double)arg2 cpuUsage:(double)arg3 memoryPercent:(double)arg4 deviceMemoryTotal:(double)arg5 deviceMemoryFree:(double)arg6 batteryLevel:(double)arg7 is_batterylow:(double)arg8 is_charge:(double)arg9 error:(id *)arg10;
- (id)handleModelCompletion:(id)arg1 error:(id)arg2;
- (void)executeAllModels;
- (void)executeWithCompletion:(CDUnknownBlockType)arg1;
- (void)configure:(id)arg1;
- (id)init;

@end


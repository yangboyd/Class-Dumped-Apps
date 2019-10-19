//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MLModel;

@interface NFLXMLAimLowModel_p50 : NSObject
{
    MLModel *_model;
}

+ (id)urlOfModelInThisBundle;
@property(readonly, nonatomic) MLModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)predictionFromMemoryUsed:(double)arg1 cpuUsage:(double)arg2 memoryPercent:(double)arg3 deviceMemoryTotal:(double)arg4 deviceMemoryFree:(double)arg5 batteryLevel:(double)arg6 is_batterylow:(double)arg7 is_charge:(double)arg8 error:(id *)arg9;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)predictionFromFeatures:(id)arg1 error:(id *)arg2;
- (id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id *)arg3;
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;
- (id)init;

@end


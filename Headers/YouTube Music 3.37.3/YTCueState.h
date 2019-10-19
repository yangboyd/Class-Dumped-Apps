//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface YTCueState : NSObject
{
    _Bool _isCueStateReported;
    _Bool _isForcedReturn;
    _Bool _isCueStartTimeChanged;
    _Bool _hasPredictStartCuepoint;
    _Bool _hasStartCuepoint;
    _Bool _hasContinueCuepoint;
    _Bool _hasStopCuepoint;
    _Bool _hasUnsupportedCuepoint;
    double _cueStartTime;
    NSString *_cueIdentifier;
    double _totalCueDuration;
    long long _cueDurationState;
}

+ (id)cueDurationStateString:(long long)arg1;
@property(readonly, nonatomic) _Bool hasUnsupportedCuepoint; // @synthesize hasUnsupportedCuepoint=_hasUnsupportedCuepoint;
@property(readonly, nonatomic) _Bool hasStopCuepoint; // @synthesize hasStopCuepoint=_hasStopCuepoint;
@property(readonly, nonatomic) _Bool hasContinueCuepoint; // @synthesize hasContinueCuepoint=_hasContinueCuepoint;
@property(readonly, nonatomic) _Bool hasStartCuepoint; // @synthesize hasStartCuepoint=_hasStartCuepoint;
@property(readonly, nonatomic) _Bool hasPredictStartCuepoint; // @synthesize hasPredictStartCuepoint=_hasPredictStartCuepoint;
@property(readonly, nonatomic) _Bool isCueStartTimeChanged; // @synthesize isCueStartTimeChanged=_isCueStartTimeChanged;
@property(readonly, nonatomic) _Bool isForcedReturn; // @synthesize isForcedReturn=_isForcedReturn;
@property(readonly, nonatomic) long long cueDurationState; // @synthesize cueDurationState=_cueDurationState;
@property(readonly, nonatomic) double totalCueDuration; // @synthesize totalCueDuration=_totalCueDuration;
@property(readonly, nonatomic) NSString *cueIdentifier; // @synthesize cueIdentifier=_cueIdentifier;
@property(readonly, nonatomic) _Bool isCueStateReported; // @synthesize isCueStateReported=_isCueStateReported;
@property(readonly, nonatomic) double cueStartTime; // @synthesize cueStartTime=_cueStartTime;
- (void).cxx_destruct;
- (void)setTotalCueDurationWithDuration:(double)arg1;
- (_Bool)isApproxEqualForTime:(double)arg1 to:(double)arg2;
- (void)recordCuepointEventWithCuepoint:(id)arg1;
- (void)recordCueStartTimeWithCuepoint:(id)arg1;
- (void)recordTotalCueDurationWithCuepoint:(id)arg1;
- (void)setCueStateReported;
- (void)setForcedReturnAtDate:(id)arg1;
- (void)addCuepoint:(id)arg1;
- (id)initWithCueIdentifier:(id)arg1 cueStartTime:(double)arg2 totalCueDuration:(double)arg3;

@end


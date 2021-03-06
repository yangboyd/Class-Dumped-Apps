//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSMutableArray, NSNumber, RACSignal;

@protocol ACCRecorderFlowProvideProtocol <NSObject>
@property(readonly, nonatomic) unsigned long long state;
@property(nonatomic) unsigned long long mixSubtype;
@property(nonatomic) double selectedSpeed;
@property(readonly, nonatomic) _Bool speedControlButtonSelected;
@property(readonly, nonatomic) NSMutableArray *markedTimes;
@property(nonatomic) double reactLastCapturedVideoDuration;
@property(nonatomic) double lastCapturedVideoDuration;
@property(nonatomic) double currentDuration;
@property(readonly, nonatomic) RACSignal *clickCompleteButtonSignal;
@property(readonly, nonatomic) RACSignal *markDurationSignal;
@property(readonly, nonatomic) RACSignal *updateCurrentDurationSignal;
@property(readonly, nonatomic) RACSignal *willJumpToNextVCSignal;
@property(readonly, nonatomic) RACSignal *exportVideoSignal;
@property(readonly, nonatomic) RACSignal *stopRecordSignal;
@property(readonly, nonatomic) RACSignal *stopRecordAndExportSignal;
@property(readonly, nonatomic) RACSignal *pauseRecordSignal;
@property(readonly, nonatomic) RACSignal *startRecordSignal;
@property(readonly, nonatomic) RACSignal *removeAllSegmentSignal;
@property(readonly, nonatomic) RACSignal *removeLastSegmentSignal;
- (void)sendWillJumpToNextVCSignal:(NSNumber *)arg1;
- (void)sendStopRecordAndExportSignal:(unsigned long long)arg1;
- (void)pauseRecord;
@end


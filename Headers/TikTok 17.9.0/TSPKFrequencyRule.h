//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TSPKSceneRule.h"

#import "TSPKFilterRule-Protocol.h"

@class NSMutableArray, NSString, TSPKLock;

@interface TSPKFrequencyRule : TSPKSceneRule <TSPKFilterRule>
{
    TSPKLock *_lock;
    long long _timeRange;
    long long _maxCallAllowed;
    NSMutableArray *_events;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *events; // @synthesize events=_events;
@property(nonatomic) long long maxCallAllowed; // @synthesize maxCallAllowed=_maxCallAllowed;
@property(nonatomic) long long timeRange; // @synthesize timeRange=_timeRange;
- (void)elimateEventOutOfTimeRange:(id)arg1;
- (_Bool)checkIfEventMatchFrequency:(id)arg1;
- (_Bool)shouldDisableRule;
- (_Bool)checkIfEventMatchRule:(id)arg1;
- (void)decodeParams:(id)arg1;
- (id)initWithRuleModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


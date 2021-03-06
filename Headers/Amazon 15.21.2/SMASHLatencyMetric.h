//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface SMASHLatencyMetric : NSObject
{
    _Bool _isFirstMetricCollected;
    double _initTime;
    double _appStartTime;
    double _didStartTime;
    double _didRenderTime;
    double _didFinishTime;
    NSString *_duplicates;
    NSDate *_timeAtMetricInit;
    NSString *_url;
}

@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSDate *timeAtMetricInit; // @synthesize timeAtMetricInit=_timeAtMetricInit;
@property(retain, nonatomic) NSString *duplicates; // @synthesize duplicates=_duplicates;
@property _Bool isFirstMetricCollected; // @synthesize isFirstMetricCollected=_isFirstMetricCollected;
@property(nonatomic) double didFinishTime; // @synthesize didFinishTime=_didFinishTime;
@property(nonatomic) double didRenderTime; // @synthesize didRenderTime=_didRenderTime;
@property(nonatomic) double didStartTime; // @synthesize didStartTime=_didStartTime;
@property(nonatomic) double appStartTime; // @synthesize appStartTime=_appStartTime;
@property(nonatomic) double initTime; // @synthesize initTime=_initTime;
- (void).cxx_destruct;
- (id)asString;
- (_Bool)checkForDuplicate:(double)arg1 log:(id)arg2;
- (void)setUrlString:(id)arg1;
- (void)logFinishTime:(double)arg1;
- (void)logRenderTime:(double)arg1;
- (void)logStartTime:(double)arg1;
- (void)logInitTime:(double)arg1;
- (void)logAppStartTime:(double)arg1;
- (id)init;

@end


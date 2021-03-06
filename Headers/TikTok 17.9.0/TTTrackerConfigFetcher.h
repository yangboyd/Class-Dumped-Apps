//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, TTTrackerEventListConfig;
@protocol OS_dispatch_queue;

@interface TTTrackerConfigFetcher : NSObject
{
    _Bool _needUpdateConfig;
    _Bool _eventFilterEnabled;
    _Bool _isUpdatingConfig;
    double _batchInterval;
    NSArray *_immediateEventList;
    TTTrackerEventListConfig *_eventListConfig;
    long long _fetchInterval;
    NSObject<OS_dispatch_queue> *_ioQueue;
    NSString *_eventListPath;
    NSString *_key;
    NSString *_iv;
    long long _requestStartTime;
}

+ (id)sharedInstance;
@property(nonatomic) long long requestStartTime; // @synthesize requestStartTime=_requestStartTime;
@property(nonatomic) _Bool isUpdatingConfig; // @synthesize isUpdatingConfig=_isUpdatingConfig;
@property(nonatomic) _Bool eventFilterEnabled; // @synthesize eventFilterEnabled=_eventFilterEnabled;
@property(nonatomic) _Bool needUpdateConfig; // @synthesize needUpdateConfig=_needUpdateConfig;
@property(copy, nonatomic) NSString *iv; // @synthesize iv=_iv;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) NSString *eventListPath; // @synthesize eventListPath=_eventListPath;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *ioQueue; // @synthesize ioQueue=_ioQueue;
@property(nonatomic) long long fetchInterval; // @synthesize fetchInterval=_fetchInterval;
@property(retain) TTTrackerEventListConfig *eventListConfig; // @synthesize eventListConfig=_eventListConfig;
@property(retain) NSArray *immediateEventList; // @synthesize immediateEventList=_immediateEventList;
@property(nonatomic) double batchInterval; // @synthesize batchInterval=_batchInterval;
- (void).cxx_destruct;
- (void)configureTracker:(id)arg1;
- (void)startFetchTrackerConfiguration;
- (void)traceFetchResultState:(id)arg1;
- (void)checkIntervalAndStartFetch;
- (void)loadBlockList;
- (void)turnOffEventFilter;
- (void)turnOnEventFilter;
- (id)init;

@end


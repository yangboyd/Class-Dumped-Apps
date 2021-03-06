//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BDTrackerEventListConfig, NSString;

@interface BDTrackerConfigFetcher : NSObject
{
    _Bool _eventFilterEnabled;
    _Bool _needUpdateConfig;
    _Bool _isUpdatingConfig;
    BDTrackerEventListConfig *_eventListConfig;
    double _dataKeepInterval;
    long long _fetchInterval;
    NSString *_eventListPath;
    NSString *_key;
    NSString *_iv;
    long long _startTimestamp;
}

+ (id)sharedInstance;
@property(nonatomic) long long startTimestamp; // @synthesize startTimestamp=_startTimestamp;
@property(nonatomic) _Bool isUpdatingConfig; // @synthesize isUpdatingConfig=_isUpdatingConfig;
@property(nonatomic) _Bool needUpdateConfig; // @synthesize needUpdateConfig=_needUpdateConfig;
@property(copy, nonatomic) NSString *iv; // @synthesize iv=_iv;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) NSString *eventListPath; // @synthesize eventListPath=_eventListPath;
@property(nonatomic) long long fetchInterval; // @synthesize fetchInterval=_fetchInterval;
@property(nonatomic) double dataKeepInterval; // @synthesize dataKeepInterval=_dataKeepInterval;
@property(nonatomic) _Bool eventFilterEnabled; // @synthesize eventFilterEnabled=_eventFilterEnabled;
@property(retain) BDTrackerEventListConfig *eventListConfig; // @synthesize eventListConfig=_eventListConfig;
- (void).cxx_destruct;
- (void)_configureTracker:(id)arg1;
- (void)startFetchTrackerConfiguration;
- (void)traceFetchResultState:(id)arg1;
- (void)checkIntervalAndStartFetch;
- (void)loadBlockList;
- (void)turnOffEventFilter;
- (void)turnOnEventFilter;
- (id)init;

@end


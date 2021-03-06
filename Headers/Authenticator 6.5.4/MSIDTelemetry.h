//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface MSIDTelemetry : NSObject
{
    NSMutableArray *_dispatchers;
    NSMutableDictionary *_eventTracking;
    _Bool _piiEnabled;
    _Bool _notifyOnFailureOnly;
}

+ (id)sharedInstance;
+ (void)stopFailedCacheEvent:(id)arg1 wipeData:(id)arg2 context:(id)arg3;
+ (void)stopCacheEvent:(id)arg1 withItem:(id)arg2 success:(_Bool)arg3 context:(id)arg4;
+ (id)startCacheEventWithName:(id)arg1 context:(id)arg2;
- (void).cxx_destruct;
@property _Bool notifyOnFailureOnly; // @synthesize notifyOnFailureOnly=_notifyOnFailureOnly;
@property _Bool piiEnabled; // @synthesize piiEnabled=_piiEnabled;
- (void)removeAllDispatchers;
- (void)removeDispatcher:(id)arg1;
- (void)addDispatcher:(id)arg1;
- (id)initInternal;
- (id)init;
- (void)flush:(id)arg1;
- (id)getEventTrackingKey:(id)arg1 eventName:(id)arg2;
- (void)dispatchEventNow:(id)arg1 event:(id)arg2;
- (void)stopEvent:(id)arg1 event:(id)arg2;
- (void)removeDispatcherByObserver:(id)arg1;
- (void)startEvent:(id)arg1 eventName:(id)arg2;
- (id)generateRequestId;

@end


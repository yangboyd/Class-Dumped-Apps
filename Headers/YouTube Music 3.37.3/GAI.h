//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GAIBatchingDispatcher, NSMutableDictionary;
@protocol GAILogger, GAITracker;

@interface GAI : NSObject
{
    _Bool trackUncaughtExceptions_;
    _Bool _dryRun;
    _Bool _optOut;
    GAIBatchingDispatcher *dispatcher_;
    NSMutableDictionary *trackers_;
    id <GAITracker> defaultTracker_;
    Class trackerImplClass_;
    id <GAILogger> logger_;
    Class _urlConnectionClass;
}

+ (id)thread;
+ (oneway void)threadMain:(id)arg1;
+ (id)sharedLogger;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
@property(nonatomic) Class urlConnectionClass; // @synthesize urlConnectionClass=_urlConnectionClass;
@property(nonatomic) Class trackerImplClass; // @synthesize trackerImplClass=trackerImplClass_;
@property(retain, nonatomic) NSMutableDictionary *trackers; // @synthesize trackers=trackers_;
@property(retain, nonatomic) GAIBatchingDispatcher *dispatcher; // @synthesize dispatcher=dispatcher_;
- (void)reset;
@property(retain, nonatomic) id <GAILogger> logger; // @synthesize logger=logger_;
@property(nonatomic) _Bool optOut; // @synthesize optOut=_optOut;
@property(nonatomic) _Bool dryRun; // @synthesize dryRun=_dryRun;
- (void)removeTrackerByName:(id)arg1;
- (void)dispatchWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dispatch;
- (id)trackerWithTrackingId:(id)arg1;
- (id)trackerWithName:(id)arg1 trackingId:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)init;
- (_Bool)createDispatcher:(id *)arg1;
@property(nonatomic) _Bool trackUncaughtExceptions; // @synthesize trackUncaughtExceptions=trackUncaughtExceptions_;
@property(nonatomic) double dispatchInterval;
- (id)clientId;
@property(nonatomic) id <GAITracker> defaultTracker; // @synthesize defaultTracker=defaultTracker_;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;
@protocol OS_dispatch_queue, OS_nw_path_monitor;

@interface A9VSNetwork : NSObject
{
    NSObject<OS_nw_path_monitor> *_monitor;
    NSObject<OS_dispatch_queue> *_monitorQueue;
    NSHashTable *_observers;
    unsigned long long _status;
}

@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *monitorQueue; // @synthesize monitorQueue=_monitorQueue;
@property(retain, nonatomic) NSObject<OS_nw_path_monitor> *monitor; // @synthesize monitor=_monitor;
- (void).cxx_destruct;
- (void)notifyObservers;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)stopMonitoring;
- (void)startMonitoring;
- (void)dealloc;
- (id)init;

@end


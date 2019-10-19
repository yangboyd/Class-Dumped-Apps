//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, NSHashTable;
@protocol OS_dispatch_queue;

@interface YTClientBindingControllerCoordinator : NSObject
{
    _Bool _enablePrivateQueue;
    NSObject<OS_dispatch_queue> *_queue;
    GIMMe *_gimme;
    struct NSHashTable *_observers;
    struct NSHashTable *_modelsPendingCleanup;
    unsigned long long _scheduledCleanupCounter;
}

@property(nonatomic) unsigned long long scheduledCleanupCounter; // @synthesize scheduledCleanupCounter=_scheduledCleanupCounter;
@property(retain, nonatomic) NSHashTable *modelsPendingCleanup; // @synthesize modelsPendingCleanup=_modelsPendingCleanup;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)scheduleCleanupOfModel:(id)arg1;
- (void)maybeScheduleBlockOnPrivateQueue:(CDUnknownBlockType)arg1;
- (void)scheduleBlockOnPrivateQueue:(CDUnknownBlockType)arg1;
- (void)notifyObserversOfChangesInModel:(id)arg1;
- (void)removeClientBindingObserver:(id)arg1;
- (void)addClientBindingObserver:(id)arg1;
- (id)init;

@end


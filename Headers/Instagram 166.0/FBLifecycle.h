//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBTimer, NSString;
@protocol OS_dispatch_queue;

@interface FBLifecycle : NSObject
{
    CDStruct_25e6dfa0 _configuration;
    shared_ptr_a1ea4606 _logger;
    NSObject<OS_dispatch_queue> *_samplingQueue;
    FBTimer *_allModesTimer;
    NSObject<OS_dispatch_queue> *_loggingQueue;
    struct vector<StructuredLogger::IosLifecycleLifecycleEventsType, std::__1::allocator<StructuredLogger::IosLifecycleLifecycleEventsType>> _loggingEvents;
    // Error parsing type: {atomic<UIApplicationState>="__a_"{__cxx_atomic_impl<UIApplicationState, std::__1::__cxx_atomic_base_impl<UIApplicationState> >="__a_value"Aq}}, name: _appState
    struct shared_timed_mutex _navigationLock;
    NSString *_navigationModule;
    NSString *_navigationViewController;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_memoryWarningNotification:(id)arg1;
- (void)_memoryPressureNotification:(id)arg1;
- (void)_didEnterBackgroundNotification:(id)arg1;
- (void)_willResignActiveNotification:(id)arg1;
- (void)_didBecomeActiveNotification:(id)arg1;
- (void)_willEnterForegroundNotification:(id)arg1;
- (void)_appStateChangedNotification:(id)arg1;
- (void)notifyOfLoggerChangeWithStructuredLogger:(shared_ptr_a1ea4606 *)arg1;
- (void)notifyOfSessionChangeWithIdentifier:(id)arg1;
- (void)notifyOfNavigationToViewControllerWithClassNamed:(id)arg1 module:(id)arg2;
- (void)_heartbeat;
- (void)dealloc;
- (id)initWithStructuredLogger:(shared_ptr_a1ea4606 *)arg1 configuration:(const CDStruct_25e6dfa0 *)arg2;

@end


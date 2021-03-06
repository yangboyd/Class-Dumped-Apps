//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/FBCLSubscription.h>

@class CLLocation, FBTimer, NSDate, NSError, NSObject;
@protocol OS_dispatch_queue;

@interface FBCLLocationSubscription : FBCLSubscription
{
    NSDate *_creationDate;
    FBTimer *_inaccurateLocationFixTimer;
    FBTimer *_timeoutTimer;
    double _timeout;
    NSError *_lastError;
    CLLocation *_lastLocation;
    CLLocation *_inacccurateLocation;
    CDUnknownBlockType _updateHandler;
    CDUnknownBlockType _errorHandler;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSObject<OS_dispatch_queue> *_internalQueue;
    _Bool _shouldAutoCancel;
    _Bool _allowsBackgroundUpdates;
    double _desiredAccuracy;
    double _desiredFreshness;
}

@property(readonly, nonatomic) _Bool allowsBackgroundUpdates; // @synthesize allowsBackgroundUpdates=_allowsBackgroundUpdates;
@property(readonly, nonatomic) _Bool shouldAutoCancel; // @synthesize shouldAutoCancel=_shouldAutoCancel;
@property(readonly, nonatomic) double desiredFreshness; // @synthesize desiredFreshness=_desiredFreshness;
@property(readonly, nonatomic) double desiredAccuracy; // @synthesize desiredAccuracy=_desiredAccuracy;
- (void).cxx_destruct;
- (void)unsubscribe;
- (void)cancelTimeoutForAutoCancelledRequest;
- (void)scheduleTimeoutForAutoCancelledRequest;
- (void)cancelInaccurateLocationFix;
- (void)scheduleInaccurateLocationFix;
- (void)_invokeBlockWithError:(id)arg1;
- (void)_invokeBlockWithLocation:(id)arg1;
- (void)handleError:(id)arg1;
- (void)handleLocation:(id)arg1;
- (void)dealloc;
- (id)initWithDesiredAccuracy:(double)arg1 desiredFreshness:(double)arg2 autoCancels:(_Bool)arg3 timeout:(double)arg4 allowsBackgroundUpdates:(_Bool)arg5 dispatchQueue:(id)arg6 internalQueue:(id)arg7 onUpdate:(CDUnknownBlockType)arg8 onError:(CDUnknownBlockType)arg9;

@end


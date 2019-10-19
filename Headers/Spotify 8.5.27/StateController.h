//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTStateController-Protocol.h"

@class NSString, SPCore, SPTStartupTracer;
@protocol OS_dispatch_queue;

@interface StateController : NSObject <SPTStateController>
{
    _Bool _isRestoring;
    SPTStartupTracer *_startupTracer;
    SPCore *_core;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)pathForLockFile:(id)arg1;
+ (id)saveStateLockPath;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak SPCore *core; // @synthesize core=_core;
@property(nonatomic) __weak SPTStartupTracer *startupTracer; // @synthesize startupTracer=_startupTracer;
@property(nonatomic) _Bool isRestoring; // @synthesize isRestoring=_isRestoring;
- (void).cxx_destruct;
- (void)clearState;
- (void)clearLockFile:(id)arg1;
- (_Bool)setLockFile:(id)arg1;
- (_Bool)hasLockFile:(id)arg1;
- (_Bool)withLockFile:(id)arg1 do:(CDUnknownBlockType)arg2;
- (void)abortLoading:(id)arg1;
- (void)restoreFailed;
- (void)restoreSucceeded;
- (void)clearInvalidStoredState;
@property(readonly, nonatomic) _Bool hasSavedState;
@property(readonly, nonatomic) _Bool wasTerminatedImproperly;
- (id)initWithCore:(id)arg1 startupTracer:(id)arg2;
- (_Bool)restoreWithRootViewController:(id)arg1;
- (_Bool)restoreStateWithRootViewController:(id)arg1;
- (void)saveStateWithContentViewController:(id)arg1;
- (void)saveStateActualWithContentViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


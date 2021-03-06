//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class IBGCrashCreator, IBGOperation, IBGPLCrashReporter;
@protocol OS_dispatch_queue;

@interface IBGCrashManager : NSObject
{
    _Bool _isTrackingCrashes;
    IBGOperation *_initializationOperation;
    IBGOperation *_handlePendingCrashesOperation;
    IBGOperation *_registerCrashCacheOperation;
    IBGPLCrashReporter *_crashReporter;
    NSObject<OS_dispatch_queue> *_crashManagerQueue;
    IBGCrashCreator *_crashCreator;
}

+ (void)destroy;
+ (id)reactNativeStackTrace;
+ (void)postCrashHandler;
+ (id)getInstance;
@property(retain, nonatomic) IBGCrashCreator *crashCreator; // @synthesize crashCreator=_crashCreator;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *crashManagerQueue; // @synthesize crashManagerQueue=_crashManagerQueue;
@property(nonatomic) _Bool isTrackingCrashes; // @synthesize isTrackingCrashes=_isTrackingCrashes;
@property(retain, nonatomic) IBGPLCrashReporter *crashReporter; // @synthesize crashReporter=_crashReporter;
@property(retain, nonatomic) IBGOperation *registerCrashCacheOperation; // @synthesize registerCrashCacheOperation=_registerCrashCacheOperation;
@property(retain, nonatomic) IBGOperation *handlePendingCrashesOperation; // @synthesize handlePendingCrashesOperation=_handlePendingCrashesOperation;
@property(retain, nonatomic) IBGOperation *initializationOperation; // @synthesize initializationOperation=_initializationOperation;
- (void).cxx_destruct;
- (void)addFeaturesKVO;
- (void)removeFeaturesKVO;
- (id)getCrashReportWithData:(id)arg1;
- (id)formattedCrashData:(id)arg1 shouldExculdeInstabug:(_Bool)arg2;
- (id)exceptionFromError:(id)arg1;
- (void)sendExceptionAsCrash:(id)arg1 withSnapshot:(id)arg2 userInfo:(id)arg3;
- (void)reportCrashWithStackTrace:(id)arg1 handled:(_Bool)arg2;
- (void)reportError:(id)arg1;
- (void)reportException:(id)arg1;
- (void)handlePendingCrashReportIfExists;
- (void)updateCrashReporterStatus;
- (void)initializeCrashReporterIfNeeded;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (_Bool)crashReporterExist;
- (id)init;

@end


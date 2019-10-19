//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSObject<OS_dispatch_semaphore>, NSString, PKPassLibrary, SBFObliterationController;

@interface SBResetManager : NSObject
{
    _Bool _threadRunning;
    NSLock *_lock;
    long long _mode;
    long long _options;
    NSString *_reason;
    NSLock *_progressLock;
    float _progress;
    SBFObliterationController *_obliterationController;
    _Bool _paymentCardsExist;
    PKPassLibrary *_passLibrary;
    NSObject<OS_dispatch_semaphore> *_resetThreadSemaphore;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_resetFinished;
- (void)_postResetEnded;
- (void)_resetThread;
- (void)_performPaymentCardDeletionWithCompletion:(CDUnknownBlockType)arg1;
- (void)_beginReset:(id)arg1;
- (void)beginReset;
- (float)progress;
- (void)_setProgress:(float)arg1;
- (void)prepareToResetInMode:(int)arg1;
- (void)setReason:(id)arg1;
- (void)setModeLegacy:(int)arg1;
- (void)setOptions:(long long)arg1;
- (void)setModeNew:(long long)arg1;
- (void)dealloc;
- (id)init;

@end


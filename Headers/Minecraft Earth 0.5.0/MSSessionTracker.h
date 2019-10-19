//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MSChannelDelegate.h"

@class MSSessionContext, NSDate, NSString;

@interface MSSessionTracker : NSObject <MSChannelDelegate>
{
    _Bool _started;
    id <MSSessionTrackerDelegate> _delegate;
    double _sessionTimeout;
    NSDate *_lastCreatedLogTime;
    NSDate *_lastEnteredForegroundTime;
    NSDate *_lastEnteredBackgroundTime;
    MSSessionContext *_context;
}

@property(nonatomic, getter=isStarted) _Bool started; // @synthesize started=_started;
@property(retain, nonatomic) MSSessionContext *context; // @synthesize context=_context;
@property(retain, nonatomic) NSDate *lastEnteredBackgroundTime; // @synthesize lastEnteredBackgroundTime=_lastEnteredBackgroundTime;
@property(retain, nonatomic) NSDate *lastEnteredForegroundTime; // @synthesize lastEnteredForegroundTime=_lastEnteredForegroundTime;
@property(retain, nonatomic) NSDate *lastCreatedLogTime; // @synthesize lastCreatedLogTime=_lastCreatedLogTime;
@property(nonatomic) double sessionTimeout; // @synthesize sessionTimeout=_sessionTimeout;
@property(retain, nonatomic) id <MSSessionTrackerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)channel:(id)arg1 prepareLog:(id)arg2;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (_Bool)hasSessionTimedOut;
- (void)dealloc;
- (void)stop;
- (void)start;
- (void)renewSessionId;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


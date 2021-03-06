//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AMIMonitorEventObserverKey-Protocol.h"

@class AMIMonitorEventTrigger, AMIMonitorEventTriggerState, NSString;

@interface AMIMonitorObserverRecord : NSObject <AMIMonitorEventObserverKey>
{
    _Bool _active;
    AMIMonitorEventTrigger *_trigger;
    CDUnknownBlockType _observer;
    AMIMonitorEventTriggerState *_currentState;
}

@property(retain, nonatomic) AMIMonitorEventTriggerState *currentState; // @synthesize currentState=_currentState;
@property(copy, nonatomic) CDUnknownBlockType observer; // @synthesize observer=_observer;
@property(retain, nonatomic) AMIMonitorEventTrigger *trigger; // @synthesize trigger=_trigger;
@property(nonatomic) _Bool active; // @synthesize active=_active;
- (void).cxx_destruct;
- (void)processEvent:(id)arg1;
- (void)processEvents:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


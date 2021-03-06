//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JBTLoggingCounterGroup_Factory-Protocol.h"

@class NSString, XPTLoggingManager;
@protocol ComGoogleCommonTimeClock, XPTEventLogger, XPTScheduledExecutor;

@interface JBTLoggingFlushingDefaultCounterGroup_Factory : NSObject <JBTLoggingCounterGroup_Factory>
{
    id <ComGoogleCommonTimeClock> clock_;
    id <XPTScheduledExecutor> executor_;
    id <XPTEventLogger> eventLogger_;
    XPTLoggingManager *loggingManager_;
}

- (void)dealloc;
- (id)create;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


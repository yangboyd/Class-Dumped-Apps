//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTGabitoTimeReporterDelegate-Protocol.h"

@protocol SPTEventSender;

@interface SPTPerformanceMetricsEventSenderTransport : NSObject <SPTGabitoTimeReporterDelegate>
{
    _Bool _enabled;
    id <SPTEventSender> _eventSender;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTEventSender> eventSender; // @synthesize eventSender=_eventSender;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void)logNonAuthenticatedEventWithName:(id)arg1 data:(id)arg2;
- (void)logEventWithName:(id)arg1 data:(id)arg2;
- (id)initWithEventSender:(id)arg1;

@end


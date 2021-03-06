//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MSAL/MSIDHttpRequestTelemetryHandling-Protocol.h>

@class MSIDTelemetry, NSString;

@interface MSIDHttpRequestTelemetry : NSObject <MSIDHttpRequestTelemetryHandling>
{
    MSIDTelemetry *_telemetry;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MSIDTelemetry *telemetry; // @synthesize telemetry=_telemetry;
- (void)responseReceivedEventWithContext:(id)arg1 urlRequest:(id)arg2 httpResponse:(id)arg3 data:(id)arg4 error:(id)arg5;
- (void)sendRequestEventWithId:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WJServiceEndpoint.h"

@class WJBLEService, WJInternalSetupAttemptMetrics;

@interface WJBLEServiceEndpoint : WJServiceEndpoint
{
    WJBLEService *_service;
    WJInternalSetupAttemptMetrics *_setupMetrics;
}

@property(retain) WJInternalSetupAttemptMetrics *setupMetrics; // @synthesize setupMetrics=_setupMetrics;
@property(readonly, nonatomic) __weak WJBLEService *service; // @synthesize service=_service;
- (void).cxx_destruct;
- (id)serviceClient;
- (id)initWithService:(id)arg1 setupAttemptMetrics:(id)arg2;
- (id)initWithService:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@protocol ComGoogleAppsBigtopSyncClientImplCommonSapiCallback, JBTCallback, JBTSnoozeConfig, XPTXFutures_AsyncTransform2;

@protocol ComGoogleAppsBigtopSyncClientImplSnoozeApiSnoozeCommandResultFactory <JavaObject>
- (id <ComGoogleAppsBigtopSyncClientImplCommonSapiCallback>)wrapCallbackWithJBTSnoozeConfig:(id <JBTSnoozeConfig>)arg1 withJBTCallback:(id <JBTCallback>)arg2;
- (id <XPTXFutures_AsyncTransform2>)wrapCommandSuccess;
@end


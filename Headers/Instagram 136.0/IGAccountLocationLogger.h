//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGUserSession, NSString;

@interface IGAccountLocationLogger : NSObject
{
    IGUserSession *_userSession;
    NSString *_entrypointString;
}

- (void).cxx_destruct;
- (void)logLocationServicesAlreadyEnabled;
- (void)logDidEnableLocationServices;
- (void)logLowConfidenceQPDidEnroll;
- (void)logDidCompleteExemptFlowWithReason:(unsigned long long)arg1;
- (void)logDidReachExemptReason;
- (void)logDidBeginExemptFlow;
- (void)logDidShareLocation;
- (void)logHighConfidenceQPDidEnrollLocationHidden;
- (void)logHighConfidenceQPDidEnrollLocationShared;
- (void)logDidTapClose;
- (id)initWithUserSession:(id)arg1 entrypoint:(unsigned long long)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DYNClearcutEventDataLoggingService-Protocol.h"
#import "DYNClearcutJavaProtoToObjcService-Protocol.h"

@class CCTClearcutLogger, DYNClearcutEventDataLoggingServiceImplOptions, NSString, PHTPhenotypeExperimentTokens;
@protocol DYNClearcutEventDataLoggingServiceImplDeps, GIPAccountID, OS_dispatch_queue;

@interface DYNClearcutEventDataLoggingServiceImpl : NSObject <DYNClearcutEventDataLoggingService, DYNClearcutJavaProtoToObjcService>
{
    id <GIPAccountID> _accountID;
    id <DYNClearcutEventDataLoggingServiceImplDeps> _deps;
    DYNClearcutEventDataLoggingServiceImplOptions *_options;
    CCTClearcutLogger *_clearcutLogger;
    PHTPhenotypeExperimentTokens *_experimentTokens;
    NSObject<OS_dispatch_queue> *_loggingQueue;
}

- (void).cxx_destruct;
- (int)hubConfigurationEnum;
- (int)buildTypeEnum;
- (int)eventOriginEnum;
- (id)getHubConfiguration;
- (id)getConnectivity;
- (id)getBuildType;
- (void)onLoggingQueueLogEventWithCode:(int)arg1 eventLog:(id)arg2 logEvent:(id)arg3;
- (void)logEventWithDYNProtoDynamiteEventLog:(id)arg1 withInt:(int)arg2;
- (id)getEventOrigin;
- (id)serviceForSharedComponent;
- (id)initWithAccountID:(id)arg1 deps:(id)arg2 options:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


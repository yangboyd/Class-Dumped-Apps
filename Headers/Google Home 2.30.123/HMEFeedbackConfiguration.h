//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMEFeedbackConfigurationBuilding-Protocol.h"
#import "SimultaneousAsyncOperationExecutorDelegate-Protocol.h"

@class NSArray, NSString, SimultaneousAsyncOperationExecutor, UIImage;
@protocol GCAConfigurationFlags, HMELogsModule, SSOService;

@interface HMEFeedbackConfiguration : NSObject <SimultaneousAsyncOperationExecutorDelegate, HMEFeedbackConfigurationBuilding>
{
    id <SSOService> _SSOService;
    UIImage *_screenshot;
    long long _category;
    NSArray *_devices;
    id <HMELogsModule> _logsModule;
    id <GCAConfigurationFlags> _flags;
    SimultaneousAsyncOperationExecutor *_deviceLogReportExecutor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SimultaneousAsyncOperationExecutor *deviceLogReportExecutor; // @synthesize deviceLogReportExecutor=_deviceLogReportExecutor;
@property(readonly, nonatomic) id <GCAConfigurationFlags> flags; // @synthesize flags=_flags;
@property(readonly, nonatomic) id <HMELogsModule> logsModule; // @synthesize logsModule=_logsModule;
@property(readonly, nonatomic) NSArray *devices; // @synthesize devices=_devices;
@property(readonly, nonatomic) long long category; // @synthesize category=_category;
@property(readonly, nonatomic) UIImage *screenshot; // @synthesize screenshot=_screenshot;
@property(readonly, nonatomic) id <SSOService> SSOService; // @synthesize SSOService=_SSOService;
- (void)operationExecutor:(id)arg1 didFinishWithErrors:(id)arg2;
- (id)stringForCategory:(long long)arg1;
- (id)buildLogReportRequestsForDevices:(id)arg1;
- (void)buildConfigWithCompletion:(CDUnknownBlockType)arg1;
- (void)configurationReportDidSucceed:(id)arg1;
- (id)waitingMessage;
- (CDUnknownBlockType)skipHandler;
- (_Bool)isTimeConsumingOperation;
- (id)initWithSSOService:(id)arg1 screenshot:(id)arg2 category:(long long)arg3 logsModule:(id)arg4 devices:(id)arg5 flags:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


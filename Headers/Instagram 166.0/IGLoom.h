//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBLoomBlackBoxTracingDelegate-Protocol.h>

@class IGLoomConfigurationNetworkSource;

@interface IGLoom : NSObject <FBLoomBlackBoxTracingDelegate>
{
    _Bool _started;
    struct shared_ptr<FBLoomOrchestrator> _orchestrator;
    struct shared_ptr<IGLoomUploadNetworkSource> _uploadNetworkSource;
    IGLoomConfigurationNetworkSource *_configNetworkSource;
    struct shared_ptr<FBLoomConfigurationManager> _configurationManager;
}

+ (id)sharedInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_startMobileLabQPLEvent;
- (id)getCurrentCrashResistantTrace;
- (id)blackBoxTracingDidAskToWriteTraceWithTriggerID:(int)arg1;
- (void)processMmappedTraces:(id)arg1 withColdStartReason:(id)arg2;
- (_Bool)isInsideBlackboxTrace;
- (id)getCurrentTraceIDTriggeredByQPL:(unsigned int)arg1;
- (id)getCurrentTraceID;
- (_Bool)isInsideTraceTriggeredByQPL:(unsigned int)arg1;
- (_Bool)isInsideTrace;
- (void)_registerForLoomConfigUpload:(id)arg1;
- (_Bool)hasPermissionToWriteOnDisk;
- (void)_updateUserSession:(id)arg1;
- (void)_didLogInWithNewUserSession:(id)arg1;
- (void)_didLogoutAllUsers;
- (void)updateOnSessionChange:(id)arg1;
- (void)didColdStartWithUserSession:(id)arg1;
- (void)_registerProviders;
- (void)registerController:(shared_ptr_f67b7089)arg1;
- (void)start;

@end


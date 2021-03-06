//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/RCTCxxBridgeDelegate-Protocol.h>
#import <InstagramAppCoreFramework/RCTExceptionsManagerDelegate-Protocol.h>

@class FBReactBridgeStartupLogger, IGUserSession, NSDictionary, NSString, RCTAutoUpdater, RCTBridge;

@interface IGReactModule : NSObject <RCTCxxBridgeDelegate, RCTExceptionsManagerDelegate>
{
    IGUserSession *_userSession;
    RCTBridge *_bridgeReference;
    RCTBridge *_bridge;
    struct mutex _bridgeLock;
    RCTAutoUpdater *_autoupdater;
    FBReactBridgeStartupLogger *_bridgeStartupLogger;
    unsigned long long _bridgeInitializationCount;
    NSDictionary *_reactNativeRoutes;
}

+ (id)navigationOptionsForRoute:(id)arg1 withSession:(id)arg2;
+ (id)sharedReactModuleWithoutUserSession;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_handleFatalError:(id)arg1;
- (void)handleFatalJSExceptionWithMessage:(id)arg1 stack:(id)arg2 exceptionId:(id)arg3;
- (void)handleSoftJSExceptionWithMessage:(id)arg1 stack:(id)arg2 exceptionId:(id)arg3;
- (void)_logErrorToBreakpadWithTitle:(id)arg1 stack:(id)arg2;
- (void)_bridgeDidInitializeModule:(id)arg1;
- (void)_invalidateBridge;
- (void)_didReceiveMemoryWarning;
- (id)_bridgeStartupType;
- (id)_createRootView:(id)arg1 perfLoggerSession:(id)arg2;
- (id)createBridgeIfNecessaryWithPerfLoggerSession:(id)arg1;
- (unique_ptr_0e0e1873)jsExecutorFactoryForBridge:(id)arg1;
- (_Bool)bridge:(id)arg1 didNotFindModule:(id)arg2;
- (id)extraModulesForBridge:(id)arg1;
- (id)sourceURLForBridge:(id)arg1;
- (void)updateReactNativeRoutes:(id)arg1;
- (id)viewControllerFromRoute:(id)arg1 withParams:(id)arg2;
- (id)viewFromConfiguration:(id)arg1;
- (id)viewControllerFromConfiguration:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *reactNativeRoutes; // @synthesize reactNativeRoutes=_reactNativeRoutes;
- (id)bridge;
- (id)initPrivateWithUserSession:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


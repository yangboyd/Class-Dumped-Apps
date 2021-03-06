//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BDLynxBridgeExecutor-Protocol.h"
#import "TTBridgeEngine-Protocol.h"

@class BDLynxBridge, NSString, NSURL, TTBridgeRegister, UIViewController;
@protocol TTBridgeAuthorization;

@interface TTLynxBridgeEngine : NSObject <BDLynxBridgeExecutor, TTBridgeEngine>
{
    UIViewController *_sourceController;
    NSObject *_sourceObject;
    TTBridgeRegister *_bridgeRegister;
    BDLynxBridge *_bridgeCore;
}

+ (id)correctTopViewControllerFor:(id)arg1;
@property(nonatomic) __weak BDLynxBridge *bridgeCore; // @synthesize bridgeCore=_bridgeCore;
@property(retain, nonatomic) TTBridgeRegister *bridgeRegister; // @synthesize bridgeRegister=_bridgeRegister;
@property(nonatomic) __weak NSObject *sourceObject; // @synthesize sourceObject=_sourceObject;
@property(nonatomic) __weak UIViewController *sourceController; // @synthesize sourceController=_sourceController;
- (void).cxx_destruct;
- (void)callbackBridge:(id)arg1 msg:(long long)arg2 params:(id)arg3 resultBlock:(CDUnknownBlockType)arg4;
- (void)callbackBridge:(id)arg1 params:(id)arg2 resultBlock:(CDUnknownBlockType)arg3;
- (void)callbackBridge:(id)arg1 params:(id)arg2;
- (_Bool)executeMethodWithMessage:(id)arg1 onBridge:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)fireEvent:(id)arg1 msg:(long long)arg2 params:(id)arg3 resultBlock:(CDUnknownBlockType)arg4;
- (void)fireEvent:(id)arg1 params:(id)arg2 resultBlock:(CDUnknownBlockType)arg3;
- (void)fireEvent:(id)arg1 msg:(long long)arg2 params:(id)arg3;
- (void)fireEvent:(id)arg1 params:(id)arg2;
- (_Bool)respondsToBridge:(id)arg1;
@property(retain, nonatomic) id <TTBridgeAuthorization> authorization;
- (long long)engineType;
@property(readonly, nonatomic) NSURL *sourceURL;
- (id)lynxView;
- (void)installOnLynxView:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


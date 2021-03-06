//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IESBridgeEngine, IESBridgeEngine_Deprecated, NSMutableDictionary, NSMutableSet, UIView;
@protocol IESBridgeExecutor;

@interface IESJSBridge : NSObject
{
    int _uniqueID;
    UIView<IESBridgeExecutor> *_webView;
    NSMutableSet *_publicCallSet;
    NSMutableSet *_protectedSet;
    NSMutableSet *_privateSet;
    IESBridgeEngine_Deprecated *_deprecatedBridgeEngine;
    NSMutableDictionary *_callbackHandlers;
}

+ (id)currentJSSDKVersion;
@property(nonatomic) int uniqueID; // @synthesize uniqueID=_uniqueID;
@property(retain, nonatomic) NSMutableDictionary *callbackHandlers; // @synthesize callbackHandlers=_callbackHandlers;
@property(retain, nonatomic) IESBridgeEngine_Deprecated *deprecatedBridgeEngine; // @synthesize deprecatedBridgeEngine=_deprecatedBridgeEngine;
@property(retain, nonatomic) NSMutableSet *privateSet; // @synthesize privateSet=_privateSet;
@property(retain, nonatomic) NSMutableSet *protectedSet; // @synthesize protectedSet=_protectedSet;
@property(retain, nonatomic) NSMutableSet *publicCallSet; // @synthesize publicCallSet=_publicCallSet;
@property(nonatomic) __weak UIView<IESBridgeExecutor> *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (_Bool)isAuthorizedForCall:(id)arg1;
- (void)flushMessages;
- (id)getNewUnqiueID;
- (void)processIFrameMessage:(id)arg1;
- (void)invokeJSWithEventID:(id)arg1 parameters:(id)arg2 finishBlock:(CDUnknownBlockType)arg3;
- (void)invokeJSWithCallbackID:(id)arg1 parameters:(id)arg2;
- (void)registerHandlerBlock:(CDUnknownBlockType)arg1 forJSMethod:(id)arg2 authType:(unsigned long long)arg3 methodNamespace:(id)arg4;
- (void)registerHandlerBlock:(CDUnknownBlockType)arg1 forJSMethod:(id)arg2 authType:(unsigned long long)arg3;
@property(readonly, nonatomic) IESBridgeEngine *bridgeEngine;
- (id)initWithWebView:(id)arg1;

@end


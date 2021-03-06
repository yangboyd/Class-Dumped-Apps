//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/FBScriptMessageHandling-Protocol.h>

@class NSString;
@protocol FBBusinessExtensionCallbackHandling;

@interface FBBusinessExtensionGetVersionHandler : NSObject <FBScriptMessageHandling>
{
    id <FBBusinessExtensionCallbackHandling> _callBackHandler;
}

+ (id)supportedMessageNames;
- (void).cxx_destruct;
- (id)_returnParams;
- (_Bool)requireDelegateSetUp;
- (_Bool)supportsCallback;
- (_Bool)requireDomainToBeWhitelisted;
- (_Bool)requireHttps;
- (_Bool)requireAppId;
- (void)handleScriptMessageFromWebView:(id)arg1 messageOrigin:(id)arg2 websiteURL:(id)arg3 messageName:(id)arg4 messageParams:(id)arg5;
- (id)initWithCallbackHandler:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


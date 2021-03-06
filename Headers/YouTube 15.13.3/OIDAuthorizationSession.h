//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/OIDExternalUserAgentSession-Protocol.h>

@class NSString, OIDAuthorizationRequest;
@protocol OIDExternalUserAgent;

@interface OIDAuthorizationSession : NSObject <OIDExternalUserAgentSession>
{
    OIDAuthorizationRequest *_request;
    id <OIDExternalUserAgent> _externalUserAgent;
    CDUnknownBlockType _pendingauthorizationFlowCallback;
}

+ (_Bool)URL:(id)arg1 matchesRedirectionURL:(id)arg2;
- (void).cxx_destruct;
- (void)didFinishWithResponse:(id)arg1 error:(id)arg2;
- (void)failExternalUserAgentFlowWithError:(id)arg1;
- (_Bool)resumeExternalUserAgentFlowWithURL:(id)arg1;
- (_Bool)shouldHandleURL:(id)arg1;
- (void)cancelWithCompletion:(CDUnknownBlockType)arg1;
- (void)cancel;
- (void)presentAuthorizationWithExternalUserAgent:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)initWithRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


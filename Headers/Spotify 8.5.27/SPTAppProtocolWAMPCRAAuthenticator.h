//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAppProtocolAuthenticator-Protocol.h"

@class NSString;
@protocol SPTAppProtocolAuthenticatorDelegate;

@interface SPTAppProtocolWAMPCRAAuthenticator : NSObject <SPTAppProtocolAuthenticator>
{
    id <SPTAppProtocolAuthenticatorDelegate> _delegate;
    NSString *_lastNonce;
    NSString *_lastChallenge;
    NSString *_lastClientID;
    NSString *_lastSharedSecret;
}

@property(copy, nonatomic) NSString *lastSharedSecret; // @synthesize lastSharedSecret=_lastSharedSecret;
@property(copy, nonatomic) NSString *lastClientID; // @synthesize lastClientID=_lastClientID;
@property(copy, nonatomic) NSString *lastChallenge; // @synthesize lastChallenge=_lastChallenge;
@property(copy, nonatomic) NSString *lastNonce; // @synthesize lastNonce=_lastNonce;
@property(nonatomic) __weak id <SPTAppProtocolAuthenticatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleAuthenticateMessage:(id)arg1 forSessionWithID:(unsigned long long)arg2 andReply:(CDUnknownBlockType)arg3;
- (void)handleHelloMessage:(id)arg1 forSessionWithID:(unsigned long long)arg2 andReply:(CDUnknownBlockType)arg3;
@property(readonly, copy, nonatomic) NSString *methodName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


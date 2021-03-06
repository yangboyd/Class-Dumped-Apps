//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaNetSocket.h"

@interface JavaxNetSslSSLSocket : JavaNetSocket
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (id)description;
- (void)setSSLParametersWithJavaxNetSslSSLParameters:(id)arg1;
- (id)getSSLParameters;
- (_Bool)getEnableSessionCreation;
- (void)setEnableSessionCreationWithBoolean:(_Bool)arg1;
- (_Bool)getWantClientAuth;
- (void)setWantClientAuthWithBoolean:(_Bool)arg1;
- (_Bool)getNeedClientAuth;
- (void)setNeedClientAuthWithBoolean:(_Bool)arg1;
- (_Bool)getUseClientMode;
- (void)setUseClientModeWithBoolean:(_Bool)arg1;
- (void)startHandshake;
- (void)removeHandshakeCompletedListenerWithJavaxNetSslHandshakeCompletedListener:(id)arg1;
- (void)addHandshakeCompletedListenerWithJavaxNetSslHandshakeCompletedListener:(id)arg1;
- (id)getHandshakeSession;
- (id)getSession;
- (void)setEnabledProtocolsWithNSStringArray:(id)arg1;
- (id)getEnabledProtocols;
- (id)getSupportedProtocols;
- (void)setEnabledCipherSuitesWithNSStringArray:(id)arg1;
- (id)getEnabledCipherSuites;
- (id)getSupportedCipherSuites;
- (id)initWithJavaNetInetAddress:(id)arg1 withInt:(int)arg2 withJavaNetInetAddress:(id)arg3 withInt:(int)arg4;
- (id)initWithNSString:(id)arg1 withInt:(int)arg2 withJavaNetInetAddress:(id)arg3 withInt:(int)arg4;
- (id)initWithJavaNetInetAddress:(id)arg1 withInt:(int)arg2;
- (id)initWithNSString:(id)arg1 withInt:(int)arg2;
- (id)init;

@end


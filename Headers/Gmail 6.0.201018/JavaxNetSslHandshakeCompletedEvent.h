//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaUtilEventObject.h"

@protocol JavaxNetSslSSLSession;

@interface JavaxNetSslHandshakeCompletedEvent : JavaUtilEventObject
{
    id <JavaxNetSslSSLSession> session_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)getSocket;
- (id)getLocalPrincipal;
- (id)getPeerPrincipal;
- (id)getPeerCertificateChain;
- (id)getPeerCertificates;
- (id)getLocalCertificates;
- (id)getCipherSuite;
- (id)getSession;
- (id)initWithJavaxNetSslSSLSocket:(id)arg1 withJavaxNetSslSSLSession:(id)arg2;

@end


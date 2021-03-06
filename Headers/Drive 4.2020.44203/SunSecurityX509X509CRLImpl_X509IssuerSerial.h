//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaLangComparable-Protocol.h"

@class JavaMathBigInteger, JavaxSecurityAuthX500X500Principal, NSString;

@interface SunSecurityX509X509CRLImpl_X509IssuerSerial : NSObject <JavaLangComparable>
{
    JavaxSecurityAuthX500X500Principal *issuer_;
    JavaMathBigInteger *serial_;
    // Error parsing type: Ai, name: hashcode_
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (int)compareToWithId:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)getSerial;
- (id)getIssuer;
- (id)initWithJavaSecurityCertX509Certificate:(id)arg1;
- (id)initWithJavaxSecurityAuthX500X500Principal:(id)arg1 withJavaMathBigInteger:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end


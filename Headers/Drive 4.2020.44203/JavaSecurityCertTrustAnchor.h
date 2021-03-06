//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IOSByteArray, JavaSecurityCertX509Certificate, JavaxSecurityAuthX500X500Principal, NSString, SunSecurityX509NameConstraintsExtension;
@protocol JavaSecurityPublicKey;

@interface JavaSecurityCertTrustAnchor : NSObject
{
    id <JavaSecurityPublicKey> pubKey_;
    NSString *caName_;
    JavaxSecurityAuthX500X500Principal *caPrincipal_;
    JavaSecurityCertX509Certificate *trustedCert_;
    IOSByteArray *ncBytes_;
    SunSecurityX509NameConstraintsExtension *nc_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)description;
- (id)getNameConstraints;
- (void)setNameConstraintsWithByteArray:(id)arg1;
- (id)getCAPublicKey;
- (id)getCAName;
- (id)getCA;
- (id)getTrustedCert;
- (id)initWithNSString:(id)arg1 withJavaSecurityPublicKey:(id)arg2 withByteArray:(id)arg3;
- (id)initWithJavaxSecurityAuthX500X500Principal:(id)arg1 withJavaSecurityPublicKey:(id)arg2 withByteArray:(id)arg3;
- (id)initWithJavaSecurityCertX509Certificate:(id)arg1 withByteArray:(id)arg2;

@end


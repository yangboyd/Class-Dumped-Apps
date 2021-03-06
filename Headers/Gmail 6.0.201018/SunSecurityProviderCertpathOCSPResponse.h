//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IOSByteArray, JavaxSecurityAuthX500X500Principal, SunSecurityProviderCertpathOCSPResponse_ResponseStatus, SunSecurityX509AlgorithmId, SunSecurityX509KeyIdentifier, SunSecurityX509X509CertImpl;
@protocol JavaUtilList, JavaUtilMap;

@interface SunSecurityProviderCertpathOCSPResponse : NSObject
{
    SunSecurityProviderCertpathOCSPResponse_ResponseStatus *responseStatus_;
    id <JavaUtilMap> singleResponseMap_;
    SunSecurityX509AlgorithmId *sigAlgId_;
    IOSByteArray *signature_;
    IOSByteArray *tbsResponseData_;
    IOSByteArray *responseNonce_;
    id <JavaUtilList> certs_;
    SunSecurityX509X509CertImpl *signerCert_;
    JavaxSecurityAuthX500X500Principal *responderName_;
    SunSecurityX509KeyIdentifier *responderKeyId_;
}

+ (void)initialize;
+ (const struct J2ObjcClassInfo *)__metadata;
+ (int)initializeClockSkew;
- (void)dealloc;
- (id)getSignerCertificate;
- (id)getSingleResponseWithSunSecurityProviderCertpathCertId:(id)arg1;
- (_Bool)verifySignatureWithJavaSecurityCertX509Certificate:(id)arg1;
- (id)getResponseStatus;
- (void)verifyWithJavaUtilList:(id)arg1 withJavaSecurityCertX509Certificate:(id)arg2 withJavaSecurityCertX509Certificate:(id)arg3 withJavaUtilDate:(id)arg4 withByteArray:(id)arg5;
- (id)initWithByteArray:(id)arg1;

@end


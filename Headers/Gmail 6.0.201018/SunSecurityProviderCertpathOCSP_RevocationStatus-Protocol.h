//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@class JavaSecurityCertCRLReason, JavaUtilDate, SunSecurityProviderCertpathOCSP_RevocationStatus_CertStatus;
@protocol JavaUtilMap;

@protocol SunSecurityProviderCertpathOCSP_RevocationStatus <JavaObject>
- (id <JavaUtilMap>)getSingleExtensions;
- (JavaSecurityCertCRLReason *)getRevocationReason;
- (JavaUtilDate *)getRevocationTime;
- (SunSecurityProviderCertpathOCSP_RevocationStatus_CertStatus *)getCertStatus;
@end


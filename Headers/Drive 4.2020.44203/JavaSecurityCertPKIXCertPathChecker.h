//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaSecurityCertCertPathChecker-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface JavaSecurityCertPKIXCertPathChecker : NSObject <JavaSecurityCertCertPathChecker, NSCopying>
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)java_clone;
- (void)checkWithJavaSecurityCertCertificate:(id)arg1;
- (void)checkWithJavaSecurityCertCertificate:(id)arg1 withJavaUtilCollection:(id)arg2;
- (id)getSupportedExtensions;
- (_Bool)isForwardCheckingSupported;
- (void)init__WithBoolean:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


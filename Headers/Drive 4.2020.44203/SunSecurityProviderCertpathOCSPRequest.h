//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IOSByteArray;
@protocol JavaUtilList;

@interface SunSecurityProviderCertpathOCSPRequest : NSObject
{
    id <JavaUtilList> certIds_;
    id <JavaUtilList> extensions_;
    IOSByteArray *nonce_;
}

+ (void)initialize;
+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)getNonce;
- (id)getCertIds;
- (id)encodeBytes;
- (id)initPackagePrivateWithJavaUtilList:(id)arg1 withJavaUtilList:(id)arg2;
- (id)initPackagePrivateWithJavaUtilList:(id)arg1;
- (id)initPackagePrivateWithSunSecurityProviderCertpathCertId:(id)arg1;

@end


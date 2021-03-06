//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SunSecurityX509Extension.h"

#import "NSCopying-Protocol.h"
#import "SunSecurityX509CertAttrSet-Protocol.h"

@class NSString, SunSecurityX509GeneralSubtrees;

@interface SunSecurityX509NameConstraintsExtension : SunSecurityX509Extension <SunSecurityX509CertAttrSet, NSCopying>
{
    SunSecurityX509GeneralSubtrees *permitted_;
    SunSecurityX509GeneralSubtrees *excluded_;
    _Bool hasMin_;
    _Bool hasMax_;
    _Bool minMaxValid_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)java_clone;
- (_Bool)verifyRFC822SpecialCaseWithSunSecurityX509X500Name:(id)arg1;
- (_Bool)verifyWithSunSecurityX509GeneralNameInterface:(id)arg1;
- (_Bool)verifyWithJavaSecurityCertX509Certificate:(id)arg1;
- (void)mergeWithSunSecurityX509NameConstraintsExtension:(id)arg1;
- (id)getName;
- (id)getElements;
- (void)delete__WithNSString:(id)arg1;
- (id)getWithNSString:(id)arg1;
- (void)setWithNSString:(id)arg1 withId:(id)arg2;
- (void)encodeWithJavaIoOutputStream:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithJavaLangBoolean:(id)arg1 withId:(id)arg2;
- (id)initWithSunSecurityX509GeneralSubtrees:(id)arg1 withSunSecurityX509GeneralSubtrees:(id)arg2;
- (void)encodeThis;
- (void)calcMinMax;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


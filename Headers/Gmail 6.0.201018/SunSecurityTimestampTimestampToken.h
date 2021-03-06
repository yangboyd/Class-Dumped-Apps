//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IOSByteArray, JavaMathBigInteger, JavaUtilDate, SunSecurityUtilObjectIdentifier, SunSecurityX509AlgorithmId;

@interface SunSecurityTimestampTimestampToken : NSObject
{
    int version__;
    SunSecurityUtilObjectIdentifier *policy_;
    JavaMathBigInteger *serialNumber_;
    SunSecurityX509AlgorithmId *hashAlgorithm_;
    IOSByteArray *hashedMessage_;
    JavaUtilDate *genTime_;
    JavaMathBigInteger *nonce_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)parseWithByteArray:(id)arg1;
- (id)getSerialNumber;
- (id)getPolicyID;
- (id)getNonce;
- (id)getHashedMessage;
- (id)getHashAlgorithm;
- (id)getDate;
- (id)initWithByteArray:(id)arg1;

@end


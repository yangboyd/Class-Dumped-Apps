//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString, SCEllipticCurveCrypto;

@interface SCFideliusTempDeviceUserInfo : NSObject <NSCopying, NSCoding>
{
    NSString *_iwek;
    SCEllipticCurveCrypto *_beta;
    NSString *_hashedBeta;
}

@property(retain, nonatomic) NSString *hashedBeta; // @synthesize hashedBeta=_hashedBeta;
@property(retain, nonatomic) SCEllipticCurveCrypto *beta; // @synthesize beta=_beta;
@property(retain, nonatomic) NSString *iwek; // @synthesize iwek=_iwek;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIwek:(id)arg1 beta:(id)arg2;

@end


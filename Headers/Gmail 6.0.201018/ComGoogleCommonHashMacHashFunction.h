//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleCommonHashAbstractHashFunction.h"

@class JavaxCryptoMac, NSString;
@protocol JavaSecurityKey;

@interface ComGoogleCommonHashMacHashFunction : ComGoogleCommonHashAbstractHashFunction
{
    JavaxCryptoMac *prototype_;
    id <JavaSecurityKey> key_;
    NSString *toString_;
    int bits_;
    _Bool supportsClone_;
}

- (void)dealloc;
- (id)description;
- (id)newHasher;
- (int)bits;

@end


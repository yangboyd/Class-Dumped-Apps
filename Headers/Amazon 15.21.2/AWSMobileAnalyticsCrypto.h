//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AWSMobileAnalyticsCrypto : NSObject
{
    NSString *_secretKey;
}

+ (id)AES128EncryptDecrypt:(id)arg1 withOperation:(unsigned int)arg2 withKey:(id)arg3;
+ (id)cryptoWithSecretKey:(id)arg1 withOptSecretKey:(id)arg2 withPrefix:(id)arg3;
+ (id)cryptoWithSecretKey:(id)arg1;
@property(retain, nonatomic) NSString *secretKey; // @synthesize secretKey=_secretKey;
- (void).cxx_destruct;
- (id)decryptData:(id)arg1;
- (id)encryptData:(id)arg1;
- (id)initWithSecretKey:(id)arg1;

@end


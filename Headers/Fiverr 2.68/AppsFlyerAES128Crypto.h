//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface AppsFlyerAES128Crypto : NSObject
{
    NSString *_password;
    NSData *_salt;
    NSData *_iv;
}

+ (id)AESKeyForPassword:(id)arg1 salt:(id)arg2;
+ (id)randomDataOfLength:(unsigned long long)arg1;
@property(readonly, nonatomic) NSData *iv; // @synthesize iv=_iv;
@property(readonly, nonatomic) NSData *salt; // @synthesize salt=_salt;
@property(readonly, nonatomic) NSString *password; // @synthesize password=_password;
- (void).cxx_destruct;
- (id)encrypt:(id)arg1;
- (id)initWithPassword:(id)arg1;

@end


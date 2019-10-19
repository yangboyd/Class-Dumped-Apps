//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, WrappedSenderKey;

@interface GCKMessageEncryptor : NSObject
{
    WrappedSenderKey *_wrappedSenderKey;
    NSData *_aesKey;
    NSData *_hmacKey;
}

+ (id)generateSenderKeyWithError:(id *)arg1;
@property(copy, nonatomic) NSData *hmacKey; // @synthesize hmacKey=_hmacKey;
@property(copy, nonatomic) NSData *aesKey; // @synthesize aesKey=_aesKey;
- (void).cxx_destruct;
- (id)sealData:(id)arg1 wthNonce:(id)arg2 error:(id *)arg3;
- (id)encryptBroadcastMessage:(id)arg1 error:(id *)arg2;
- (id)initWithSenderKey:(id)arg1 wrappedSenderKey:(id)arg2;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Core/NSCopying-Protocol.h>

@class NSData;

@interface WANoiseStreamCipher : NSObject <NSCopying>
{
    NSData *_readKey;
    unsigned int _readNonce;
    NSData *_writeKey;
    unsigned int _writeNonce;
}

+ (void)iv:(char *)arg1 fromNonce:(unsigned long long)arg2 length:(unsigned int)arg3;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)decryptCiphertext:(id)arg1 error:(out id *)arg2;
- (id)encryptPlaintext:(id)arg1 outDataGap:(unsigned long long)arg2 error:(out id *)arg3;
- (id)encryptPlaintext:(id)arg1 error:(out id *)arg2;
- (id)initWithReadKey:(id)arg1 readNonce:(unsigned int)arg2 writeKey:(id)arg3 writeNonce:(unsigned int)arg4;
- (id)initWithReadKey:(id)arg1 writeKey:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface MSIDBrokerCryptoProvider : NSObject
{
    NSData *_encryptionKey;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *encryptionKey; // @synthesize encryptionKey=_encryptionKey;
- (id)decryptData:(id)arg1 protocolVersion:(unsigned long long)arg2;
- (id)decryptBrokerResponse:(id)arg1 correlationId:(id)arg2 error:(id *)arg3;
- (id)initWithEncryptionKey:(id)arg1;

@end


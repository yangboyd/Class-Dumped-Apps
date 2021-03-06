//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WAEC25519KeyPair, WAEC25519PublicKey, WAHandshakeCipher, WANoiseStreamCipher, WAPBHandshakeMessage_ServerHello;

@interface WANoiseFallbackHandshake : NSObject
{
    WAHandshakeCipher *_cipher;
    WAEC25519KeyPair *_clientEphemeralKeyPair;
    WAEC25519KeyPair *_clientStaticKeyPair;
    WAEC25519PublicKey *_serverEphemeralPublicKey;
    WAPBHandshakeMessage_ServerHello *_serverHello;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) WANoiseStreamCipher *streamCipher;
- (_Bool)encryptClientFinishLoginPayload:(id)arg1 ciphertextOutput:(out id *)arg2 error:(out id *)arg3;
- (_Bool)retrieveCertificate:(out id *)arg1 newServerStaticPublicKey:(out id *)arg2 error:(out id *)arg3;
- (id)initWithServerHello:(id)arg1 clientEphemeralKeyPair:(id)arg2 clientStaticKeyPair:(id)arg3 version:(id)arg4;

@end


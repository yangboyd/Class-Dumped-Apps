//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PSPDFKit/PSPDFFileDataProviding-Protocol.h>

@class NSData, NSProgress, NSString, NSURL, PSPDFAESCryptoFactory, PSPDFAESDecryptor, PSPDFSecurityScopedURL;

@interface PSPDFAESCryptoDataProvider : NSObject <PSPDFFileDataProviding>
{
    NSString *_UID;
    NSData *_signature;
    PSPDFAESDecryptor *_decryptor;
    PSPDFAESCryptoFactory *_cryptoFactory;
    PSPDFSecurityScopedURL *_securityScopedURL;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) PSPDFSecurityScopedURL *securityScopedURL; // @synthesize securityScopedURL=_securityScopedURL;
@property(retain, nonatomic) PSPDFAESCryptoFactory *cryptoFactory; // @synthesize cryptoFactory=_cryptoFactory;
@property(retain, nonatomic) PSPDFAESDecryptor *decryptor; // @synthesize decryptor=_decryptor;
@property(retain, nonatomic) NSData *signature; // @synthesize signature=_signature;
- (void).cxx_destruct;
- (_Bool)deleteDataWithError:(id *)arg1;
- (_Bool)replaceWithDataSink:(id)arg1 error:(id *)arg2;
- (id)createDataSinkWithOptions:(unsigned long long)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSData *data;
- (id)readDataWithSize:(unsigned long long)arg1 atOffset:(unsigned long long)arg2;
@property(readonly, nonatomic) NSString *UID; // @synthesize UID=_UID;
@property(readonly, nonatomic) _Bool useDiskCache;
@property(readonly, nonatomic) unsigned long long size;
@property(readonly, nonatomic) unsigned long long additionalOperationsSupported;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) NSURL *fileURL;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToAESCryptoDataProvider:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithURL:(id)arg1 binaryKeyProvider:(CDUnknownBlockType)arg2;
- (id)initWithURL:(id)arg1 passphraseProvider:(CDUnknownBlockType)arg2 PRF:(unsigned int)arg3 rounds:(unsigned int)arg4;
- (id)initWithLegacyFileFormatURL:(id)arg1 passphraseProvider:(CDUnknownBlockType)arg2;
- (id)initWithURL:(id)arg1 passphraseProvider:(CDUnknownBlockType)arg2;
- (id)initWithURL:(id)arg1 passphraseDataProvider:(CDUnknownBlockType)arg2 salt:(id)arg3 rounds:(unsigned long long)arg4;
- (id)initWithURL:(id)arg1 passphraseProvider:(CDUnknownBlockType)arg2 salt:(id)arg3 rounds:(unsigned long long)arg4;

// Remaining properties
@property(readonly, nonatomic) _Bool canWrite;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) NSProgress *progress;
@property(readonly) Class superclass;

@end


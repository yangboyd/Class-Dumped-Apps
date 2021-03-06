//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface AWSIoTCSR : NSObject
{
    NSString *_commonName;
    NSString *_countryName;
    NSString *_organizationName;
    NSString *_organizationalUnitName;
    NSData *_publicKeyBits;
}

- (void).cxx_destruct;
- (int)derEncodingGetSizeFrom:(id)arg1 at:(int *)arg2;
- (id)getPublicKeyMod;
- (id)getPublicKeyExp;
- (id)createPublicKeyDataForCSR;
- (void)appendLength:(long long)arg1 intoData:(id)arg2;
- (void)addByte:(unsigned char)arg1 intoData:(id)arg2;
- (void)appendInfo:(id)arg1 forType:(unsigned char [5])arg2 intoData:(id)arg3;
- (id)createCertInformation;
- (void)addVersion:(id)arg1;
- (id)createCertificateRequestData;
- (id)generateCSRForCertificate:(id)arg1;
- (id)initWithCommonName:(id)arg1 countryName:(id)arg2 organizationName:(id)arg3 organizationalUnitName:(id)arg4;
- (id)init;

@end


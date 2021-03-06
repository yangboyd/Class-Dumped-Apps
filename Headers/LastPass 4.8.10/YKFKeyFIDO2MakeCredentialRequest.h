//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YKFKeyFIDO2Request.h"

@class NSArray, NSData, NSDictionary, YKFFIDO2PublicKeyCredentialRpEntity, YKFFIDO2PublicKeyCredentialUserEntity;

@interface YKFKeyFIDO2MakeCredentialRequest : YKFKeyFIDO2Request
{
    NSData *_clientDataHash;
    YKFFIDO2PublicKeyCredentialRpEntity *_rp;
    YKFFIDO2PublicKeyCredentialUserEntity *_user;
    NSArray *_pubKeyCredParams;
    NSArray *_excludeList;
    NSDictionary *_options;
    NSData *_pinAuth;
    unsigned long long _pinProtocol;
}

@property(nonatomic) unsigned long long pinProtocol; // @synthesize pinProtocol=_pinProtocol;
@property(retain, nonatomic) NSData *pinAuth; // @synthesize pinAuth=_pinAuth;
@property(retain, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(retain, nonatomic) NSArray *excludeList; // @synthesize excludeList=_excludeList;
@property(retain, nonatomic) NSArray *pubKeyCredParams; // @synthesize pubKeyCredParams=_pubKeyCredParams;
@property(retain, nonatomic) YKFFIDO2PublicKeyCredentialUserEntity *user; // @synthesize user=_user;
@property(retain, nonatomic) YKFFIDO2PublicKeyCredentialRpEntity *rp; // @synthesize rp=_rp;
@property(retain, nonatomic) NSData *clientDataHash; // @synthesize clientDataHash=_clientDataHash;
- (void).cxx_destruct;

@end


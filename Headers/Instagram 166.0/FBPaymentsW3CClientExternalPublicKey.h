//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FBPaymentsW3CClientExternalPublicKey : NSObject
{
    struct __SecKey *_publicKey;
    NSString *_base64x509Der;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *base64x509Der; // @synthesize base64x509Der=_base64x509Der;
@property(readonly, nonatomic) struct __SecKey *publicKey; // @synthesize publicKey=_publicKey;
- (void)dealloc;
- (id)initWithBase64X509Der:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSAAccountManager, NSString;

@interface MSAUserAccount : NSObject
{
    MSAAccountManager *_accountManager;
    NSString *_puid;
    _Bool _hasPassword;
    NSString *_secretKey;
    _Bool _isRegisteredForNgc;
    NSString *_cid;
    NSString *_username;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *username; // @synthesize username=_username;
@property(readonly, copy) NSString *cid; // @synthesize cid=_cid;
- (unsigned long long)hash;
- (_Bool)isEqualToMSAUserAccount:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)getProofOfPossessionTokens:(out id *)arg1 error:(out id *)arg2;
- (void)getUserKeyForKeyPurpose:(id)arg1 keyId:(id)arg2 loginProofToken:(id)arg3 failureDelegate:(id)arg4 successBlock:(CDUnknownBlockType)arg5;
- (void)getTicketWithScope:(id)arg1 failureDelegate:(id)arg2 successBlock:(CDUnknownBlockType)arg3;
- (_Bool)isRegisteredForNgc;
- (id)secretKey;
- (_Bool)hasPassword;
- (id)puid;
- (id)initWithCid:(id)arg1 puid:(id)arg2 username:(id)arg3 hasPassword:(_Bool)arg4 secretKey:(id)arg5 isRegisteredForNgc:(_Bool)arg6 accountManager:(id)arg7;
- (id)initWithCid:(id)arg1 puid:(id)arg2 username:(id)arg3 hasPassword:(_Bool)arg4 accountManager:(id)arg5;
- (id)init;

@end


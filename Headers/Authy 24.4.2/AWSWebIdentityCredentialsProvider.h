//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AWSCore/AWSCredentialsProvider-Protocol.h>

@class AWSSTS, AWSUICKeyChainStore, NSDate, NSString;

@interface AWSWebIdentityCredentialsProvider : NSObject <AWSCredentialsProvider>
{
    NSString *_accessKey;
    NSString *_secretKey;
    NSString *_sessionKey;
    NSDate *_expiration;
    NSString *_webIdentityToken;
    NSString *_roleArn;
    NSString *_roleSessionName;
    NSString *_providerId;
    AWSSTS *_sts;
    AWSUICKeyChainStore *_keychain;
}

+ (id)credentialsWithRegionType:(long long)arg1 providerId:(id)arg2 roleArn:(id)arg3 roleSessionName:(id)arg4 webIdentityToken:(id)arg5;
- (void).cxx_destruct;
@property(retain, nonatomic) AWSUICKeyChainStore *keychain; // @synthesize keychain=_keychain;
@property(retain, nonatomic) AWSSTS *sts; // @synthesize sts=_sts;
@property(retain, nonatomic) NSString *providerId; // @synthesize providerId=_providerId;
@property(retain, nonatomic) NSString *roleSessionName; // @synthesize roleSessionName=_roleSessionName;
@property(retain, nonatomic) NSString *roleArn; // @synthesize roleArn=_roleArn;
@property(retain, nonatomic) NSString *webIdentityToken; // @synthesize webIdentityToken=_webIdentityToken;
@property(retain, nonatomic) NSDate *expiration; // @synthesize expiration=_expiration;
@property(retain, nonatomic) NSString *sessionKey; // @synthesize sessionKey=_sessionKey;
@property(retain, nonatomic) NSString *secretKey; // @synthesize secretKey=_secretKey;
@property(retain, nonatomic) NSString *accessKey; // @synthesize accessKey=_accessKey;
- (id)refresh;
- (id)initWithRegionType:(long long)arg1 providerId:(id)arg2 roleArn:(id)arg3 roleSessionName:(id)arg4 webIdentityToken:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


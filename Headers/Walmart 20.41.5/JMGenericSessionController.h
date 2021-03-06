//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURLSession;

@interface JMGenericSessionController : NSObject
{
    NSURLSession *_session;
    NSString *_baseURL;
}

@property(readonly, nonatomic) NSString *baseURL; // @synthesize baseURL=_baseURL;
@property(readonly, nonatomic) NSURLSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (id)stripPublicKeyHeader:(id)arg1;
- (struct __SecKey *)decodePublicKey:(id)arg1 withKeychainTag:(id)arg2;
- (_Bool)validateTrust:(struct __SecTrust *)arg1 publicKey:(id)arg2;
- (_Bool)validateSession:(id)arg1 withChallenge:(id)arg2;
- (void)setSSLErrorType:(unsigned long long)arg1;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)keychainTag;
- (id)publicKeys;
- (_Bool)isProductionEndpoint;
- (_Bool)hasOpenSession;
- (void)unsetForced:(_Bool)arg1;
- (void)unset;
- (id)endpointHostname;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end


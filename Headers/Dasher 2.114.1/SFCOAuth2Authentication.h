//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ServiceCore/SFCAuthentication.h>

@class NSString;

@interface SFCOAuth2Authentication : SFCAuthentication
{
    NSString *_clientId;
}

@property(readonly, copy, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
- (void).cxx_destruct;
- (id)credentialWithData:(id)arg1 response:(id)arg2 error:(id *)arg3;
- (id)jsonDataWithData:(id)arg1 error:(id *)arg2;
- (void)beginAuthenticationWithCompletion:(CDUnknownBlockType)arg1;
- (void)authenticateWithCompletion:(CDUnknownBlockType)arg1;
- (id)authenticationDictionary;
- (id)responseType;
- (id)grantType;
- (id)initWithEndpoint:(id)arg1 credentialClass:(Class)arg2 serviceType:(id)arg3 clientId:(id)arg4;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MSAL/MSIDBrokerNativeAppOperationResponse.h>

@class MSIDAuthority, MSIDTokenResponse;

@interface MSIDBrokerOperationTokenResponse : MSIDBrokerNativeAppOperationResponse
{
    MSIDTokenResponse *_tokenResponse;
    MSIDAuthority *_authority;
    MSIDTokenResponse *_additionalTokenResponse;
}

+ (id)responseType;
+ (void)load;
- (void).cxx_destruct;
@property(retain, nonatomic) MSIDTokenResponse *additionalTokenResponse; // @synthesize additionalTokenResponse=_additionalTokenResponse;
@property(retain, nonatomic) MSIDAuthority *authority; // @synthesize authority=_authority;
@property(retain, nonatomic) MSIDTokenResponse *tokenResponse; // @synthesize tokenResponse=_tokenResponse;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)arg1 error:(id *)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSAAbstractTokenRequest.h"

@class MSATransferTokenResponse, NSString;

@interface MSATransferTokenRequest : MSAAbstractTokenRequest
{
    NSString *_transferToken;
    NSString *_clientAppID;
    MSATransferTokenResponse *_response;
}

- (void).cxx_destruct;
@property(readonly) MSATransferTokenResponse *response; // @synthesize response=_response;
@property(retain) NSString *clientAppID; // @synthesize clientAppID=_clientAppID;
@property(retain) NSString *transferToken; // @synthesize transferToken=_transferToken;
- (id)instantiateResponse;
- (id)buildAuthInfoNode;
- (_Bool)buildSecurityNode:(out id *)arg1 error:(out id *)arg2;
- (id)getRequestedScopes;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RLMSyncServerEndpoint.h"

@interface RLMSyncGetUserInfoEndpoint : RLMSyncServerEndpoint
{
}

+ (id)endpoint;
- (id)httpHeadersForPayload:(id)arg1;
- (id)httpBodyForPayload:(id)arg1 error:(id *)arg2;
- (id)urlForAuthServer:(id)arg1 payload:(id)arg2;
- (id)httpMethod;

@end


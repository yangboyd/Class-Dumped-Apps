//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MSAL/MSIDWebviewFactory.h>

@interface MSIDAADWebviewFactory : MSIDWebviewFactory
{
}

- (id)oAuthResponseWithURL:(id)arg1 requestState:(id)arg2 ignoreInvalidState:(_Bool)arg3 context:(id)arg4 error:(id *)arg5;
- (id)embeddedWebviewFromConfiguration:(id)arg1 customWebview:(id)arg2 context:(id)arg3;
- (id)metadataFromRequestParameters:(id)arg1;
- (id)authorizationParametersFromRequestParameters:(id)arg1 pkce:(id)arg2 requestState:(id)arg3;

@end


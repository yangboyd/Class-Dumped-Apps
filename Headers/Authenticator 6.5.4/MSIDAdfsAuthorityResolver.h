//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MSAL/MSIDAuthorityResolving-Protocol.h>

@class NSString;

@interface MSIDAdfsAuthorityResolver : NSObject <MSIDAuthorityResolving>
{
}

+ (id)cache;
+ (void)initialize;
- (id)getDomain:(id)arg1;
- (id)openIdConfigurationEndpointForAuthority:(id)arg1;
- (_Bool)isRealmTrustedFromWebFingerPayload:(id)arg1 authority:(id)arg2;
- (void)sendDrsDiscoveryWithDomain:(id)arg1 context:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)resolveAuthority:(id)arg1 userPrincipalName:(id)arg2 validate:(_Bool)arg3 context:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


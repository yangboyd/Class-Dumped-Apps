//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MSAL/MSIDErrorConverting-Protocol.h>

@class NSString;

@interface MSIDDefaultErrorConverter : NSObject <MSIDErrorConverting>
{
}

- (id)subErrorKey;
- (id)oauthErrorKey;
- (id)errorWithDomain:(id)arg1 code:(long long)arg2 errorDescription:(id)arg3 oauthError:(id)arg4 subError:(id)arg5 underlyingError:(id)arg6 correlationId:(id)arg7 userInfo:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


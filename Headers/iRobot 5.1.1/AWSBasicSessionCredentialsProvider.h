//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AWSCore/AWSCredentialsProvider-Protocol.h>

@class AWSCredentials, NSString;

@interface AWSBasicSessionCredentialsProvider : NSObject <AWSCredentialsProvider>
{
    AWSCredentials *_internalCredentials;
}

@property(retain, nonatomic) AWSCredentials *internalCredentials; // @synthesize internalCredentials=_internalCredentials;
- (void).cxx_destruct;
- (void)invalidateCachedTemporaryCredentials;
- (id)credentials;
- (id)initWithAccessKey:(id)arg1 secretKey:(id)arg2 sessionToken:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


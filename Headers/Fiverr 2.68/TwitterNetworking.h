//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TWTRAuthConfig;

@interface TwitterNetworking : NSObject
{
    TWTRAuthConfig *_authConfig;
}

+ (id)defaultAdditionalHeaders;
+ (id)defaultConfiguration;
+ (id)URLSession;
@property(readonly, nonatomic) TWTRAuthConfig *authConfig; // @synthesize authConfig=_authConfig;
- (void).cxx_destruct;
- (id)operationQueue;
- (id)URLRequestWithMethod:(id)arg1 URL:(id)arg2 parameters:(id)arg3;
- (void)sendAsynchronousRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)DELETE:(id)arg1 parameters:(id)arg2;
- (id)POST:(id)arg1 parameters:(id)arg2;
- (id)GET:(id)arg1 parameters:(id)arg2;
- (id)initWithAuthConfig:(id)arg1;

@end


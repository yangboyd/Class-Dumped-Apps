//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCAPIAuth : NSObject
{
}

+ (id)versionName;
+ (id)schemeName;
+ (id)appVersion;
+ (id)appName;
+ (id)userAgentHeader;
+ (id)requestTokenForUserToken:(id)arg1 timestamp:(id)arg2;
+ (id)authenticationParametersForUserWithToken:(id)arg1 username:(id)arg2 withDeviceInfo:(_Bool)arg3 deviceIdManager:(id)arg4;
+ (id)authenticationParametersForEndpoint:(id)arg1 authToken:(id)arg2 username:(id)arg3 parameters:(id)arg4 deviceIdManager:(id)arg5;
+ (id)staticFSNAuthToken;

@end


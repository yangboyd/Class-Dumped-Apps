//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AerServSDK : NSObject
{
}

+ (void)setAdapterGdprConsent:(id)arg1;
+ (void)setGDPRWithUserConsent:(id)arg1;
+ (_Bool)isTestModeEnabled;
+ (void)enableTestMode:(_Bool)arg1;
+ (void)showLogs:(_Bool)arg1;
+ (id)sdkVersion;
+ (void)initializeWithAppID:(id)arg1 andUserConsent:(id)arg2 andCompletionHandler:(CDUnknownBlockType)arg3;
+ (void)initializeWithAppID:(id)arg1 andUserConsent:(id)arg2;
+ (void)initializeWithAppID:(id)arg1;
+ (void)initializeWithAppID:(id)arg1 andCompletionHandler:(CDUnknownBlockType)arg2;
+ (id)sdk;

@end


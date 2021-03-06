//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface InstabugNetworkLogger : NSObject
{
}

+ (void)setLegacyURLObfuscationHandler:(CDUnknownBlockType)arg1;
+ (CDUnknownBlockType)legacyURLObfuscationHandler;
+ (void)addNetworkLogWithUrl:(id)arg1 method:(id)arg2 requestBody:(id)arg3 responseBody:(id)arg4 responseCode:(int)arg5 requestHeaders:(id)arg6 responseHeaders:(id)arg7 contentType:(id)arg8 duration:(double)arg9;
+ (_Bool)currentEnabledState;
+ (void)disable;
+ (void)enable;
+ (void)setUserResponseObfuscationHandler:(CDUnknownBlockType)arg1;
+ (void)setUserRequestObfuscationHandler:(CDUnknownBlockType)arg1;
+ (void)setRequestProgressBlock:(CDUnknownBlockType)arg1 forRequestURL:(id)arg2;
+ (void)setResponseFilterPredicate:(id)arg1;
+ (void)setRequestFilterPredicate:(id)arg1;
+ (id)fetchRequest;
+ (void)registerNetworkLogProtocolInSessionConfiguration:(id)arg1;
+ (void)registerNetworkLogProtocolForSharedSession;
- (void)clearAllLogsSynchronously;
- (void)clearAllLogs;
- (void)loadSnapshotWithSessionId:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;

@end


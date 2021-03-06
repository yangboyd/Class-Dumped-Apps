//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol AIASLogic <NSObject>
- (void)signOutWithAccountId:(NSString *)arg1 success:(void (^)(void))arg2 failure:(void (^)(NSError *))arg3;
- (void)promptSignInWithSuccess:(void (^)(void))arg1 failure:(void (^)(NSError *))arg2;

@optional
+ (_Bool)requiresMainQueueSetup;
- (NSDictionary *)constantsToExport;
- (void)dismissAccountSwitcher;
- (void)currentAccountDidChange;
@end


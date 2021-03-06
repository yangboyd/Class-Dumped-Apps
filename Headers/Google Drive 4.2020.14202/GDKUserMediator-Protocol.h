//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject, NSString, NSURL, UIViewController;
@protocol OS_dispatch_queue, SSOIdentity;

@protocol GDKUserMediator <NSObject>
@property(readonly, nonatomic) id <SSOIdentity> ssoIdentity;
- (void)shutdownWithCompletionQueue:(NSObject<OS_dispatch_queue> *)arg1 completion:(void (^)(void))arg2;
- (UIViewController *)rootViewController;

@optional
@property(nonatomic) _Bool displayAccountToastAfterActivation;
- (void)accountRemoved;
- (void)uploadFileAtURL:(NSURL *)arg1;
- (void)requestAccessForFileWithID:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)openFileWithID:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)refreshDataWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)didBecomeInactive;
- (void)willBecomeInactive;
- (void)didBecomeActive;
- (void)willBecomeActive;
@end


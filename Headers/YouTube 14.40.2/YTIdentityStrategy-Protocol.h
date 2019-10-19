//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, YTIdentityTransaction;

@protocol YTIdentityStrategy <NSObject>
- (void)signOutWithTransaction:(YTIdentityTransaction *)arg1 withError:(NSError *)arg2;
- (void)firstTimeSignInWithTransaction:(YTIdentityTransaction *)arg1;
- (void)switchAccountsWithTransaction:(YTIdentityTransaction *)arg1;
- (void)signInWithTransaction:(YTIdentityTransaction *)arg1;
- (void)reauthenticateWithTransaction:(YTIdentityTransaction *)arg1 showSwitcher:(_Bool)arg2;
@end


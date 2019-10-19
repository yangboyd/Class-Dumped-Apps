//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPSessionObserver-Protocol.h"

@class NSString, SPCore, SPTLoginDelayedSignupGuestAccountTracker;
@protocol SPTLoginKeychainManager;

@interface SPTLoginKeychainCredentialsWriter : NSObject <SPSessionObserver>
{
    SPCore *_core;
    id <SPTLoginKeychainManager> _keychainManager;
    SPTLoginDelayedSignupGuestAccountTracker *_tracker;
}

@property(retain, nonatomic) SPTLoginDelayedSignupGuestAccountTracker *tracker; // @synthesize tracker=_tracker;
@property(retain, nonatomic) id <SPTLoginKeychainManager> keychainManager; // @synthesize keychainManager=_keychainManager;
@property(nonatomic) __weak SPCore *core; // @synthesize core=_core;
- (void).cxx_destruct;
- (void)sessionLoginModeChanged:(id)arg1;
- (void)deferCredentialsWritingUntilOnlineLogin;
- (void)writeCredentialsToKeychain;
- (id)initWithCore:(id)arg1 keychainManager:(id)arg2 guestAccountTracker:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


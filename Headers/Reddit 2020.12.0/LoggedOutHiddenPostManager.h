//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AccountSettings, UnfairLock;

@interface LoggedOutHiddenPostManager : NSObject
{
    AccountSettings *_accountSettings;
    UnfairLock *_lock;
}

@property(retain, nonatomic) UnfairLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) AccountSettings *accountSettings; // @synthesize accountSettings=_accountSettings;
- (void).cxx_destruct;
- (void)didLoadPost:(id)arg1;
- (void)clearHiddenPosts;
- (_Bool)isPostHidden:(id)arg1;
- (void)hidePost:(id)arg1;
- (id)initWithService:(id)arg1;

@end


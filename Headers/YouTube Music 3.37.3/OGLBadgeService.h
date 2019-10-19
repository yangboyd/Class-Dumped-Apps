//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OGLAccount, OGLAccountWideBadgeSourceProtocol;

@interface OGLBadgeService : NSObject
{
    id <OGLAccountWideBadgeSourceProtocol> _accountWideBadgeSource;
    id <OGLAccount> _account;
    unsigned long long _badgeSupportLevel;
}

+ (id)sharedInstance;
@property(nonatomic) unsigned long long badgeSupportLevel; // @synthesize badgeSupportLevel=_badgeSupportLevel;
@property(retain, nonatomic) id <OGLAccount> account; // @synthesize account=_account;
@property(retain, nonatomic) id <OGLAccountWideBadgeSourceProtocol> accountWideBadgeSource; // @synthesize accountWideBadgeSource=_accountWideBadgeSource;
- (void).cxx_destruct;
- (void)reloadBadgeForAccount:(id)arg1 badgeContent:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)reloadBadgeForAppBadgeSource:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)computeForAccount:(id)arg1 accountService:(id)arg2 badgeSupportLevel:(unsigned long long)arg3 appBadgeSource:(id)arg4 colorTheme:(id)arg5 callback:(CDUnknownBlockType)arg6;

@end


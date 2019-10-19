//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NFLXIdentityStoreDelegate-Protocol.h"

@class NSString, NSUserDefaults;

@interface NFLXIdentityStoreDelegateUserDefaults : NSObject <NFLXIdentityStoreDelegate>
{
    NSUserDefaults *_userDefaults;
    NSString *_suiteName;
}

@property(retain, nonatomic) NSString *suiteName; // @synthesize suiteName=_suiteName;
@property(retain, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
- (void).cxx_destruct;
- (void)identityStoreClear:(id)arg1;
- (void)identityStore:(id)arg1 remove:(id)arg2 forKey:(id)arg3;
- (void)identityStore:(id)arg1 save:(id)arg2 forKey:(id)arg3;
- (id)identityStore:(id)arg1 load:(Class)arg2 forKey:(id)arg3;
- (id)initWithSuiteName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


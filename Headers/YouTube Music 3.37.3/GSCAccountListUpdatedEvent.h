//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface GSCAccountListUpdatedEvent : NSObject
{
    long long _type;
    NSArray *_accounts;
}

+ (id)foregroundAccountsChangedEventWithAccounts:(id)arg1;
+ (id)accountsDeactivatedEventWithAccounts:(id)arg1;
+ (id)accountsActivatedEventWithAccounts:(id)arg1;
+ (id)accountsRemovedEventWithAccounts:(id)arg1;
+ (id)accountsAddedEventWithAccounts:(id)arg1;
@property(readonly, nonatomic) NSArray *accounts; // @synthesize accounts=_accounts;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithUpdateType:(long long)arg1 andAccounts:(id)arg2;

@end


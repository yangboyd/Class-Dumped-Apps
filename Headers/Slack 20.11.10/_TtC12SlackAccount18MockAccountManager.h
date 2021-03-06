//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@interface _TtC12SlackAccount18MockAccountManager : _TtCs12_SwiftObject
{
    // Error parsing type: , name: updateAllAccountsBlock
    // Error parsing type: , name: callback
    // Error parsing type: , name: allTeamIdsToReturn
    // Error parsing type: , name: allAccountsToReturn
    // Error parsing type: , name: isSwitching
    // Error parsing type: , name: mockCurrentAccount
    // Error parsing type: , name: accountToSwitchTo
}

+ (id)sharedManager;
- (void)removeAccountForUnitTesting:(id)arg1;
- (void)addAccountForUnitTesting:(id)arg1;
- (void)setCurrentAccountForUnitTesting:(id)arg1;
- (_Bool)save;
- (void)switchAccountForward;
- (void)switchAccountBackward;
- (void)switchToAccountWithTeamId:(id)arg1;
- (void)switchTo:(id)arg1 inBackground:(_Bool)arg2;
- (void)switchToAccount:(id)arg1 withAnimation:(_Bool)arg2;
- (void)switchToAccountWithAnimation:(id)arg1;
- (_Bool)removeAllAccounts;
- (_Bool)remove:(id)arg1 saveKeychain:(_Bool)arg2;
- (_Bool)removeAccount:(id)arg1;
- (id)updateOrAddAccountWithTeamId:(id)arg1 teamName:(id)arg2 teamDomain:(id)arg3 teamImageUrls:(id)arg4 userId:(id)arg5 enterpriseId:(id)arg6 enterpriseName:(id)arg7 enterpriseImageUrls:(id)arg8 enterpriseToken:(id)arg9 commandsOnlyRegular:(_Bool)arg10 saveToKeychain:(_Bool)arg11;
- (id)updateOrAddAccountWithTeamId:(id)arg1 teamName:(id)arg2 teamDomain:(id)arg3 teamImageUrls:(id)arg4 userId:(id)arg5 enterpriseId:(id)arg6 enterpriseName:(id)arg7 enterpriseImageUrls:(id)arg8 enterpriseToken:(id)arg9 commandsOnlyRegular:(_Bool)arg10;
- (id)updateOrAddAccountWithTeamPayload:(id)arg1 userId:(id)arg2;
- (id)updateOrAddAccountWithPayload:(id)arg1;
- (id)updateOrAddAccountWithTeamId:(id)arg1 userId:(id)arg2;
- (id)updateCurrentAccountWithTeamName:(id)arg1 teamDomain:(id)arg2;
- (id)currentAccountForLaunch;
- (_Bool)accountExistsForTeamId:(id)arg1;
- (id)previousPreviousAccount;
- (id)previousAccount;
- (id)currentAccount;
- (id)accountForTeamId:(id)arg1;
- (id)allEnterpriseIds;
@property(nonatomic) _Bool isSwitching; // @synthesize isSwitching;
- (id)addObserverWithCallbackQueue:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)teamAccountsForEnterpriseId:(id)arg1;
- (id)allAccounts;
- (id)teamIdsForEnterpriseId:(id)arg1;
- (id)allTeamIds;
- (void)logoutFrom:(id)arg1;
- (void)updateAllAccounts:(id)arg1;

@end


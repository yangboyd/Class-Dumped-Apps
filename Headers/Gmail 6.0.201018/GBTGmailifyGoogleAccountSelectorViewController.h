//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GBTGmailifyEmailSelectionViewController.h"

#import "GBTGmailifyEmailSelectionViewControllerDelegate-Protocol.h"

@class NSString;
@protocol GBTGmailifyGoogleAccountSelectorViewControllerDelegate;

@interface GBTGmailifyGoogleAccountSelectorViewController : GBTGmailifyEmailSelectionViewController <GBTGmailifyEmailSelectionViewControllerDelegate>
{
    id <GBTGmailifyGoogleAccountSelectorViewControllerDelegate> _delegate;
}

+ (id)validIdentities;
+ (id)firstValidGoogleEmailAddress;
- (void).cxx_destruct;
- (void)goBack;
- (void)showTerms;
- (void)launchAddAccount;
- (void)proceedWithEmailAddress:(id)arg1;
- (id)emailAddresses;
- (id)initWithExternalEmailAddress:(id)arg1 parentVisualElement:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


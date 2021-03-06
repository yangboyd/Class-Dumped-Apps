//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GBTBaseSettingsTableViewController.h"

@class NSString, UILabel, UIView;

@interface GBTSyncFrequencySettingsViewController : GBTBaseSettingsTableViewController
{
    CDUnknownBlockType _completion;
    NSString *_email;
    UILabel *_footerTextView;
    UIView *_footerView;
}

+ (id)textForFrequency:(long long)arg1;
- (void).cxx_destruct;
- (id)footerText;
- (long long)syncFrequencyForRow:(long long)arg1;
- (void)setChecked:(_Bool)arg1 onCell:(id)arg2;
- (void)updateFooterSizeWithSize:(struct CGSize)arg1;
- (struct CGSize)footerSizeForTableSize:(struct CGSize)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)titleForAppBar:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLoad;
- (void)loadView;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)initWithAccountID:(id)arg1 accountSettingsUIServiceDeps:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end


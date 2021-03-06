//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGGroupedTableViewController.h>

@class IGFacebookAdvancedOptionsConfiguration, IGSwitch, IGUserSession;

@interface IGFacebookAdvancedOptionsViewController : IGGroupedTableViewController
{
    IGUserSession *_userSession;
    long long _type;
    IGFacebookAdvancedOptionsConfiguration *_configuration;
    IGSwitch *_xpostFeedToFacebookSettingSwitch;
    IGSwitch *_xpostStroyToFacebookSettingSwitch;
}

- (void).cxx_destruct;
- (void)_fetchUserData;
- (_Bool)_showUnlink;
- (_Bool)_showStoryShareToFacebookSection;
- (_Bool)_showPostShareToFacebookSection;
- (void)_onFacebookLoginCompleted;
- (void)optimisticallyTurnOnStoryAndFeedShareSetting;
- (void)_didSelectLoginRow;
- (void)_didSelectPostToRow;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_configureLoginToCell:(id)arg1;
- (void)_configureConnectedToCell:(id)arg1;
- (void)_configurePostToCell:(id)arg1;
- (void)_setAutoShareStoryToFacebookAndLog:(_Bool)arg1;
- (void)_setAutoSharePostToFacebookAndLog:(_Bool)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)_tableView:(id)arg1 facebookPageConnectedToCellForIndexPath:(id)arg2;
- (id)_tableView:(id)arg1 unlinkCellForIndexPath:(id)arg2;
- (id)_tableView:(id)arg1 shareStoryCellForIndexPath:(id)arg2;
- (id)_tableView:(id)arg1 sharePostCellForIndexPath:(id)arg2;
- (id)_tableView:(id)arg1 optionCellForIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 type:(long long)arg2 configuration:(id)arg3;

@end


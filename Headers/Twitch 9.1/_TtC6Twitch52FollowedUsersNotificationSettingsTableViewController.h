//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitchCoreUI/TWBaseTableViewController.h>

__attribute__((visibility("hidden")))
@interface _TtC6Twitch52FollowedUsersNotificationSettingsTableViewController : TWBaseTableViewController
{
    // Error parsing type: , name: _rows
    // Error parsing type: , name: viewModels
    // Error parsing type: , name: cursor
    // Error parsing type: , name: requestInProgress
    // Error parsing type: , name: requestToken
    // Error parsing type: , name: pageSize
    // Error parsing type: , name: $__lazy_storage_$_loadingIndicator
    // Error parsing type: , name: analyticsContext
}

- (void).cxx_destruct;
- (id)initWithTableViewStyle:(long long)arg1 themeManager:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)requestMoreItemsAfterLastOne;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithThemeManager:(id)arg1;

@end


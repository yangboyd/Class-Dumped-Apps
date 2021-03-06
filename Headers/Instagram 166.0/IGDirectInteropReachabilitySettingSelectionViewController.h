//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGGroupedTableViewController.h>

@class NSArray, NSString;
@protocol IGInteropReachabilitySettingSelectionDelegate;

@interface IGDirectInteropReachabilitySettingSelectionViewController : IGGroupedTableViewController
{
    long long _settingType;
    NSArray *_options;
    long long _selectedOption;
    NSString *_title;
    NSString *_footnote;
    id <IGInteropReachabilitySettingSelectionDelegate> _delegate;
    _Bool _enabled;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) long long settingType; // @synthesize settingType=_settingType;
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)toggleSelectedOption:(long long)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewDidLoad;
- (id)initWithSettingType:(long long)arg1 selectedOption:(long long)arg2 selectionOptions:(id)arg3 title:(id)arg4 footnote:(id)arg5 delegate:(id)arg6;

@end


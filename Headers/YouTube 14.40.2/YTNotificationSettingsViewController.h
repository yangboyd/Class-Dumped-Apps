//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTStyledViewController.h"

#import "YTPageStyleProvider.h"
#import "YTSystemNotificationsObserver.h"

@class NSMutableArray, NSString, YTCollectionViewController, YTINotificationSettingCategoryCollectionRenderer, YTSettingsSectionController, YTSystemNotifications, YTUserDefaults;

@interface YTNotificationSettingsViewController : YTStyledViewController <YTPageStyleProvider, YTSystemNotificationsObserver>
{
    YTCollectionViewController *_collectionViewController;
    YTUserDefaults *_userDefaults;
    YTSystemNotifications *_systemNotifications;
    YTINotificationSettingCategoryCollectionRenderer *_notificationSettingsRenderer;
    NSMutableArray *_sectionControllers;
    YTSettingsSectionController *_osNotificationSettingSectionController;
    NSString *_title;
}

- (void).cxx_destruct;
- (void)appDidBecomeActive:(id)arg1;
- (id)model;
- (void)loadWithModel:(id)arg1 fromView:(id)arg2;
@property(readonly, nonatomic) long long pageStyle;
- (void)reloadSettings;
- (void)updateSectionControllersBasedOnPushNotificationsEnabled;
- (id)createOSPushNotificationSectionController:(id)arg1;
- (_Bool)isOSPushNotificationSetting:(id)arg1;
- (_Bool)shouldCreateOSPushNotificationSetting:(id)arg1;
- (CDUnknownBlockType)dialogBlockWithDialogRenderer:(id)arg1 booleanRenderer:(id)arg2;
- (CDUnknownBlockType)switchBlock:(id)arg1;
- (id)selectedText:(id)arg1;
- (CDUnknownBlockType)selectBlock:(id)arg1;
- (void)showSettingsPickerWithNavTitle:(id)arg1 pickerSectionTitle:(id)arg2 items:(id)arg3 selectedItemIndex:(unsigned long long)arg4 selectBlock:(CDUnknownBlockType)arg5;
- (id)collectionViewController;
- (void)viewDidLoad;
- (void)loadView;
- (id)createLinkSectionItem:(id)arg1;
- (id)createSectionController:(id)arg1;
- (void)pushViewController:(id)arg1;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAccountProfileModalViewController.h"

@class NSMutableArray, SCProfileSettingView, SQTableViewContentManagerSection, _TtC4Cash26OBJC_LoyaltyProfileManager;

@interface SCAccountProfileNotificationPreferenceViewController : SCAccountProfileModalViewController
{
    SQTableViewContentManagerSection *_notificationsSection;
    SQTableViewContentManagerSection *_notificationTypesSection;
    SCProfileSettingView *_appMessageNotificationsSettingView;
    SCProfileSettingView *_loyaltyNotificationsSettingView;
    _TtC4Cash26OBJC_LoyaltyProfileManager *_loyaltyProfileManager;
    SCProfileSettingView *_pushNotificationsSettingView;
    NSMutableArray *_notificationAliasSettingViews;
}

+ (id)pushNotificationPermissionAlertViewControllerWithConfirmCallback:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) NSMutableArray *notificationAliasSettingViews; // @synthesize notificationAliasSettingViews=_notificationAliasSettingViews;
@property(retain, nonatomic) SCProfileSettingView *pushNotificationsSettingView; // @synthesize pushNotificationsSettingView=_pushNotificationsSettingView;
@property(retain, nonatomic) _TtC4Cash26OBJC_LoyaltyProfileManager *loyaltyProfileManager; // @synthesize loyaltyProfileManager=_loyaltyProfileManager;
@property(retain, nonatomic) SCProfileSettingView *loyaltyNotificationsSettingView; // @synthesize loyaltyNotificationsSettingView=_loyaltyNotificationsSettingView;
@property(retain, nonatomic) SCProfileSettingView *appMessageNotificationsSettingView; // @synthesize appMessageNotificationsSettingView=_appMessageNotificationsSettingView;
@property(retain, nonatomic) SQTableViewContentManagerSection *notificationTypesSection; // @synthesize notificationTypesSection=_notificationTypesSection;
@property(retain, nonatomic) SQTableViewContentManagerSection *notificationsSection; // @synthesize notificationsSection=_notificationsSection;
- (void).cxx_destruct;
- (id)_newCompactHeader;
- (void)_showNeedsInternectConnectionAlert;
- (_Bool)_connectedToInternet;
- (void)_notificationStatusDidUpdate:(id)arg1;
- (void)_updateNotificationAliasView:(id)arg1;
- (void)_toggleNotificationsForAliasInView:(id)arg1;
- (void)_requestPushAccessForAppMessagePermissionIfNecessary;
- (void)_loadNotificationTypesSection;
- (void)_loadNotificationsSection;
- (void)tableViewContentManager:(id)arg1 didSelectRowForObject:(id)arg2;
- (_Bool)tableViewContentManager:(id)arg1 shouldHighlightRowForObject:(id)arg2;
- (void)tableViewContentManager:(id)arg1 willDisplayCell:(id)arg2 forObject:(id)arg3 atIndexPath:(id)arg4;
- (id)tableViewSections;
- (id)headerText;
- (void)contentViewDidLoad;
- (void)dealloc;
- (void)updateLoyaltyNotificationsSettingView;
- (void)toggleLoyaltyNotifications;
- (void)loadLoyaltyProfileManager;
- (void)updateAppMessageNotificationsSettingView;
- (void)toggleAppMessageNotifications;
- (id)newDeniedPushAccessReauthorizationAlertViewControllerWithCompletionHandler:(CDUnknownBlockType)arg1;

@end


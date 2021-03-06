//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSService-Protocol.h"

@class AWEIMSettingModel, NSObject, NSString, UITableView, UITableViewCell, UIViewController;
@protocol AWEAlertWindowManagerProtocol, AWEAntiAddictedTimeManager, AWEAwemePrivacyControlProtocol, AWEContentLanguageManagerProtocol, AWEFavoriteManagerProtocol, AWEGradientPunishManagerProtocol, AWEPushNoticeProtocol, AWESettingsTableViewCellProtocol, AWEUserPrivacyManagerProtocol, TikTokUserContactManagerProtocol;

@protocol AWEUserCenterModuleService <HTSService>
- (id <TikTokUserContactManagerProtocol>)userContactManager;
- (NSString *)diskSpaceManagementURL;
- (_Bool)isDigitalWellbeingAlertShowing;
- (id <AWEPushNoticeProtocol>)pushNoticeSharedManger;
- (void)showAgreeStoreVideoViewedView:(NSString *)arg1 agreeBlock:(void (^)(_Bool))arg2;
- (void)saveCurrentIMSettingsModel;
- (AWEIMSettingModel *)currentIMSettingsModel;
- (NSObject<AWEGradientPunishManagerProtocol> *)gradientPunishManager;
- (Class)cacheCleanManager;
- (UITableViewCell<AWESettingsTableViewCellProtocol> *)aweSettingsTableViewCellForTableView:(UITableView *)arg1 reuseIdentifier:(NSString *)arg2;
- (UITableViewCell<AWESettingsTableViewCellProtocol> *)aweSettingsTableViewCell;
- (Class)aweSettingsTableViewCellClass;
- (void)checkVerificationStatus:(NSString *)arg1 type:(long long)arg2 completion:(void (^)(void))arg3 cancel:(void (^)(void))arg4;
- (NSObject<AWEAlertWindowManagerProtocol> *)aweAlertWindowManager;
- (Class)aweContentLanguageManagerClass;
- (NSObject<AWEContentLanguageManagerProtocol> *)aweContentLanguageManager;
- (UIViewController<AWEAwemePrivacyControlProtocol> *)awemePrivacyControlViewController;
- (NSObject<AWEFavoriteManagerProtocol> *)favoriteManager;
- (id <AWEUserPrivacyManagerProtocol>)userPrivacyManager;
- (Class)privacySettingClass;
- (NSObject<AWEAntiAddictedTimeManager> *)antiAddictedTimeSharedManager;
@end


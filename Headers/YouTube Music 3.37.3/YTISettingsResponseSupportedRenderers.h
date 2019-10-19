//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIBackgroundOfflineSettingCategoryEntryRenderer, YTIBlockedContactSettingCategoryRenderer, YTICaptionSettingCategoryRenderer, YTIGamingThirdPartySettingRenderer, YTIMusicShortcutsSettingCategoryEntryRenderer, YTINotificationSettingCategoryCollectionRenderer, YTISettingCategoryCollectionRenderer, YTISettingCategoryEntryRenderer, YTISubscriptionProductsSettingCategoryEntryRenderer, YTIUnlimitedSettingCategoryEntryRenderer, YTIUnpluggedSettingCategoryEntryRenderer;

@interface YTISettingsResponseSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIBackgroundOfflineSettingCategoryEntryRenderer *backgroundOfflineSettingCategoryEntryRenderer; // @dynamic backgroundOfflineSettingCategoryEntryRenderer;
@property(retain, nonatomic) YTIBlockedContactSettingCategoryRenderer *blockedContactSettingCategoryRenderer; // @dynamic blockedContactSettingCategoryRenderer;
@property(retain, nonatomic) YTICaptionSettingCategoryRenderer *captionSettingCategoryRenderer; // @dynamic captionSettingCategoryRenderer;
@property(retain, nonatomic) YTIGamingThirdPartySettingRenderer *gamingThirdPartySettingRenderer; // @dynamic gamingThirdPartySettingRenderer;
@property(retain, nonatomic) YTIMusicShortcutsSettingCategoryEntryRenderer *musicShortcutsSettingCategoryEntryRenderer; // @dynamic musicShortcutsSettingCategoryEntryRenderer;
@property(retain, nonatomic) YTINotificationSettingCategoryCollectionRenderer *notificationSettingCategoryCollectionRenderer; // @dynamic notificationSettingCategoryCollectionRenderer;
@property(readonly, nonatomic) int rendererOneOfCase; // @dynamic rendererOneOfCase;
@property(retain, nonatomic) YTISettingCategoryCollectionRenderer *settingCategoryCollectionRenderer; // @dynamic settingCategoryCollectionRenderer;
@property(retain, nonatomic) YTISettingCategoryEntryRenderer *settingCategoryEntryRenderer; // @dynamic settingCategoryEntryRenderer;
@property(retain, nonatomic) YTISubscriptionProductsSettingCategoryEntryRenderer *subscriptionProductsSettingCategoryEntryRenderer; // @dynamic subscriptionProductsSettingCategoryEntryRenderer;
@property(retain, nonatomic) YTIUnlimitedSettingCategoryEntryRenderer *unlimitedSettingCategoryEntryRenderer; // @dynamic unlimitedSettingCategoryEntryRenderer;
@property(retain, nonatomic) YTIUnpluggedSettingCategoryEntryRenderer *unpluggedSettingCategoryEntryRenderer; // @dynamic unpluggedSettingCategoryEntryRenderer;

@end


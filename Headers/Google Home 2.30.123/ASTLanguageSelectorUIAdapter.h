//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASTSettingsUIAdapter.h"

@class ASTMenuIconStreamItem, ASTUIAssistantDeviceSettingsUi, ASTUIAssistantVoiceSettingsUi, NSArray, NSMutableArray, NSString;

@interface ASTLanguageSelectorUIAdapter : ASTSettingsUIAdapter
{
    _Bool _isPrimary;
    _Bool _backButtonTapped;
    int _deviceType;
    ASTUIAssistantVoiceSettingsUi *_voiceSettings;
    ASTUIAssistantDeviceSettingsUi *_deviceSettings;
    NSString *_selectedLocaleID;
    NSMutableArray *_suggestedLocales;
    ASTMenuIconStreamItem *_selectedItem;
    NSString *_primaryLocaleID;
    NSArray *_chirpSupportedLocales;
    NSArray *_smartDisplaySupportedLocales;
    NSString *_newlySelectedLocaleID;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool backButtonTapped; // @synthesize backButtonTapped=_backButtonTapped;
@property(retain, nonatomic) NSString *newlySelectedLocaleID; // @synthesize newlySelectedLocaleID=_newlySelectedLocaleID;
@property(retain, nonatomic) NSArray *smartDisplaySupportedLocales; // @synthesize smartDisplaySupportedLocales=_smartDisplaySupportedLocales;
@property(retain, nonatomic) NSArray *chirpSupportedLocales; // @synthesize chirpSupportedLocales=_chirpSupportedLocales;
@property(retain, nonatomic) NSString *primaryLocaleID; // @synthesize primaryLocaleID=_primaryLocaleID;
@property(retain, nonatomic) ASTMenuIconStreamItem *selectedItem; // @synthesize selectedItem=_selectedItem;
@property(retain, nonatomic) NSMutableArray *suggestedLocales; // @synthesize suggestedLocales=_suggestedLocales;
@property(nonatomic) _Bool isPrimary; // @synthesize isPrimary=_isPrimary;
@property(retain, nonatomic) NSString *selectedLocaleID; // @synthesize selectedLocaleID=_selectedLocaleID;
@property(retain, nonatomic) ASTUIAssistantDeviceSettingsUi *deviceSettings; // @synthesize deviceSettings=_deviceSettings;
@property(retain, nonatomic) ASTUIAssistantVoiceSettingsUi *voiceSettings; // @synthesize voiceSettings=_voiceSettings;
@property(nonatomic) int deviceType; // @synthesize deviceType=_deviceType;
- (void)didTapBackButton;
- (_Bool)isSmartDisplayType:(int)arg1;
- (_Bool)isBlacklisted:(id)arg1;
- (id)settingsUpdateForDeviceID:(id)arg1 localeID:(id)arg2;
- (id)requestForUpdatingChirpLocale:(id)arg1 smartDisplayLocale:(id)arg2;
- (id)supportedLocalesForNonPhoneDevices;
- (void)updatePreferredLocale:(id)arg1;
- (id)itemForLocale:(id)arg1;
- (id)settingsFilter;
- (void)menuStreamController:(id)arg1 didSelectItem:(id)arg2;
- (id)menuSectionsForSettings:(id)arg1;
- (id)pageCustomizations;
- (id)initWithSettingsService:(id)arg1 deviceType:(int)arg2 isPrimary:(_Bool)arg3 selectedLocaleID:(id)arg4;
- (id)initWithSettingsService:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRUserDataControls_ButtonConfig, GTLRUserDataControls_ImageResource, GTLRUserDataControls_InfoNotice, GTLRUserDataControls_SettingOverviewConfigShowDeviceSettingsAction, GTLRUserDataControls_SettingState, GTLRUserDataControls_TextResource, NSArray;

@interface GTLRUserDataControls_SettingOverviewConfig : GTLRObject
{
}

+ (id)arrayPropertyToClassMap;
+ (id)propertyToJSONKeyMap;

// Remaining properties
@property(retain, nonatomic) GTLRUserDataControls_ButtonConfig *actionButton; // @dynamic actionButton;
@property(retain, nonatomic) NSArray *additionalButtons; // @dynamic additionalButtons;
@property(retain, nonatomic) GTLRUserDataControls_TextResource *descriptionProperty; // @dynamic descriptionProperty;
@property(retain, nonatomic) GTLRUserDataControls_ImageResource *icon; // @dynamic icon;
@property(retain, nonatomic) GTLRUserDataControls_ImageResource *illustration1x; // @dynamic illustration1x;
@property(retain, nonatomic) GTLRUserDataControls_ImageResource *illustration2x; // @dynamic illustration2x;
@property(retain, nonatomic) GTLRUserDataControls_TextResource *illustrationBackgroundColor; // @dynamic illustrationBackgroundColor;
@property(retain, nonatomic) GTLRUserDataControls_InfoNotice *infoNotice; // @dynamic infoNotice;
@property(retain, nonatomic) GTLRUserDataControls_ButtonConfig *manageButton; // @dynamic manageButton;
@property(retain, nonatomic) GTLRUserDataControls_TextResource *name; // @dynamic name;
@property(retain, nonatomic) NSArray *settingCaptions; // @dynamic settingCaptions;
@property(retain, nonatomic) GTLRUserDataControls_SettingState *settingState; // @dynamic settingState;
@property(retain, nonatomic) GTLRUserDataControls_SettingOverviewConfigShowDeviceSettingsAction *showDeviceSettingsAction; // @dynamic showDeviceSettingsAction;
@property(retain, nonatomic) GTLRUserDataControls_TextResource *stateSummary; // @dynamic stateSummary;
@property(retain, nonatomic) NSArray *subsettingConfigs; // @dynamic subsettingConfigs;
@property(retain, nonatomic) GTLRUserDataControls_TextResource *title; // @dynamic title;

@end


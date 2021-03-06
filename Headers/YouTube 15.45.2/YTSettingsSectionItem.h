//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTResponder-Protocol.h>
#import <Module_Framework/YTSettingsItemViewModel-Protocol.h>

@class NSData, NSString, YTICommand, YTIIcon, YTIRenderer, YTIThumbnailDetails;
@protocol YTResponder;

@interface YTSettingsSectionItem : NSObject <YTSettingsItemViewModel, YTResponder>
{
    _Bool _hasCheckmark;
    _Bool _hasSwitch;
    _Bool _on;
    _Bool _enabled;
    _Bool _switchVisible;
    _Bool _spinnerVisible;
    _Bool _inkEnabled;
    int _indicatorIconType;
    int _settingItemId;
    id <YTResponder> _parentResponder;
    NSString *_title;
    NSString *_titleDescription;
    NSString *_accessibilityIdentifier;
    CDUnknownBlockType _detailTextBlock;
    CDUnknownBlockType _selectBlock;
    CDUnknownBlockType _disabledSelectBlock;
    CDUnknownBlockType _switchBlock;
    YTIThumbnailDetails *_settingThumbnailImageDetails;
    YTIIcon *_settingIcon;
    NSData *_trackingParams;
}

+ (id)switchItemWithTitle:(id)arg1 switchOn:(_Bool)arg2 veType:(int)arg3 parentResponder:(id)arg4 switchBlock:(CDUnknownBlockType)arg5;
+ (id)switchItemWithTitle:(id)arg1 switchOn:(_Bool)arg2 switchBlock:(CDUnknownBlockType)arg3;
+ (id)switchItemWithTitle:(id)arg1 titleDescription:(id)arg2 accessibilityIdentifier:(id)arg3 switchOn:(_Bool)arg4 switchBlock:(CDUnknownBlockType)arg5 selectBlock:(CDUnknownBlockType)arg6 settingItemId:(int)arg7;
+ (id)switchItemWithTitle:(id)arg1 titleDescription:(id)arg2 accessibilityIdentifier:(id)arg3 switchOn:(_Bool)arg4 confirmationRequiredToEnable:(_Bool)arg5 confirmationRequiredToDisable:(_Bool)arg6 switchBlock:(CDUnknownBlockType)arg7 settingItemId:(int)arg8;
+ (id)switchItemWithTitle:(id)arg1 titleDescription:(id)arg2 accessibilityIdentifier:(id)arg3 switchOn:(_Bool)arg4 switchBlock:(CDUnknownBlockType)arg5 settingItemId:(int)arg6;
+ (id)switchItemWithTitle:(id)arg1 titleDescription:(id)arg2 accessibilityIdentifier:(id)arg3 switchOn:(_Bool)arg4 confirmationRequiredToEnable:(_Bool)arg5 confirmationRequiredToDisable:(_Bool)arg6 switchBlock:(CDUnknownBlockType)arg7;
+ (id)switchItemWithTitle:(id)arg1 titleDescription:(id)arg2 accessibilityIdentifier:(id)arg3 switchOn:(_Bool)arg4 switchBlock:(CDUnknownBlockType)arg5;
+ (id)checkmarkItemWithTitle:(id)arg1 selectBlock:(CDUnknownBlockType)arg2;
+ (id)checkmarkItemWithTitle:(id)arg1 titleDescription:(id)arg2 selectBlock:(CDUnknownBlockType)arg3 disabledSelectBlock:(CDUnknownBlockType)arg4;
+ (id)checkmarkItemWithTitle:(id)arg1 titleDescription:(id)arg2 selectBlock:(CDUnknownBlockType)arg3;
+ (id)itemWithTitle:(id)arg1 accessibilityIdentifier:(id)arg2 detailTextBlock:(CDUnknownBlockType)arg3 selectBlock:(CDUnknownBlockType)arg4;
+ (id)itemWithTitle:(id)arg1 titleDescription:(id)arg2 accessibilityIdentifier:(id)arg3 detailTextBlock:(CDUnknownBlockType)arg4 selectBlock:(CDUnknownBlockType)arg5;
+ (id)itemWithTitle:(id)arg1 titleDescription:(id)arg2 trackingParams:(id)arg3 accessibilityIdentifier:(id)arg4 detailTextBlock:(CDUnknownBlockType)arg5 selectBlock:(CDUnknownBlockType)arg6;
- (void).cxx_destruct;
@property(nonatomic, getter=isInkEnabled) _Bool inkEnabled; // @synthesize inkEnabled=_inkEnabled;
@property(copy, nonatomic) NSData *trackingParams; // @synthesize trackingParams=_trackingParams;
@property(retain, nonatomic) YTIIcon *settingIcon; // @synthesize settingIcon=_settingIcon;
@property(retain, nonatomic) YTIThumbnailDetails *settingThumbnailImageDetails; // @synthesize settingThumbnailImageDetails=_settingThumbnailImageDetails;
@property(nonatomic) int settingItemId; // @synthesize settingItemId=_settingItemId;
@property(copy, nonatomic) CDUnknownBlockType switchBlock; // @synthesize switchBlock=_switchBlock;
@property(copy, nonatomic) CDUnknownBlockType disabledSelectBlock; // @synthesize disabledSelectBlock=_disabledSelectBlock;
@property(copy, nonatomic) CDUnknownBlockType selectBlock; // @synthesize selectBlock=_selectBlock;
@property(nonatomic) int indicatorIconType; // @synthesize indicatorIconType=_indicatorIconType;
@property(nonatomic) _Bool spinnerVisible; // @synthesize spinnerVisible=_spinnerVisible;
@property(nonatomic) _Bool switchVisible; // @synthesize switchVisible=_switchVisible;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) _Bool on; // @synthesize on=_on;
@property(nonatomic) _Bool hasSwitch; // @synthesize hasSwitch=_hasSwitch;
@property(nonatomic) _Bool hasCheckmark; // @synthesize hasCheckmark=_hasCheckmark;
@property(copy, nonatomic) CDUnknownBlockType detailTextBlock; // @synthesize detailTextBlock=_detailTextBlock;
@property(copy, nonatomic) NSString *accessibilityIdentifier; // @synthesize accessibilityIdentifier=_accessibilityIdentifier;
@property(copy, nonatomic) NSString *titleDescription; // @synthesize titleDescription=_titleDescription;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
@property(readonly, nonatomic) NSString *settingDetailText;
@property(nonatomic) _Bool settingEnabled;
@property(retain, nonatomic) NSString *settingSummary;
@property(retain, nonatomic) NSString *settingTitle;
- (void)setServerSideSwitch:(unsigned long long)arg1;
- (id)initWithTitle:(id)arg1 titleDescription:(id)arg2;
- (id)initWithTitle:(id)arg1 titleDescription:(id)arg2 parentResponder:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) YTICommand *disableSettingCommand;
@property(readonly, nonatomic) YTICommand *enableSettingCommand;
@property(readonly, nonatomic) _Bool hasSubSettingsRenderer;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *settingMessageWhenDisabled;
@property(readonly, nonatomic) YTIRenderer *subSettingsRenderer;
@property(readonly) Class superclass;

@end


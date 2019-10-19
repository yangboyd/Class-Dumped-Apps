//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, YTICommand, YTIRenderer, YTIThumbnailDetails;

@protocol YTSettingsItemViewModel <NSObject>
@property(nonatomic) _Bool settingEnabled;
@property(readonly, nonatomic) _Bool hasSwitch;
@property(readonly, nonatomic) int settingItemId;
@property(retain, nonatomic) NSString *settingSummary;
@property(retain, nonatomic) NSString *settingTitle;

@optional
@property(readonly, nonatomic) YTIThumbnailDetails *settingThumbnailImageDetails;
@property(readonly, nonatomic) YTICommand *disableSettingCommand;
@property(readonly, nonatomic) YTICommand *enableSettingCommand;
@property(readonly, nonatomic) YTIRenderer *subSettingsRenderer;
@property(readonly, nonatomic) _Bool hasSubSettingsRenderer;
@property(readonly, nonatomic) NSString *settingMessageWhenDisabled;
@property(readonly, nonatomic) NSString *settingDetailText;
@property(nonatomic, getter=isInkEnabled) _Bool inkEnabled;
@property(nonatomic) _Bool on;
@end


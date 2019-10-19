//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTInnerTubeCellController.h"

#import "YTSystemNotificationsObserver.h"
#import "YTUserDefaultsObserver.h"

@class NSDateComponentsFormatter, NSString, YTSettings, YTSystemNotifications;

@interface YTSettingsCellController : YTInnerTubeCellController <YTSystemNotificationsObserver, YTUserDefaultsObserver>
{
    YTSettings *_settings;
    YTSystemNotifications *_systemNotifications;
    NSDateComponentsFormatter *_dateComponentsFormatter;
}

@property(retain, nonatomic) NSDateComponentsFormatter *dateComponentsFormatter; // @synthesize dateComponentsFormatter=_dateComponentsFormatter;
@property(nonatomic) __weak YTSystemNotifications *systemNotifications; // @synthesize systemNotifications=_systemNotifications;
@property(nonatomic) __weak YTSettings *settings; // @synthesize settings=_settings;
- (void).cxx_destruct;
- (void)showDialog;
- (double)watchBreakFrequencyInSeconds;
- (id)watchBreakDetailText;
- (void)setWatchBreakEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (void)toggleWatchBreakLocalSetting:(_Bool)arg1;
- (_Bool)isAutonavOn;
- (int)autonavSettingsState;
- (void)toggleAutonavLocalSetting;
- (_Bool)handleLocalSettingSelectionIfNeeded:(_Bool)arg1;
- (_Bool)fillEntryWithLocalSetting;
- (void)valueDidChangeForKey:(id)arg1;
- (void)appDidBecomeActive:(id)arg1;
- (void)didSelectItem;
- (struct CGSize)cellSizeWithSize:(struct CGSize)arg1 safeAreaInsets:(struct UIEdgeInsets)arg2;
- (struct CGSize)cellSizeWithSize:(struct CGSize)arg1;
- (void)setCell:(id)arg1;
- (id)initWithEntry:(id)arg1 parentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


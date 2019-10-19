//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MultipleChoiceSettingsSection.h"

@class SPTSettingsLogger;
@protocol SPTInAppMessageMessageRequester, SPTPreferences, SPTProductState;

@interface StreamQualitySettingsSection : MultipleChoiceSettingsSection
{
    _Bool _dataSaverActivated;
    id <SPTInAppMessageMessageRequester> _inAppMessageRequester;
    id <SPTProductState> _productState;
    id <SPTPreferences> _preferences;
    SPTSettingsLogger *_logger;
}

+ (id)productState;
+ (void)setProductState:(id)arg1;
@property(retain, nonatomic) SPTSettingsLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) _Bool dataSaverActivated; // @synthesize dataSaverActivated=_dataSaverActivated;
@property(readonly, nonatomic) id <SPTPreferences> preferences; // @synthesize preferences=_preferences;
@property(readonly, nonatomic) __weak id <SPTProductState> productState; // @synthesize productState=_productState;
@property(readonly, nonatomic) id <SPTInAppMessageMessageRequester> inAppMessageRequester; // @synthesize inAppMessageRequester=_inAppMessageRequester;
- (void).cxx_destruct;
- (_Bool)shouldCellBeDisabledForIndex:(long long)arg1;
- (unsigned long long)indexForBitrateSetting:(long long)arg1;
- (long long)bitrateSettingForIndex:(unsigned long long)arg1;
- (id)subtitleForChoiceIndex:(long long)arg1;
- (id)titleForChoiceIndex:(long long)arg1;
- (long long)numberOfChoices;
- (id)footerText;
- (id)headerText;
- (void)selectedChoiceIndexChanged;
- (id)initWithSettingsViewController:(id)arg1 productState:(id)arg2 inAppMessageRequester:(id)arg3 preferences:(id)arg4 dataSaverActivated:(_Bool)arg5 logger:(id)arg6;

@end


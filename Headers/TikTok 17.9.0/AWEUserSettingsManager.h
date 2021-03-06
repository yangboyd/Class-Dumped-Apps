//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AWEUserSettingsManager : NSObject
{
}

+ (_Bool)shouldEnableAgeGate;
+ (_Bool)shouldEnableFTCAgeGate;
+ (_Bool)shouldShowWhatsAPPFirstWithCountryCode:(id)arg1;
+ (_Bool)shouldShowAlertWithCountryCode:(id)arg1;
+ (_Bool)shouldShowAlertWhenBindSkip:(unsigned long long)arg1;
+ (_Bool)disablePrivacyPolicyAlert;
+ (unsigned long long)fileSettingSize;
+ (_Bool)enableNewReadStrategy;
+ (_Bool)enableNewWriteStrategy;
+ (id)smsSelfSolveConfig;
+ (_Bool)syncKeyLogToTracker;
+ (long long)awemeUserStorageType;
+ (id)recommendedEmailDomains;
+ (id)ageGateInitialDate;
+ (_Bool)enableQueryPassportWhenUnlogin;
+ (long long)enableEmailVerification;
+ (_Bool)enableSystemRebind;
+ (_Bool)enableOneLogin;
+ (_Bool)musicallyFindPasswordUseAccountKit;
+ (_Bool)followPageArray;
+ (id)quickBindInWifiOrCellularArray;
+ (id)feedbackURLString;
+ (_Bool)flipChatShowLoginStatus;
+ (_Bool)enableRememberLatestLoginMethod;
+ (void)setDisableSaveLastLoginInfo:(_Bool)arg1;
+ (_Bool)disableSaveLastLoginInfo;
+ (_Bool)findPasswordEnableEmailVerify;
+ (_Bool)disableCheckLoginStateWhenSessionExpired;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCS2RBaseEventLogger : NSObject
{
}

+ (void)logBlizzardShakeToReportDataPurge:(long long)arg1;
+ (void)logBlizzardShakeToReportSettingsEnable:(_Bool)arg1;
+ (void)logBlizzardShakePromptClickedEvent:(long long)arg1;
+ (id)buildBlizzardShakeMeta:(id)arg1 isV2:(_Bool)arg2;
+ (void)logInSettingSupportExitEvent:(long long)arg1;
+ (void)logInSettingSupportItemClickedEvent:(long long)arg1;
+ (void)logInSettingReportCancelledEvent:(id)arg1 screenName:(id)arg2;
+ (void)logInSettingReportCreateEvent:(id)arg1 screenName:(id)arg2 topicName:(id)arg3 screenShotAdded:(_Bool)arg4;
+ (void)logShakeCancelEvent:(id)arg1 isV2:(_Bool)arg2 source:(long long)arg3;
+ (void)logShakeCreateEvent:(id)arg1 fromFeature:(id)arg2 isVideo:(_Bool)arg3 isV2:(_Bool)arg4;
+ (void)logShakeStartEvent:(id)arg1 isV2:(_Bool)arg2;

@end


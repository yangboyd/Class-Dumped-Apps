//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@interface IGDirectRecipientListViewConfiguration : IGValueObject <NSCopying, NSCoding>
{
}

+ (void)initialize;
+ (id)messengerRoomReshareConfigurationWithFeatureSetProvider:(id)arg1 launcherSetProvider:(id)arg2 bottomActionButtonImage:(id)arg3 bottomActionButtonTintColor:(id)arg4 roomsConfig:(id)arg5;
+ (id)messageForwardingConfigurationWithFeatureSetProvider:(id)arg1 launcherSetProvider:(id)arg2;
+ (id)effectShareConfigurationWithExperimentProvider:(id)arg1 launcherSetProvider:(id)arg2;
+ (id)genericReshareConfigurationWithExperimentProvider:(id)arg1 launcherSetProvider:(id)arg2 canShareMedia:(_Bool)arg3;
+ (id)genericReshareConfigurationWithExperimentProvider:(id)arg1 launcherSetProvider:(id)arg2;
+ (id)locationReshareConfigurationWithExperimentProvider:(id)arg1 launcherSetProvider:(id)arg2;
+ (id)commentReshareConfigurationWithExperimentProvider:(id)arg1 launcherSetProvider:(id)arg2;
+ (id)videoCallReshareConfigurationWithExperimentProvider:(id)arg1 launcherSetProvider:(id)arg2 shouldFilterOutInteropThreads:(_Bool)arg3;
+ (id)_feedReshareConfigurationWithExperimentProvider:(id)arg1 launcherSetProvider:(id)arg2 canShareMedia:(_Bool)arg3;
+ (id)igtvReshareConfigurationWithExperimentProvider:(id)arg1 launcherSetProvider:(id)arg2;
+ (id)feedReshareConfigurationWithExperimentProvider:(id)arg1 launcherSetProvider:(id)arg2;
+ (id)productReshareConfigurationWithExperimentProvider:(id)arg1 launcherSetProvider:(id)arg2;
+ (id)storyReshareConfigurationWithExperimentProvider:(id)arg1 launcherSetProvider:(id)arg2;
+ (id)liveReshareConfigurationWithExperimentProvider:(id)arg1 launcherSetProvider:(id)arg2;
+ (id)storyConfigurationWithExperimentProvider:(id)arg1 launcherSetProvider:(id)arg2 disallowExternalServiceCrossPosting:(_Bool)arg3 allowShareToCloseFriendsStory:(_Bool)arg4 shouldDisableStoriesShareTargets:(_Bool)arg5 isSendingVisualMedia:(_Bool)arg6 isSharingLiveVideo:(_Bool)arg7 showSectionHeader:(_Bool)arg8 sectionHeaderTopInsetIsCompact:(_Bool)arg9 hasBrandedContent:(_Bool)arg10 isPostingToManagedPage:(_Bool)arg11 showViewMoreButtons:(_Bool)arg12 showPresenceDigest:(_Bool)arg13 displayNameType:(long long)arg14 searchBarConfig:(id)arg15 prefersNavigationBarHidden:(_Bool)arg16;
- (id)dataSourceConfig;

@end


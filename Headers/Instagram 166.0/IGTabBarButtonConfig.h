//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGValueObject.h>

#import <InstagramAppCoreFramework/NSCoding-Protocol.h>
#import <InstagramAppCoreFramework/NSCopying-Protocol.h>

@interface IGTabBarButtonConfig : IGValueObject <NSCopying, NSCoding>
{
}

+ (void)initialize;
+ (id)shoppingConfigWithIconVariant:(long long)arg1;
+ (id)directInboxConfig;
+ (id)profileButtonConfigForMultipleUsersWithBadgeType:(unsigned long long)arg1;
+ (id)profileButtonConfigWithBadgeType:(unsigned long long)arg1 iconVariant:(long long)arg2;
+ (id)newsButtonConfigWithBadgeType:(unsigned long long)arg1 iconVariant:(long long)arg2;
+ (id)panoramaCameraButtonConfigWithBadgeType:(unsigned long long)arg1 iconVariant:(long long)arg2;
+ (id)cameraButtonConfigWithBadgeType:(unsigned long long)arg1 iconVariant:(long long)arg2;
+ (id)reelsButtonConfigWithBadgeType:(unsigned long long)arg1 iconVariant:(long long)arg2;
+ (id)videoButtonConfigWithBadgeType:(unsigned long long)arg1;
+ (id)exploreButtonConfigWithBadgeType:(unsigned long long)arg1 iconVariant:(long long)arg2;
+ (id)homeButtonConfigWithBadgeType:(unsigned long long)arg1 iconVariant:(long long)arg2;
- (id)_initWithBadgeType:(unsigned long long)arg1 iconName:(unsigned long long)arg2 highlightedIconName:(unsigned long long)arg3 accessibilityLabel:(id)arg4 accessibilityIdentifier:(id)arg5 clearsBadgeWhenSelected:(_Bool)arg6;

@end


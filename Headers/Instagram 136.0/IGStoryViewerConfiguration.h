//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGValueObject.h>

#import <InstagramAppCoreFramework/NSCoding-Protocol.h>
#import <InstagramAppCoreFramework/NSCopying-Protocol.h>

@interface IGStoryViewerConfiguration : IGValueObject <NSCopying, NSCoding>
{
}

+ (void)initialize;
+ (id)defaultConfigurationWithPushCategory:(id)arg1;
+ (id)defaultConfigurationWithResetsContentOffsetOnDisplay:(_Bool)arg1 supportsShareViaCopyLink:(_Bool)arg2 supportsShareViaGeneralShare:(_Bool)arg3 supportsShareHighlightsViaGeneralShare:(_Bool)arg4 disabledAttributionTypes:(id)arg5;
+ (id)defaultConfigurationWithResetsContentOffsetOnDisplay:(_Bool)arg1 supportsShareViaCopyLink:(_Bool)arg2 supportsShareViaGeneralShare:(_Bool)arg3 supportsShareHighlightsViaGeneralShare:(_Bool)arg4;
+ (id)defaultConfigurationWithSupportsShareViaCopyLink:(_Bool)arg1 supportsShareViaGeneralShare:(_Bool)arg2 supportsShareHighlightsViaGeneralShare:(_Bool)arg3 launchedFromStorySharingLink:(_Bool)arg4;
+ (id)defaultConfigurationWithResetsContentOffsetOnDisplay:(_Bool)arg1;
+ (id)defaultConfiguration;

@end


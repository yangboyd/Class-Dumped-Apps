//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGAudienceBlocklistViewController;

@protocol IGAudienceBlocklistViewControllerDelegate <NSObject>
- (void)audienceBlocklistViewControllerDidCancelAdvancedFacebookSharingOptions;
- (void)audienceBlocklistViewControllerDidUpdateFacebookSharingEnabled:(_Bool)arg1 automaticPreferenceUpdated:(_Bool)arg2;
- (void)audienceBlocklistViewControllerDidCancel:(IGAudienceBlocklistViewController *)arg1;
- (void)audienceBlocklistViewControllerDidSaveUserList:(IGAudienceBlocklistViewController *)arg1;
- (_Bool)audienceBlocklistViewControllerShouldShowNavigationButtons:(IGAudienceBlocklistViewController *)arg1;
- (_Bool)audienceBlocklistViewControllerShouldShowTitle:(IGAudienceBlocklistViewController *)arg1;
@end


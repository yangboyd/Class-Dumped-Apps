//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGAREffectModel, IGStoryCameraOverlayViewController, NSString;

@protocol IGStoryCameraOverlayViewControllerEffectsDelegate <NSObject>
- (void)storyCameraOverlayViewControllerDidSelectMiniGallery:(IGStoryCameraOverlayViewController *)arg1;
- (void)storyCameraOverlayViewControllerDidSelectEffect:(IGAREffectModel *)arg1;
- (void)storyCameraOverlayViewControllerDidTapAddGalleryPickerEffectMedia:(IGStoryCameraOverlayViewController *)arg1;
- (void)storyCameraOverlayViewControllerDidTapEffectNetworkConsentPill:(IGStoryCameraOverlayViewController *)arg1;
- (void)storyCameraOverlayViewController:(IGStoryCameraOverlayViewController *)arg1 didManuallyScrollToDialItemAt:(long long)arg2;
- (void)storyCameraOverlayViewController:(IGStoryCameraOverlayViewController *)arg1 didRequestRemovalOfAREffectWithID:(NSString *)arg2;
- (void)storyCameraOverlayViewControllerDialDidDeselectCurrentAREffect:(IGStoryCameraOverlayViewController *)arg1 reason:(long long)arg2;
- (void)storyCameraOverlayViewController:(IGStoryCameraOverlayViewController *)arg1 dialDidSelectAREffect:(IGAREffectModel *)arg2 atIndex:(unsigned long long)arg3 usingData:(id)arg4;
@end


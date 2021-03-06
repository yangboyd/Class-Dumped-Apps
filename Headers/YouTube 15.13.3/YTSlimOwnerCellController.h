//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTInnerTubeCellController.h>

#import "YTFormattedStringLabelDelegate-Protocol.h"
#import "YTReelResumeDataStoreObserver-Protocol.h"
#import "YTSponsorButtonDelegate-Protocol.h"
#import "YTSubscriptionServiceObserver-Protocol.h"

@class NSString, YTSubscribeSwitchController;
@protocol YTHintsConfig, YTNGWatchMetadataPanelStateResponderProvider;

@interface YTSlimOwnerCellController : YTInnerTubeCellController <YTReelResumeDataStoreObserver, YTSponsorButtonDelegate, YTSubscriptionServiceObserver, YTFormattedStringLabelDelegate>
{
    _Bool _expanded;
    _Bool _creatorSubsPromoExpanded;
    _Bool _creatorSubsPromoImpressionSent;
    YTSubscribeSwitchController *_subscribeSwitchController;
    id <YTNGWatchMetadataPanelStateResponderProvider> _ngwMetadataPanelStateProvider;
    id <YTHintsConfig> _hintsConfig;
}

- (void).cxx_destruct;
- (void)sendHintResponderEventWithHint:(id)arg1 hintTarget:(id)arg2;
- (_Bool)shouldShowHint:(id)arg1;
- (void)maybeShowSponsorButtonHint;
- (void)maybeShowSubscribeButtonHint;
- (void)updateReelAvatar;
- (_Bool)isReelAvatarRead;
- (void)willResolveReelWatchCommand:(id)arg1;
- (void)setUpResponderEventHandlers;
- (void)didTapSponsorButton:(id)arg1 fromRect:(struct CGRect)arg2 inView:(id)arg3;
- (void)subscriptionRemovedWithChannelID:(id)arg1 response:(id)arg2;
- (void)subscriptionAddedWithChannelID:(id)arg1 response:(id)arg2;
- (void)formattedStringLabel:(id)arg1 didPressNavigationEndpoint:(id)arg2 linkText:(id)arg3;
- (void)formattedStringLabel:(id)arg1 didPressURL:(id)arg2;
- (void)didTapReelChannelAvatarTarget;
- (void)didTapAvatarTarget;
- (void)userDidFinishReel;
- (void)willBecomeVisible;
- (void)cellWillBecomeVisibleWithVisibilityEventType:(int)arg1;
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


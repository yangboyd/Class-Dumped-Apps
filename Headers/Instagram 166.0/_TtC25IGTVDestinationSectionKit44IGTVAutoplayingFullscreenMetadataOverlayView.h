//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGBaseView.h>

#import <InstagramAppCoreFramework/IGCoreTextLinkHandler-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryFacepileViewDelegate-Protocol.h>

@interface _TtC25IGTVDestinationSectionKit44IGTVAutoplayingFullscreenMetadataOverlayView : IGBaseView <IGStoryFacepileViewDelegate, IGCoreTextLinkHandler>
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: viewModel
    // Error parsing type: , name: contentInsets
    // Error parsing type: , name: facepilePadding
    // Error parsing type: , name: bufferPadding
    // Error parsing type: , name: viewCountPadding
    // Error parsing type: , name: buttonSeparator
    // Error parsing type: , name: usernameButton
    // Error parsing type: , name: verifiedImageView
    // Error parsing type: , name: titleLabel
    // Error parsing type: , name: viewCountButton
    // Error parsing type: , name: facepileView
    // Error parsing type: , name: likerTextView
    // Error parsing type: , name: saveButton
    // Error parsing type: , name: overflowButton
}

- (void).cxx_destruct;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)storyFacepileView:(id)arg1 didTapProfilePictureWithUser:(id)arg2;
- (void)didTapLikerOverlayButton:(id)arg1;
- (void)didTapOverflowButton:(id)arg1;
- (void)didTapSaveButton:(id)arg1;
- (void)didTapViewCountButton:(id)arg1;
- (void)didTapUsernameButton:(id)arg1;
- (void)configureWithViewModel:(id)arg1 delegate:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


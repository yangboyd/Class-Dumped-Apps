//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <InstagramAppCoreFramework/IGProfilePictureImageViewDelegate-Protocol.h>

@class IGProfilePictureImageView, IGTVAdsCreatorViewModel, IGTapButton, NSString, UILabel;
@protocol IGTVAdsCreatorViewDelegate;

@interface IGTVAdsCreatorView : UIView <IGProfilePictureImageViewDelegate>
{
    IGTapButton *_usernameButton;
    UILabel *_subtitle;
    IGProfilePictureImageView *_profileImageView;
    IGTVAdsCreatorViewModel *_viewModel;
    UIView *_infoContainerView;
    id <IGTVAdsCreatorViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGTVAdsCreatorViewDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGSize)_usernameButtonIntrinsicContentSize;
- (void)_userNameButtonTapped;
- (void)profilePictureImageViewImageFailedToLoad:(id)arg1 withURL:(id)arg2;
- (void)profilePictureImageViewImageDidLoad:(id)arg1 profileImage:(id)arg2;
- (void)profilePictureTapped:(id)arg1;
- (void)prepareForReuse;
- (void)configureAdsCreatorViewWithCreatorViewModel:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <InstagramAppCoreFramework/IGProfilePictureImageViewDelegate-Protocol.h>

@class IGProfilePictureImageView, IGTVAutoplayingHeaderViewModel, IGTVLabelSizeButton, NSString, UIButton, UIImageView, UILabel;
@protocol IGTVAutoplayingHeaderCellDelegate;

@interface IGTVAutoplayingHeaderCell : UICollectionViewCell <IGProfilePictureImageViewDelegate>
{
    IGProfilePictureImageView *_profilePictureView;
    IGTVLabelSizeButton *_usernameButton;
    UIImageView *_verifiedImageView;
    UIButton *_overflowButton;
    UILabel *_dotSeparator;
    UILabel *_recommendationReasonLabel;
    IGTVAutoplayingHeaderViewModel *_viewModel;
    id <IGTVAutoplayingHeaderCellDelegate> _delegate;
}

+ (double)preferredHeight;
- (void).cxx_destruct;
- (void)profilePictureImageViewImageFailedToLoad:(id)arg1 withURL:(id)arg2;
- (void)profilePictureImageViewImageDidLoad:(id)arg1 profileImage:(id)arg2;
- (void)profilePictureTapped:(id)arg1;
- (id)accessibilityLabel;
- (void)_handleOverflowButton;
- (void)_handleUsernameButton;
- (_Bool)accessibilityActivate;
- (void)configureWithViewModel:(id)arg1 delegate:(id)arg2;
- (void)configureWithViewModel:(id)arg1 animated:(_Bool)arg2;
- (void)prepareForReuse;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


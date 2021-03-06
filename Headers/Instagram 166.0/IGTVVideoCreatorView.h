//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FBSharedFramework/IGCoreTextLinkHandler-Protocol.h>
#import <FBSharedFramework/IGFollowControllerDelegate-Protocol.h>
#import <FBSharedFramework/IGProfilePictureImageViewDelegate-Protocol.h>

@class IGCoreTextView, IGFollowController, IGProfilePictureImageView, IGTapButton, NSString, UIImageView, UILabel;
@protocol IGTVVideoCreatorViewDelegate;

@interface IGTVVideoCreatorView : UIView <IGCoreTextLinkHandler, IGFollowControllerDelegate, IGProfilePictureImageViewDelegate>
{
    IGProfilePictureImageView *_profileImageView;
    UIView *_infoContainerView;
    IGTapButton *_usernameButton;
    UIImageView *_verifiedBadgeImageView;
    UILabel *_dotSeparator;
    IGFollowController *_followController;
    IGCoreTextView *_detailTextView;
    UIView *_internalBadge;
    id <IGTVVideoCreatorViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGTVVideoCreatorViewDelegate> delegate; // @synthesize delegate=_delegate;
- (double)_infoContainerViewHeight;
- (struct CGSize)_usernameButtonIntrinsicContentSize;
- (void)profilePictureImageViewImageFailedToLoad:(id)arg1 withURL:(id)arg2;
- (void)profilePictureImageViewImageDidLoad:(id)arg1 profileImage:(id)arg2;
- (void)profilePictureTapped:(id)arg1;
- (void)followControllerDidDetectNewButtonState:(id)arg1;
- (void)followController:(id)arg1 buttonWasTappedWithAction:(long long)arg2;
- (void)followController:(id)arg1 didCompleteAction:(long long)arg2 success:(_Bool)arg3;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)_handleUsernameButton:(id)arg1;
- (void)configureWithViewModel:(id)arg1;
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


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitchCoreUI/TWBaseCollectionViewCell.h>

@protocol _TtP6Twitch38NotificationsFriendRequestCellDelegate_;

__attribute__((visibility("hidden")))
@interface _TtC6Twitch30NotificationsFriendRequestCell : TWBaseCollectionViewCell
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: profileImageView
    // Error parsing type: , name: displayNameLabel
    // Error parsing type: , name: confirmStatusLabel
    // Error parsing type: , name: $__lazy_storage_$_acceptFriendRequestButton
    // Error parsing type: , name: $__lazy_storage_$_declineFriendRequestButton
    // Error parsing type: , name: $__lazy_storage_$_loadingIndicator
    // Error parsing type: , name: $__lazy_storage_$_declineButtonTrailingToAcceptButtonConstraint
    // Error parsing type: , name: $__lazy_storage_$_declineButtonTrailingToContentViewConstraint
    // Error parsing type: , name: friendRequest
}

+ (double)preferredHeight;
- (void).cxx_destruct;
- (void)didTapImageView;
- (void)didTapDecline;
- (void)didTapAccept;
- (void)setState:(long long)arg1 animated:(_Bool)arg2;
- (id)initWithCoder:(id)arg1;
- (void)applyTheme:(id)arg1;
- (void)configureWithFriendRequest:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) __weak id <_TtP6Twitch38NotificationsFriendRequestCellDelegate_> delegate; // @synthesize delegate;

@end


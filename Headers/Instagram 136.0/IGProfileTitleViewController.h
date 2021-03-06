//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGBadgeInfoListener-Protocol.h>
#import <InstagramAppCoreFramework/IGFavoritesHomeViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGPartialModalSheetListener-Protocol.h>
#import <InstagramAppCoreFramework/IGSwitchUsersControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGSwitchUsersControllerDisplayDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGSwitchUsersControllerFavoritesDelegate-Protocol.h>

@class IGBadgingLogger, IGChevronTitleButton, IGPartialModalSheetViewController, IGSwitchUsersController, IGUserSession, NSString, UIViewController;
@protocol IGAccountSwitcherPresenting, IGProfileTitleViewControllerDelegate, IGSwitchUsersControllerDelegate;

@interface IGProfileTitleViewController : NSObject <IGSwitchUsersControllerDelegate, IGSwitchUsersControllerFavoritesDelegate, IGFavoritesHomeViewControllerDelegate, IGSwitchUsersControllerDisplayDelegate, IGBadgeInfoListener, IGPartialModalSheetListener>
{
    IGUserSession *_userSession;
    UIViewController *_viewController;
    id <IGAccountSwitcherPresenting> _accountSwitcherPresenter;
    _Bool _isMainProfileSurface;
    unsigned long long _entryPoint;
    _Bool _shouldShowChevron;
    _Bool _shouldShowAvatar;
    unsigned long long _badgeType;
    unsigned long long _switchUsersMode;
    _Bool _enableAddAccount;
    double _yOffset;
    NSString *_module;
    _Bool _canShowCloseFriends;
    _Bool _allowSwitchInteropInboxes;
    NSString *_title;
    NSString *_subtitle;
    IGChevronTitleButton *_titleButton;
    IGSwitchUsersController *_switchUsersController;
    IGPartialModalSheetViewController *_halfSheetViewController;
    IGBadgingLogger *_badgingLogger;
    id <IGProfileTitleViewControllerDelegate> _delegate;
    id <IGSwitchUsersControllerDelegate> _switchUserDelegate;
}

@property(nonatomic) __weak id <IGSwitchUsersControllerDelegate> switchUserDelegate; // @synthesize switchUserDelegate=_switchUserDelegate;
@property(nonatomic) __weak id <IGProfileTitleViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)badgeInfoDidChangeWithNeedsAttention:(_Bool)arg1;
- (void)favoritesHome:(id)arg1 didSaveUserList:(id)arg2;
- (void)favoritesHomeDidCancel:(id)arg1;
- (void)switchUsersControllerDidAppear:(id)arg1 users:(id)arg2;
- (void)switchUserController:(id)arg1 didTapCloseFriendsButtonForUser:(id)arg2;
- (void)switchUserController:(id)arg1 didTapFollowersButtonForUser:(id)arg2;
- (void)switchUsersController:(id)arg1 didSelectMessagingInteropAccount:(id)arg2;
- (void)switchUsersControllerDidSelectRowWithCurrentUser:(id)arg1;
- (void)switchUsersControllerDidSelectAddAccountRow:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)switchUsersController:(id)arg1 tableViewDidSelectRowWithIGDeviceBasedLoginDeferredAccount:(id)arg2;
- (void)switchUsersController:(id)arg1 tableViewDidSelectRowWithIGDeviceBasedLoginAccount:(id)arg2;
- (void)switchUsersController:(id)arg1 tableViewDidSelectRowWithUser:(id)arg2;
- (void)partialModalSheet:(id)arg1 didChangeState:(unsigned long long)arg2;
- (void)partialModalSheet:(id)arg1 willChangeState:(unsigned long long)arg2;
- (void)partialModalSheet:(id)arg1 didUpdateOffset:(double)arg2 presentationProgress:(double)arg3;
- (void)partialModalSheetDidDismiss:(id)arg1;
- (void)_showBadgeView:(_Bool)arg1 count:(long long)arg2;
- (void)_onMultipleAccountsTapped:(id)arg1;
- (void)_onTitleLabelTapped:(id)arg1;
- (void)_displaySwitchUsersTableView:(_Bool)arg1 animated:(_Bool)arg2 transitionDuration:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_displaySwitchUsersTableView:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_newMultipleAccountsTitleButtonWithTitle:(id)arg1 showLock:(_Bool)arg2 user:(id)arg3 maxWidth:(double)arg4;
- (id)_newSingleUserTitleViewWithTitle:(id)arg1 showLock:(_Bool)arg2 showVerifiedBadge:(_Bool)arg3;
- (void)willAppear;
- (void)removeTabBarOverlay;
- (void)hideSwitchControlWithCompletion:(CDUnknownBlockType)arg1;
- (void)_toggleSwitchUsersControl;
- (void)_updateFrameForTitleView:(id)arg1;
- (void)updateSelectedUser:(id)arg1;
- (void)_updateTitleViewForUser:(id)arg1;
- (id)generateTitleViewWithRightBarButtonItems:(id)arg1 leftBarButtonItems:(id)arg2 user:(id)arg3;
- (void)updateTitleForUser:(id)arg1;
- (id)initWithUserSession:(id)arg1 viewController:(id)arg2 configuration:(id)arg3 accountSwitcherPresenter:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


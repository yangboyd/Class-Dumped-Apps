//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <InstagramAppCoreFramework/IGFollowControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGFollowControllerFollowingRelationshipDelegate-Protocol.h>

@class IGFollowController, IGProfileActionBarViewModel, IGTextButton, NSDictionary, NSString, UIActivityIndicatorView, UIImageView;
@protocol IGProfileActionBarViewDelegate;

@interface IGProfileActionBarView : UIView <IGFollowControllerDelegate, IGFollowControllerFollowingRelationshipDelegate>
{
    IGProfileActionBarViewModel *_viewModel;
    NSDictionary *_actionToButtonMap;
    IGFollowController *_followController;
    IGTextButton *_chainingButton;
    UIActivityIndicatorView *_chainingButtonSpinner;
    UIImageView *_chainingButtonArrowImageView;
    _Bool _isPanoUIRefreshOn;
    double _horizontalMargin;
    _Bool _showChainingSpinner;
    id <IGProfileActionBarViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showChainingSpinner; // @synthesize showChainingSpinner=_showChainingSpinner;
@property(nonatomic) __weak id <IGProfileActionBarViewDelegate> delegate; // @synthesize delegate=_delegate;
- (double)_textButtonHeight;
- (double)_verticalPadding;
- (double)_horizontalPadding;
- (void)followControllerWantsToOpenFollowingSheet:(id)arg1;
- (void)followController:(id)arg1 didCompleteAction:(long long)arg2 success:(_Bool)arg3;
- (void)followController:(id)arg1 buttonWasTappedWithAction:(long long)arg2;
- (void)followControllerDidDetectNewButtonState:(id)arg1;
- (void)_didTapWhatsApp:(id)arg1;
- (void)_didTapCapability:(id)arg1;
- (void)_didTapInsights:(id)arg1;
- (void)_didTapDelivery:(id)arg1;
- (void)_didTapBuy:(id)arg1;
- (void)_didTapFBE:(id)arg1;
- (void)_didTapDonate:(id)arg1;
- (void)_didTapContact:(id)arg1;
- (void)_didTapShare:(id)arg1;
- (void)_didTapOverflow:(id)arg1;
- (void)_didTapAddShop:(id)arg1;
- (void)_didTapShop:(id)arg1;
- (void)_didTapInstantExperience:(id)arg1;
- (void)_didTapEmail:(id)arg1;
- (void)_didTapText:(id)arg1;
- (void)_didTapCall:(id)arg1;
- (void)_didTapMessage:(id)arg1;
- (void)_didTapSuggestedUsers:(id)arg1;
- (void)_didTapPromote:(id)arg1;
- (void)_didTapArchive:(id)arg1;
- (void)_didTapEditProfile:(id)arg1;
- (id)_genericButtonForAction:(long long)arg1 tapSelector:(SEL)arg2;
- (id)_buttonForProfileAction:(long long)arg1 user:(id)arg2 userSession:(id)arg3 showFollowBackState:(_Bool)arg4 followAttribution:(id)arg5 module:(id)arg6 loggingProvider:(id)arg7;
- (id)buttonViewForAction:(long long)arg1;
- (void)rotateChainingButton;
@property(nonatomic) _Bool chainingSelected;
- (void)configureWithViewModel:(id)arg1 user:(id)arg2 userSession:(id)arg3 showFollowBackState:(_Bool)arg4 followAttribution:(id)arg5 horizontalMargin:(double)arg6 module:(id)arg7 loggingProvider:(id)arg8;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


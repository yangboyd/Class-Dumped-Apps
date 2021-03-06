//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/BKBloksComponentController.h>

#import <InstagramAppCoreFramework/IGFollowFriendStatusListener-Protocol.h>
#import <InstagramAppCoreFramework/IGFriendStatusReceivedListener-Protocol.h>

@class IGBloksFollowButtonView, IGFollowAttributionModel, IGUser, IGUserSession, NSString;

@interface IGBloksFollowButtonComponentController : BKBloksComponentController <IGFollowFriendStatusListener, IGFriendStatusReceivedListener>
{
    IGUserSession *_session;
    IGUser *_user;
    IGBloksFollowButtonView *_followButton;
    IGFollowAttributionModel *_attributionModel;
}

@property(copy, nonatomic) IGFollowAttributionModel *attributionModel; // @synthesize attributionModel=_attributionModel;
- (void).cxx_destruct;
- (void)friendStatusReceiverForUser:(id)arg1;
- (void)friendStatusUserFailedToLoad:(id)arg1;
- (void)friendStatusUserDoesNotExist:(id)arg1;
- (void)_performLispyFunction:(id)arg1;
- (void)_updateFollowButtonState;
- (void)_showAlertForUnfollow;
- (void)_performFriendshipToggle;
- (void)_tryToggleFriendship;
- (void)_tapped;
- (void)_addTapListenerToView:(id)arg1;
- (void)_configureWithModel;
- (void)componentDidAcquireView:(id)arg1;
- (void)componentDidAcquireView:(id)arg1 withModel:(id)arg2 context:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


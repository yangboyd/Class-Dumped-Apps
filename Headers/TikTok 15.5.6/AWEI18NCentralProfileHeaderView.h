//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEI18NProfileHeaderView.h"

@class AWEGlobalTranslationSubscription, AWEProfileHeaderActionController, AWEUserNameLabel, MASConstraint, NSString, UIView;
@protocol AWEMTLiveFeedViewProtocol;

@interface AWEI18NCentralProfileHeaderView : AWEI18NProfileHeaderView
{
    _Bool _isRecommendViewShow;
    _Bool _isFirstTimeViewDidLoad;
    _Bool _isLogSent;
    _Bool _avatarLoadFailed;
    _Bool _enableGlobalTranslation;
    AWEProfileHeaderActionController *_actionController;
    AWEUserNameLabel *_verifyUserNameLabel;
    NSString *_translationRawStr;
    AWEGlobalTranslationSubscription *_subscription;
    unsigned long long _previousTranslationState;
    MASConstraint *_bioLinkViewTopConstraintToLinkAreaView;
    MASConstraint *_recommendViewTopConstraintToExtraView;
    MASConstraint *_recommendViewBottomConstraintToContainerView;
    MASConstraint *_introLabelTopConstraintToRecommendView;
    MASConstraint *_introLabelTopConstraintToContainerView;
    MASConstraint *_introLabelHeightEmptyConstraint;
    MASConstraint *_introLabelHeightConstConstraint;
    UIView<AWEMTLiveFeedViewProtocol> *_liveStaticTag;
}

@property(retain, nonatomic) UIView<AWEMTLiveFeedViewProtocol> *liveStaticTag; // @synthesize liveStaticTag=_liveStaticTag;
@property(retain, nonatomic) MASConstraint *introLabelHeightConstConstraint; // @synthesize introLabelHeightConstConstraint=_introLabelHeightConstConstraint;
@property(retain, nonatomic) MASConstraint *introLabelHeightEmptyConstraint; // @synthesize introLabelHeightEmptyConstraint=_introLabelHeightEmptyConstraint;
@property(retain, nonatomic) MASConstraint *introLabelTopConstraintToContainerView; // @synthesize introLabelTopConstraintToContainerView=_introLabelTopConstraintToContainerView;
@property(retain, nonatomic) MASConstraint *introLabelTopConstraintToRecommendView; // @synthesize introLabelTopConstraintToRecommendView=_introLabelTopConstraintToRecommendView;
@property(retain, nonatomic) MASConstraint *recommendViewBottomConstraintToContainerView; // @synthesize recommendViewBottomConstraintToContainerView=_recommendViewBottomConstraintToContainerView;
@property(retain, nonatomic) MASConstraint *recommendViewTopConstraintToExtraView; // @synthesize recommendViewTopConstraintToExtraView=_recommendViewTopConstraintToExtraView;
@property(retain, nonatomic) MASConstraint *bioLinkViewTopConstraintToLinkAreaView; // @synthesize bioLinkViewTopConstraintToLinkAreaView=_bioLinkViewTopConstraintToLinkAreaView;
@property(nonatomic) _Bool enableGlobalTranslation; // @synthesize enableGlobalTranslation=_enableGlobalTranslation;
@property(nonatomic) unsigned long long previousTranslationState; // @synthesize previousTranslationState=_previousTranslationState;
@property(retain, nonatomic) AWEGlobalTranslationSubscription *subscription; // @synthesize subscription=_subscription;
@property(copy, nonatomic) NSString *translationRawStr; // @synthesize translationRawStr=_translationRawStr;
@property(nonatomic) _Bool avatarLoadFailed; // @synthesize avatarLoadFailed=_avatarLoadFailed;
@property(nonatomic) _Bool isLogSent; // @synthesize isLogSent=_isLogSent;
- (void)setVerifyUserNameLabel:(id)arg1;
- (void)setIsFirstTimeViewDidLoad:(_Bool)arg1;
- (_Bool)isFirstTimeViewDidLoad;
- (void)setActionController:(id)arg1;
- (id)actionController;
- (_Bool)isRecommendViewShow;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)translationLoadingView:(id)arg1 requestTranslationStatus:(_Bool)arg2;
- (void)showOrHideRecommendView:(_Bool)arg1;
- (void)setIsRecommendViewShow:(_Bool)arg1;
- (void)hideRecommendViewAfterUnfollow;
- (void)showRecommendViewAfterFollow;
- (void)recommendBtnClicked;
- (void)updateFansLabel;
- (void)constructTranspondProfileCoverArray;
- (void)updateNavigationSlidingButtonView:(long long)arg1;
- (id)verifyUserNameLabel;
- (void)viewDidShow;
- (void)updateSocialLinkView;
- (void)sendMailBtnClicked;
- (void)sendEmail;
- (void)openBioUrl;
- (void)handleTapOnContent:(id)arg1;
- (void)p_updateBusinessLink;
- (void)p_updateSocialStatisticsButtons;
- (void)p_configTranslationForSignature:(id)arg1;
- (void)p_updateSignature:(id)arg1;
- (void)p_constructIntroString;
- (void)updateSignature;
- (_Bool)p_isLinkModelChanged:(id)arg1;
- (void)trackEventForBioLinkWithEventName:(id)arg1 linkType:(id)arg2;
- (void)updateBioLinkUI;
- (void)p_updateUI;
- (void)p_setupUI;
- (void)dealloc;
- (void)liveViewPlay;
- (double)headerViewHeight;
- (void)configWithUser:(id)arg1 isLogSent:(_Bool)arg2;
- (id)initWithIsCurrentUser:(_Bool)arg1 fromHomepage:(_Bool)arg2;

@end


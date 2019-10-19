//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MemberReferralLogger, MemberReferralShareViewModel, NFUIStackButton, NSArray, UIActivityIndicatorView, UIButton, UILabel, UIStackView, UIViewController;
@protocol ReferralLayoutChangeListener;

@interface MemberReferralShareView : UIView
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIButton *_termsAndConditionsButton;
    UILabel *_linkText;
    UIButton *_linkCopyButton;
    UIStackView *_shareStackView;
    UIStackView *_sharingGroup;
    UILabel *_singleShareLabel;
    UILabel *_singleShareIcon;
    UIView *_linkGroup;
    UIView *_singleShareContainer;
    UILabel *_linkShareSeparator;
    NFUIStackButton *_shareOption1;
    NFUIStackButton *_shareOption2;
    NFUIStackButton *_shareOption3;
    NFUIStackButton *_shareOption4;
    UIView *_loadingBackground;
    UILabel *_errorMessage;
    UIButton *_errorButton;
    UIActivityIndicatorView *_codeLoading;
    UIStackView *_errorContainer;
    UIView *_loadingContainer;
    MemberReferralShareViewModel *_viewModel;
    MemberReferralLogger *_referralLogger;
    UIViewController *_hostController;
    id <ReferralLayoutChangeListener> _layoutChangeListener;
    NSArray *_shareOptions;
}

+ (id)createInstanceWithViewModel:(id)arg1 inController:(id)arg2 layoutListener:(id)arg3 referralLogger:(id)arg4;
@property(retain, nonatomic) NSArray *shareOptions; // @synthesize shareOptions=_shareOptions;
@property(nonatomic) __weak id <ReferralLayoutChangeListener> layoutChangeListener; // @synthesize layoutChangeListener=_layoutChangeListener;
@property(nonatomic) __weak UIViewController *hostController; // @synthesize hostController=_hostController;
@property(retain, nonatomic) MemberReferralLogger *referralLogger; // @synthesize referralLogger=_referralLogger;
@property(retain, nonatomic) MemberReferralShareViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak UIView *loadingContainer; // @synthesize loadingContainer=_loadingContainer;
@property(nonatomic) __weak UIStackView *errorContainer; // @synthesize errorContainer=_errorContainer;
@property(nonatomic) __weak UIActivityIndicatorView *codeLoading; // @synthesize codeLoading=_codeLoading;
@property(nonatomic) __weak UIButton *errorButton; // @synthesize errorButton=_errorButton;
@property(nonatomic) __weak UILabel *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(nonatomic) __weak UIView *loadingBackground; // @synthesize loadingBackground=_loadingBackground;
@property(nonatomic) __weak NFUIStackButton *shareOption4; // @synthesize shareOption4=_shareOption4;
@property(nonatomic) __weak NFUIStackButton *shareOption3; // @synthesize shareOption3=_shareOption3;
@property(nonatomic) __weak NFUIStackButton *shareOption2; // @synthesize shareOption2=_shareOption2;
@property(nonatomic) __weak NFUIStackButton *shareOption1; // @synthesize shareOption1=_shareOption1;
@property(nonatomic) __weak UILabel *linkShareSeparator; // @synthesize linkShareSeparator=_linkShareSeparator;
@property(nonatomic) __weak UIView *singleShareContainer; // @synthesize singleShareContainer=_singleShareContainer;
@property(nonatomic) __weak UIView *linkGroup; // @synthesize linkGroup=_linkGroup;
@property(nonatomic) __weak UILabel *singleShareIcon; // @synthesize singleShareIcon=_singleShareIcon;
@property(nonatomic) __weak UILabel *singleShareLabel; // @synthesize singleShareLabel=_singleShareLabel;
@property(nonatomic) __weak UIStackView *sharingGroup; // @synthesize sharingGroup=_sharingGroup;
@property(nonatomic) __weak UIStackView *shareStackView; // @synthesize shareStackView=_shareStackView;
@property(nonatomic) __weak UIButton *linkCopyButton; // @synthesize linkCopyButton=_linkCopyButton;
@property(nonatomic) __weak UILabel *linkText; // @synthesize linkText=_linkText;
@property(nonatomic) __weak UIButton *termsAndConditionsButton; // @synthesize termsAndConditionsButton=_termsAndConditionsButton;
@property(nonatomic) __weak UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)setShareOption:(id)arg1 shareOption:(id)arg2;
- (void)setUrl:(id)arg1;
- (void)localize;
- (void)layoutSubviews;
- (void)showExposedShareOptions;
- (void)showSingleShareOption;
- (void)showError;
- (void)showLoading;
- (void)loadUrl;
- (void)errorButtonTapped:(id)arg1;
- (void)termsButtonTapped;
- (void)copyLinkTapped;
- (void)copyLinkTapped:(id)arg1;
- (void)openShareSheet:(id)arg1 appId:(id)arg2;
- (void)shareAppTapped:(id)arg1;
- (id)getCorrespondingShareOption:(id)arg1;
- (void)singleShareContainerTapped:(id)arg1;
- (_Bool)isRegularWidth;
- (_Bool)isShareOptionsVisible;
- (void)viewDidDisappear;
- (void)viewDidAppear;
- (void)configureAccessibility;
- (void)awakeFromNib;

@end


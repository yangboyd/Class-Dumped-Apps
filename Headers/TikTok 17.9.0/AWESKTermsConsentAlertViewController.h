//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "IESWebViewCommonDelegate-Protocol.h"

@class AWETermsConsentForRegisterInfoModel, IESWKWebView, NSString, NSURL, UIButton, UILabel, UIView;

@interface AWESKTermsConsentAlertViewController : UIViewController <IESWebViewCommonDelegate>
{
    _Bool _policy1Selected;
    _Bool _policy2Selected;
    _Bool _policy3Selected;
    CDUnknownBlockType _confirmBlock;
    UIView *_alertBackgroundView;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    UIView *_descContentBackgroundView;
    UIButton *_mainButton;
    UILabel *_mainTermsConsentLabel;
    UIButton *_termsConsentFirstSubButton;
    UILabel *_termsConsentFirstLabel;
    IESWKWebView *_policyContentUserURLWeb;
    UIButton *_termsConsentSecondSubButton;
    UILabel *_termsConsentSecondLabel;
    IESWKWebView *_policyContentPolicyURLWeb;
    UIButton *_nextStepButton;
    NSURL *_userURL;
    NSURL *_policyURL;
    AWETermsConsentForRegisterInfoModel *_model;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AWETermsConsentForRegisterInfoModel *model; // @synthesize model=_model;
@property(retain, nonatomic) NSURL *policyURL; // @synthesize policyURL=_policyURL;
@property(retain, nonatomic) NSURL *userURL; // @synthesize userURL=_userURL;
@property(nonatomic) _Bool policy3Selected; // @synthesize policy3Selected=_policy3Selected;
@property(nonatomic) _Bool policy2Selected; // @synthesize policy2Selected=_policy2Selected;
@property(nonatomic) _Bool policy1Selected; // @synthesize policy1Selected=_policy1Selected;
@property(retain, nonatomic) UIButton *nextStepButton; // @synthesize nextStepButton=_nextStepButton;
@property(retain, nonatomic) IESWKWebView *policyContentPolicyURLWeb; // @synthesize policyContentPolicyURLWeb=_policyContentPolicyURLWeb;
@property(retain, nonatomic) UILabel *termsConsentSecondLabel; // @synthesize termsConsentSecondLabel=_termsConsentSecondLabel;
@property(retain, nonatomic) UIButton *termsConsentSecondSubButton; // @synthesize termsConsentSecondSubButton=_termsConsentSecondSubButton;
@property(retain, nonatomic) IESWKWebView *policyContentUserURLWeb; // @synthesize policyContentUserURLWeb=_policyContentUserURLWeb;
@property(retain, nonatomic) UILabel *termsConsentFirstLabel; // @synthesize termsConsentFirstLabel=_termsConsentFirstLabel;
@property(retain, nonatomic) UIButton *termsConsentFirstSubButton; // @synthesize termsConsentFirstSubButton=_termsConsentFirstSubButton;
@property(retain, nonatomic) UILabel *mainTermsConsentLabel; // @synthesize mainTermsConsentLabel=_mainTermsConsentLabel;
@property(retain, nonatomic) UIButton *mainButton; // @synthesize mainButton=_mainButton;
@property(retain, nonatomic) UIView *descContentBackgroundView; // @synthesize descContentBackgroundView=_descContentBackgroundView;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *alertBackgroundView; // @synthesize alertBackgroundView=_alertBackgroundView;
@property(copy, nonatomic) CDUnknownBlockType confirmBlock; // @synthesize confirmBlock=_confirmBlock;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)nextButtonInGrayColor;
- (void)nextButtonInRedColor;
- (void)nextButtonClicked;
- (void)termsConsentSecondSubButtonClicked;
- (void)termsConsentFirstSubButtonClicked;
- (void)mainButtonClicked;
- (void)p_setupAlertBackgroundViewUI;
- (void)p_setupUI;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


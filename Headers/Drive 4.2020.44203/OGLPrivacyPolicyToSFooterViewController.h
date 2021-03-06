//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "OGLAnalyticsPrivacyPolicyToSDelegate-Protocol.h"
#import "OGLDrawerFooter-Protocol.h"
#import "OGLPrivacyPolicyToSFooterViewDelegate-Protocol.h"

@class NSString, OGLAnalyticsComponentContext, UIColor, UIView;
@protocol OGLAccount, OGLDrawerChildViewControllerDelegate, OGLPrivacyPolicyToSController, OGLPrivacyPolicyToSFooterView, OGLPrivacyPolicyToSFooterViewControllerDelegate;

@interface OGLPrivacyPolicyToSFooterViewController : UIViewController <OGLAnalyticsPrivacyPolicyToSDelegate, OGLPrivacyPolicyToSFooterViewDelegate, OGLDrawerFooter>
{
    _Bool _shouldLogUI;
    _Bool _dismissContainerOnButtonTap;
    _Bool _showDivider;
    id <OGLDrawerChildViewControllerDelegate> _drawerDelegate;
    id <OGLAccount> _account;
    id <OGLPrivacyPolicyToSController> _privacyPolicyController;
    OGLAnalyticsComponentContext *_componentContext;
    id <OGLPrivacyPolicyToSFooterViewControllerDelegate> _delegate;
    UIColor *_backgroundColor;
    UIColor *_titleColor;
    UIView<OGLPrivacyPolicyToSFooterView> *_contentView;
    struct UIEdgeInsets _edgeInsets;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView<OGLPrivacyPolicyToSFooterView> *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) _Bool showDivider; // @synthesize showDivider=_showDivider;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) __weak id <OGLPrivacyPolicyToSFooterViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool dismissContainerOnButtonTap; // @synthesize dismissContainerOnButtonTap=_dismissContainerOnButtonTap;
@property(copy, nonatomic) OGLAnalyticsComponentContext *componentContext; // @synthesize componentContext=_componentContext;
@property(readonly, nonatomic) id <OGLPrivacyPolicyToSController> privacyPolicyController; // @synthesize privacyPolicyController=_privacyPolicyController;
@property(retain, nonatomic) id <OGLAccount> account; // @synthesize account=_account;
@property(nonatomic) _Bool shouldLogUI; // @synthesize shouldLogUI=_shouldLogUI;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(nonatomic) __weak id <OGLDrawerChildViewControllerDelegate> drawerDelegate; // @synthesize drawerDelegate=_drawerDelegate;
- (void)traitCollectionDidChange:(id)arg1;
@property(readonly, nonatomic) double preferredHeight;
- (id)logByAccount;
- (int)buttonTextMode;
- (id)customLinkText;
- (_Bool)hasCustomLinkButton;
- (void)didTapCustomLinkForView:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)didTapTermsOfServiceForView:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)didTapPrivacyPolicyForView:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (struct CGSize)preferredContentSize;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)showViewWithBlock:(CDUnknownBlockType)arg1;
- (void)setUpContentView;
@property(nonatomic) _Bool fixedTopInset;
- (id)initWithPrivacyPolicyController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


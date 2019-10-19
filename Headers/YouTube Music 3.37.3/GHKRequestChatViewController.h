//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QTMCollectionViewController.h"

#import "GOOMultilineTextFieldDelegate-Protocol.h"
#import "QTMCollectionViewModelDelegate-Protocol.h"

@class GHKAppBar, GHKChatFetcher, GHKConfig, GHKLegalText, GHKReceiverConfig, GHKSessionDataManager, GHKUserStates, NSString, SUPMaxHeightMultilineTextFieldContentViewObject, SUPMetricsReporter, UIBarButtonItem;
@protocol GHKRequestChatViewControllerDelegate;

@interface GHKRequestChatViewController : QTMCollectionViewController <GOOMultilineTextFieldDelegate, QTMCollectionViewModelDelegate>
{
    UIBarButtonItem *_submitButton;
    double _keyboardHeight;
    id <GHKRequestChatViewControllerDelegate> _delegate;
    GHKChatFetcher *_chatFetcher;
    GHKConfig *_config;
    SUPMetricsReporter *_metricsReporter;
    GHKReceiverConfig *_receiverConfig;
    GHKSessionDataManager *_sessionDataManager;
    GHKUserStates *_userStates;
    SUPMaxHeightMultilineTextFieldContentViewObject *_issueDescriptionTextField;
    GHKLegalText *_legalText;
    GHKAppBar *_appBar;
}

+ (id)objectionRequires;
@property(retain, nonatomic) GHKAppBar *appBar; // @synthesize appBar=_appBar;
@property(retain, nonatomic) GHKLegalText *legalText; // @synthesize legalText=_legalText;
@property(retain, nonatomic) SUPMaxHeightMultilineTextFieldContentViewObject *issueDescriptionTextField; // @synthesize issueDescriptionTextField=_issueDescriptionTextField;
@property(retain, nonatomic) GHKUserStates *userStates; // @synthesize userStates=_userStates;
@property(retain, nonatomic) GHKSessionDataManager *sessionDataManager; // @synthesize sessionDataManager=_sessionDataManager;
@property(retain, nonatomic) GHKReceiverConfig *receiverConfig; // @synthesize receiverConfig=_receiverConfig;
@property(retain, nonatomic) SUPMetricsReporter *metricsReporter; // @synthesize metricsReporter=_metricsReporter;
@property(retain, nonatomic) GHKConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) GHKChatFetcher *chatFetcher; // @synthesize chatFetcher=_chatFetcher;
@property(nonatomic) __weak id <GHKRequestChatViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleRequestChatSubmissionFailure;
- (void)handleRequestChatSubmissionSuccess;
- (void)requestChatDidTapSubmitButton;
- (void)dismissKeyboard;
- (void)adjustScrollViewContentInsetForKeyboardHeight:(double)arg1;
- (void)keyboardWillBeHidden:(id)arg1;
- (void)keyboardWasShown:(id)arg1;
- (void)didTapBackButton;
- (void)didTapSubmitRequestButton;
- (void)layoutRequestChatForm;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textFieldContentSizeChanged:(id)arg1 size:(struct CGSize)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (long long)preferredStatusBarStyle;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


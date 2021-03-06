//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASTThemableViewController.h"

#import "ASTAssistantClientDelegate-Protocol.h"
#import "ASTAssistantClientExtendedDelegate-Protocol.h"
#import "ASTAudioSessionHolder-Protocol.h"
#import "ASTConsentViewControllerDelegate-Protocol.h"
#import "ASTDraggableGestureRecognizerDelegate-Protocol.h"
#import "ASTKeyboardTrackerDelegate-Protocol.h"
#import "ASTPlateContentHandler-Protocol.h"
#import "ASTPlateKeyboardInputHandler-Protocol.h"
#import "ASTPlateLinkHandler-Protocol.h"
#import "ASTPlateQueryHandler-Protocol.h"
#import "ASTSurveyFeedbackViewDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class ASTAssistantClient, ASTAssistantPlateHistoryManager, ASTAssistantPlateTransitionController, ASTAssistantPlateView, ASTAssistantPlateViewContext, ASTELMController, ASTFullScreenRecognitionView, ASTKeyboardTracker, ASTPlateActionsHandler, ASTQuery, ASTSurveyFeedbackView, NSArray, NSLayoutConstraint, NSString, UIView, UIViewController;
@protocol ASTAssistantClientExtendedDelegate, ASTAssistantPlateViewControllerDelegate, SSOIdentity;

@interface ASTAssistantPlateViewController : ASTThemableViewController <ASTAssistantClientExtendedDelegate, ASTAudioSessionHolder, ASTConsentViewControllerDelegate, ASTDraggableGestureRecognizerDelegate, ASTKeyboardTrackerDelegate, ASTPlateContentHandler, ASTPlateKeyboardInputHandler, ASTPlateLinkHandler, ASTPlateQueryHandler, ASTSurveyFeedbackViewDelegate, UIViewControllerTransitioningDelegate, ASTAssistantClientDelegate>
{
    _Bool _showsProfileImage;
    _Bool _keepsPlayingTTSOnDismiss;
    _Bool _enablesHistory;
    _Bool _fullscreenRecognitionPlateEnabled;
    _Bool _showMiniIntroduction;
    _Bool _enablesDrivingMode;
    _Bool _enablesDarkMode;
    _Bool _enablesDynamicMode;
    _Bool _inEditing;
    _Bool _inVoice;
    id <ASTAssistantPlateViewControllerDelegate> _delegate;
    ASTAssistantPlateTransitionController *_transitionController;
    long long _plateMode;
    double _dismissAreaMinimumHeight;
    id <ASTAssistantClientExtendedDelegate> _passThroughDelegate;
    ASTAssistantPlateView *_plateView;
    ASTFullScreenRecognitionView *_fullScreenRecognitionView;
    ASTAssistantPlateViewContext *_plateContext;
    ASTAssistantClient *_assistantClient;
    NSArray *_initialSuggestions;
    ASTPlateActionsHandler *_actionsHandler;
    id <SSOIdentity> _avatarIdentity;
    ASTELMController *_elementsController;
    double _topSafePadding;
    UIViewController *_consentViewController;
    NSString *_currentQueryText;
    ASTQuery *_lastSearchResultQuery;
    UIView *_dismissView;
    double _topExtraSpace;
    NSLayoutConstraint *_dismissViewHeightConstraint;
    long long _tosAndPrivacyLinksSeenTimes;
    long long _fullscreenRecognitionMiniIntroductionSeenTimes;
    ASTSurveyFeedbackView *_surveyFeedbackView;
    NSLayoutConstraint *_feedbackViewBottomConstraint;
    ASTKeyboardTracker *_keyboardTracker;
    UIView *_editingView;
    double _editingPadding;
    ASTAssistantPlateHistoryManager *_historyManager;
}

+ (id)suggestionItemsFromSuggestions:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool inVoice; // @synthesize inVoice=_inVoice;
@property(retain, nonatomic) ASTAssistantPlateHistoryManager *historyManager; // @synthesize historyManager=_historyManager;
@property(nonatomic) _Bool inEditing; // @synthesize inEditing=_inEditing;
@property(nonatomic) double editingPadding; // @synthesize editingPadding=_editingPadding;
@property(nonatomic) __weak UIView *editingView; // @synthesize editingView=_editingView;
@property(retain, nonatomic) ASTKeyboardTracker *keyboardTracker; // @synthesize keyboardTracker=_keyboardTracker;
@property(retain, nonatomic) NSLayoutConstraint *feedbackViewBottomConstraint; // @synthesize feedbackViewBottomConstraint=_feedbackViewBottomConstraint;
@property(retain, nonatomic) ASTSurveyFeedbackView *surveyFeedbackView; // @synthesize surveyFeedbackView=_surveyFeedbackView;
@property(nonatomic) long long fullscreenRecognitionMiniIntroductionSeenTimes; // @synthesize fullscreenRecognitionMiniIntroductionSeenTimes=_fullscreenRecognitionMiniIntroductionSeenTimes;
@property(nonatomic) long long tosAndPrivacyLinksSeenTimes; // @synthesize tosAndPrivacyLinksSeenTimes=_tosAndPrivacyLinksSeenTimes;
@property(retain, nonatomic) NSLayoutConstraint *dismissViewHeightConstraint; // @synthesize dismissViewHeightConstraint=_dismissViewHeightConstraint;
@property(nonatomic) double topExtraSpace; // @synthesize topExtraSpace=_topExtraSpace;
@property(retain, nonatomic) UIView *dismissView; // @synthesize dismissView=_dismissView;
@property(retain, nonatomic) ASTQuery *lastSearchResultQuery; // @synthesize lastSearchResultQuery=_lastSearchResultQuery;
@property(copy, nonatomic) NSString *currentQueryText; // @synthesize currentQueryText=_currentQueryText;
@property(retain, nonatomic) UIViewController *consentViewController; // @synthesize consentViewController=_consentViewController;
@property(nonatomic) double topSafePadding; // @synthesize topSafePadding=_topSafePadding;
@property(retain, nonatomic) ASTELMController *elementsController; // @synthesize elementsController=_elementsController;
@property(retain, nonatomic) id <SSOIdentity> avatarIdentity; // @synthesize avatarIdentity=_avatarIdentity;
@property(retain, nonatomic) ASTPlateActionsHandler *actionsHandler; // @synthesize actionsHandler=_actionsHandler;
@property(retain, nonatomic) NSArray *initialSuggestions; // @synthesize initialSuggestions=_initialSuggestions;
@property(retain, nonatomic) ASTAssistantClient *assistantClient; // @synthesize assistantClient=_assistantClient;
@property(retain, nonatomic) ASTAssistantPlateViewContext *plateContext; // @synthesize plateContext=_plateContext;
@property(retain, nonatomic) ASTFullScreenRecognitionView *fullScreenRecognitionView; // @synthesize fullScreenRecognitionView=_fullScreenRecognitionView;
@property(retain, nonatomic) ASTAssistantPlateView *plateView; // @synthesize plateView=_plateView;
@property(nonatomic) __weak id <ASTAssistantClientExtendedDelegate> passThroughDelegate; // @synthesize passThroughDelegate=_passThroughDelegate;
@property(nonatomic) _Bool enablesDynamicMode; // @synthesize enablesDynamicMode=_enablesDynamicMode;
@property(nonatomic) _Bool enablesDarkMode; // @synthesize enablesDarkMode=_enablesDarkMode;
@property(nonatomic) _Bool enablesDrivingMode; // @synthesize enablesDrivingMode=_enablesDrivingMode;
@property(nonatomic) _Bool showMiniIntroduction; // @synthesize showMiniIntroduction=_showMiniIntroduction;
@property(nonatomic) _Bool fullscreenRecognitionPlateEnabled; // @synthesize fullscreenRecognitionPlateEnabled=_fullscreenRecognitionPlateEnabled;
@property(nonatomic) double dismissAreaMinimumHeight; // @synthesize dismissAreaMinimumHeight=_dismissAreaMinimumHeight;
@property(nonatomic) long long plateMode; // @synthesize plateMode=_plateMode;
@property(nonatomic) _Bool enablesHistory; // @synthesize enablesHistory=_enablesHistory;
@property(nonatomic) _Bool keepsPlayingTTSOnDismiss; // @synthesize keepsPlayingTTSOnDismiss=_keepsPlayingTTSOnDismiss;
@property(nonatomic) _Bool showsProfileImage; // @synthesize showsProfileImage=_showsProfileImage;
@property(retain, nonatomic) ASTAssistantPlateTransitionController *transitionController; // @synthesize transitionController=_transitionController;
@property(nonatomic) __weak id <ASTAssistantPlateViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (struct UIEdgeInsets)safeInsets;
- (void)didEndEditing:(id)arg1;
- (void)willBeginEditing:(id)arg1 padding:(double)arg2;
- (struct CGRect)resolveEditingFrame;
- (double)keyboardOffsetForFrame:(struct CGRect)arg1;
- (void)animateViewWithKeyboardAnimation:(id)arg1;
- (_Bool)isValidResponderForEditing;
- (void)keyboardTracker:(id)arg1 trackedKeyboardDidHideWithAnimation:(id)arg2;
- (void)keyboardTracker:(id)arg1 trackedKeyboardWillChangeWithAnimation:(id)arg2;
- (void)keyboardTracker:(id)arg1 trackedKeyboardWillShowWithAnimation:(id)arg2;
- (void)consentViewController:(id)arg1 proceedToNext:(id)arg2;
- (void)consentViewControllerDidFinishConsentFlow:(id)arg1 withStatus:(long long)arg2;
- (void)dismissSurveyView;
- (void)setUpAutoResizingWebView;
- (void)loadProfileImage;
- (void)opaInstallationCardTapped;
- (id)currentMediaPlayer;
- (void)reissueQuery;
- (void)autoDismissIfNecessary;
- (void)dismissVoicePlate;
- (void)presentViewController:(id)arg1;
- (void)removeContentDeferred:(_Bool)arg1;
- (void)removeContentItem:(id)arg1;
- (void)showContentItem:(id)arg1;
- (void)handleClientInteraction:(id)arg1;
- (void)handleInteractionWithSuggestion:(id)arg1;
- (void)cancelCurrentQuery;
- (void)startTextQuery:(id)arg1;
- (void)startVoiceQuery;
- (void)handleLinkWithURLString:(id)arg1 userInitiated:(_Bool)arg2;
- (void)handleLinkWithURLString:(id)arg1;
- (void)interruptionWillStart;
- (unsigned long long)audioSessionCategoryOptions;
- (id)audioSessionCategoryString;
- (_Bool)shouldInterruptExternalAudioSession;
- (void)assistantClient:(id)arg1 showSmartDeviceControlWithArgs:(id)arg2;
- (void)assistantClientDidReceiveNotificationClientInput:(id)arg1;
- (void)assistantClientDidRequestUDCConsent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)assistantClient:(id)arg1 didReceiveSearchResult:(id)arg2;
- (void)assistantClient:(id)arg1 didReceiveConversationStarterSuggestions:(id)arg2;
- (void)assistantClient:(id)arg1 didRecognizePartialStableText:(id)arg2 unstableText:(id)arg3;
- (void)assistantClient:(id)arg1 didStartVoiceSearchWithGlifVolumeStream:(id)arg2;
- (void)assistantClient:(id)arg1 didEncounterError:(id)arg2;
- (void)assistantClient:(id)arg1 updateThirdPartyProvider:(id)arg2 withMenuItems:(id)arg3 exitElementID:(id)arg4;
- (void)assistantClient:(id)arg1 showSearchResultPage:(id)arg2;
- (void)assistantClient:(id)arg1 didReceiveAction:(id)arg2 suggestions:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)assistantClientDidHandoffConversation:(id)arg1;
- (void)assistantClient:(id)arg1 performClientOp:(id)arg2 withArgs:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)assistantClientDidDetectHotword:(id)arg1;
- (void)assistantClientDidFinishTTS:(id)arg1;
- (void)assistantClientWillStartTTS:(id)arg1;
- (void)assistantClientPromptAssistantAppInstall:(id)arg1;
- (void)assistantClient:(id)arg1 showCardForTimer:(id)arg2;
- (void)assistantClient:(id)arg1 renderFluidActionWithShowNativeFormArgs:(id)arg2;
- (void)assistantClient:(id)arg1 showSuggestionItems:(id)arg2;
- (void)assistantClient:(id)arg1 showRenderedCard:(id)arg2;
- (void)assistantClient:(id)arg1 showText:(id)arg2;
- (void)assistantClient:(id)arg1 willStartProcessingResponseWithEventID:(id)arg2 textResponseOnly:(_Bool)arg3 containsMediaSoundSearchClientOp:(_Bool)arg4 action:(id)arg5 containsNativeForm:(_Bool)arg6;
- (void)assistantClientDidFinishTextSearch:(id)arg1;
- (void)assistantClient:(id)arg1 willStartTextSearchWithText:(id)arg2;
- (void)assistantClientDidCancelVoiceSearch:(id)arg1;
- (void)assistantClient:(id)arg1 didFinishVoiceSearchAndWillReopenMic:(_Bool)arg2;
- (void)assistantClient:(id)arg1 didRecognizeFinalText:(id)arg2;
- (void)assistantClient:(id)arg1 logResultTypeIsSRP:(_Bool)arg2;
- (void)assistantClientWillStartVoiceSearch:(id)arg1;
- (void)assistantClientConfigureAudioSessionOnUserInteractiveThread:(id)arg1;
- (_Bool)gestureRecognizerHasFinishedDrag:(id)arg1 deltaMovement:(struct CGPoint)arg2 velocity:(struct CGPoint)arg3;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)viewSafeAreaInsetsDidChange;
- (void)dismissViewTapped:(id)arg1;
- (void)updatePlateViewPadding;
- (void)updateTopMarginConstraint;
- (id)fullscreenRecognitionMiniIntroductionSeenTimesKey;
- (void)dismissTOSAndPrivacyPolicyLinks;
- (id)tosAndPrivacyPolicyLinksSeenTimesKey;
- (void)surveyFeedbackViewShouldGetDismissed:(id)arg1;
- (void)surveyFeedbackView:(id)arg1 didSelectFeedbackOption:(unsigned long long)arg2;
- (void)showSurveyWithQuestion:(id)arg1 acknowledgement:(id)arg2 happyTipText:(id)arg3 unhappyTipText:(id)arg4;
- (void)dismissFullScreenRecognitionView;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithAssistantClient:(id)arg1 initialSuggestions:(id)arg2;
- (id)initWithAssistantClient:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


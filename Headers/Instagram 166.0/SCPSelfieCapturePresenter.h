//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/SCPSelfieCapturePresenting-Protocol.h>

@class NSArray, NSString, SCPSelfieCaptureInteractor;
@protocol SCPSelfieCaptureLogging, SCPSelfieCapturePresenterDelegate, SCPSelfieCaptureTranslationProviding, SCPSelfieCaptureUITheming;

@interface SCPSelfieCapturePresenter : NSObject <SCPSelfieCapturePresenting>
{
    _Bool _needsRestartAlignment;
    SCPSelfieCaptureInteractor *_captureInteractor;
    id <SCPSelfieCapturePresenterDelegate> _delegate;
    id <SCPSelfieCaptureTranslationProviding> _translationProvider;
    NSArray *_headDirectionPromptImageViews;
    NSArray *_headDirectionSuccessImageViews;
    NSArray *_requirementsButtonImages;
    NSArray *_requirementsExplanationImages;
    id <SCPSelfieCaptureUITheming> _uiTheme;
    id <SCPSelfieCaptureLogging> _logger;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SCPSelfieCaptureLogging> logger; // @synthesize logger=_logger;
@property(nonatomic) _Bool needsRestartAlignment; // @synthesize needsRestartAlignment=_needsRestartAlignment;
@property(readonly, nonatomic) id <SCPSelfieCaptureUITheming> uiTheme; // @synthesize uiTheme=_uiTheme;
@property(readonly, nonatomic) NSArray *requirementsExplanationImages; // @synthesize requirementsExplanationImages=_requirementsExplanationImages;
@property(readonly, nonatomic) NSArray *requirementsButtonImages; // @synthesize requirementsButtonImages=_requirementsButtonImages;
@property(readonly, nonatomic) NSArray *headDirectionSuccessImageViews; // @synthesize headDirectionSuccessImageViews=_headDirectionSuccessImageViews;
@property(readonly, nonatomic) NSArray *headDirectionPromptImageViews; // @synthesize headDirectionPromptImageViews=_headDirectionPromptImageViews;
@property(readonly, nonatomic) id <SCPSelfieCaptureTranslationProviding> translationProvider; // @synthesize translationProvider=_translationProvider;
@property(nonatomic) __weak id <SCPSelfieCapturePresenterDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) SCPSelfieCaptureInteractor *captureInteractor; // @synthesize captureInteractor=_captureInteractor;
- (void)selfieCaptureInteractor:(id)arg1 didFailWithError:(id)arg2;
- (void)selfieCaptureInteractor:(id)arg1 didChangeState:(id)arg2 toState:(id)arg3;
- (void)selfieCaptureInteractor:(id)arg1 didUpdateDiagnosticData:(id)arg2;
- (void)updateBeginFaceAlignmentRect:(struct CGRect)arg1 failFaceAlignmentRect:(struct CGRect)arg2 previewSize:(struct CGSize)arg3;
- (id)photoRequirementsPrivacyDisclaimer;
- (id)photoRequirementsSecondRequirementExplanation;
- (id)photoRequirementsSecondRequirementTitle;
- (id)photoRequirementsFirstRequirementExplanation;
- (id)photoRequirementsFirstRequirementTitle;
- (id)selfieRequirementsContentsTitle;
- (id)selfieRequirementsTitle;
- (id)captureProgressFillColor;
- (id)captureFailureColor;
- (id)captureSuccessColor;
- (id)captureActiveDarkModeColor;
- (id)captureInactiveDarkModeColor;
- (id)captureActiveLightModeColor;
- (id)captureInactiveLightModeColor;
- (id)navigationBarTintColor;
- (id)feedbackSubtitleFont;
- (id)feedbackSubtitleColor;
- (id)feedbackTitleFont;
- (id)feedbackTitleColor;
- (id)backgroundColor;
- (void)viewDidDisappear;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (id)initWithCaptureInteractor:(id)arg1 translationProvider:(id)arg2 uiTheme:(id)arg3 headDirectionPromptImageViews:(id)arg4 headDirectionSuccessImageViews:(id)arg5 requirementsButtonImages:(id)arg6 requirementsExplanationImages:(id)arg7 logger:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


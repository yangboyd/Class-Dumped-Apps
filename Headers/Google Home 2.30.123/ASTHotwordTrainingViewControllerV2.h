//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASTThemableViewController.h"

#import "ASTHotwordTrainingViewControllerProtocol-Protocol.h"
#import "ASTThemable-Protocol.h"

@class ASTSpinnerView, CAShapeLayer, GSKGlifController, GSKGlifSpeechVolumeStream, NSString, QTMButton, UIImageView, UILabel, UIScrollView, UIView;
@protocol ASTHotwordTrainingViewControllerDelegate, ASTHotwordTrainingViewV2Datasource;

@interface ASTHotwordTrainingViewControllerV2 : ASTThemableViewController <ASTThemable, ASTHotwordTrainingViewControllerProtocol>
{
    UIScrollView *_scrollView;
    UIView *_contentContainer;
    UIView *_header;
    UIView *_body;
    UIView *_footer;
    UIImageView *_assistantIconImageView;
    UILabel *_instuctionsLabel;
    UILabel *_trainingPhraseLabel;
    UIView *_circularProgressView;
    CAShapeLayer *_trackLayer;
    CAShapeLayer *_progressLayer;
    GSKGlifController *_glifController;
    GSKGlifSpeechVolumeStream *_speechVolumeStream;
    UIView *_assistantDotsView;
    UIImageView *_checkmarkImageView;
    QTMButton *_startRecordingButton;
    NSString *_outstandingVoiceOverAnnoucement;
    QTMButton *_cancelButton;
    QTMButton *_continueButton;
    ASTSpinnerView *_activityIndicatorView;
    long long _state;
    id <ASTHotwordTrainingViewV2Datasource> _dataSource;
    id <ASTHotwordTrainingViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <ASTHotwordTrainingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <ASTHotwordTrainingViewV2Datasource> dataSource; // @synthesize dataSource=_dataSource;
- (void)didTapRecordingControlButton;
- (void)didTapContinueButton;
- (void)didTapCancelButton;
- (void)reloadViews;
- (void)updateForState:(long long)arg1;
- (void)setUpConstraints;
- (void)setUpDefaultStyles;
- (void)setUpSubviews;
- (id)footerButtonInkColor;
- (id)footerButtonColor;
- (id)backgroundColor;
- (void)applyTheme:(unsigned long long)arg1;
- (void)updateTrainingPhraseAnimated:(_Bool)arg1;
- (void)listenWithAudioSource:(id)arg1;
- (void)setState:(long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)hideActivityIndicator;
- (void)showActivityIndicator;
- (void)handleUIAccessibilityAnnouncementDidFinishNotification:(id)arg1;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


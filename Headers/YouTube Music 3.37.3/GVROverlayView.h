//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GVRTransitionViewDelegate-Protocol.h"

@class GVRIdleManagementHelper, GVROrientationHelper, GVRTransitionView, NSString, QTMButton;
@protocol GVROverlayViewDelegate;

@interface GVROverlayView : UIView <GVRTransitionViewDelegate>
{
    _Bool _hidesAlignmentMarker;
    _Bool _hidesBackButton;
    _Bool _hidesCardboardButton;
    _Bool _hidesFullscreenButton;
    _Bool _hidesSettingsButton;
    _Bool _hidesTransitionView;
    _Bool _hidesWatermark;
    _Bool _disableApplicationIdleTimer;
    id <GVROverlayViewDelegate> _delegate;
    GVROrientationHelper *_orientationHelper;
    GVRTransitionView *_transitionView;
    GVRIdleManagementHelper *_idleHelper;
    UIView *_alignmentMarker;
    UIView *_overlayInsetView;
    QTMButton *_backButton;
    QTMButton *_cardboardButton;
    QTMButton *_fullscreenButton;
    UIView *_menuButtonsBackgroundView;
    UIView *_menuButtonsInsetView;
    QTMButton *_settingsButton;
    QTMButton *_watermarkButton;
    QTMButton *_helpButton;
    QTMButton *_switchButton;
    UIView *_settingsBackgroundView;
}

+ (id)appName;
@property(retain, nonatomic) UIView *settingsBackgroundView; // @synthesize settingsBackgroundView=_settingsBackgroundView;
@property(retain, nonatomic) QTMButton *switchButton; // @synthesize switchButton=_switchButton;
@property(retain, nonatomic) QTMButton *helpButton; // @synthesize helpButton=_helpButton;
@property(retain, nonatomic) QTMButton *watermarkButton; // @synthesize watermarkButton=_watermarkButton;
@property(retain, nonatomic) QTMButton *settingsButton; // @synthesize settingsButton=_settingsButton;
@property(retain, nonatomic) UIView *menuButtonsInsetView; // @synthesize menuButtonsInsetView=_menuButtonsInsetView;
@property(retain, nonatomic) UIView *menuButtonsBackgroundView; // @synthesize menuButtonsBackgroundView=_menuButtonsBackgroundView;
@property(retain, nonatomic) QTMButton *fullscreenButton; // @synthesize fullscreenButton=_fullscreenButton;
@property(retain, nonatomic) QTMButton *cardboardButton; // @synthesize cardboardButton=_cardboardButton;
@property(retain, nonatomic) QTMButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UIView *overlayInsetView; // @synthesize overlayInsetView=_overlayInsetView;
@property(retain, nonatomic) UIView *alignmentMarker; // @synthesize alignmentMarker=_alignmentMarker;
@property(retain, nonatomic) GVRIdleManagementHelper *idleHelper; // @synthesize idleHelper=_idleHelper;
@property(retain, nonatomic) GVRTransitionView *transitionView; // @synthesize transitionView=_transitionView;
@property(retain, nonatomic) GVROrientationHelper *orientationHelper; // @synthesize orientationHelper=_orientationHelper;
@property(nonatomic) _Bool disableApplicationIdleTimer; // @synthesize disableApplicationIdleTimer=_disableApplicationIdleTimer;
@property(nonatomic) _Bool hidesWatermark; // @synthesize hidesWatermark=_hidesWatermark;
@property(nonatomic) _Bool hidesTransitionView; // @synthesize hidesTransitionView=_hidesTransitionView;
@property(nonatomic) _Bool hidesSettingsButton; // @synthesize hidesSettingsButton=_hidesSettingsButton;
@property(nonatomic) _Bool hidesFullscreenButton; // @synthesize hidesFullscreenButton=_hidesFullscreenButton;
@property(nonatomic) _Bool hidesCardboardButton; // @synthesize hidesCardboardButton=_hidesCardboardButton;
@property(nonatomic) _Bool hidesBackButton; // @synthesize hidesBackButton=_hidesBackButton;
@property(nonatomic) _Bool hidesAlignmentMarker; // @synthesize hidesAlignmentMarker=_hidesAlignmentMarker;
@property(nonatomic) __weak id <GVROverlayViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)requestPermissionInSettings;
- (void)prerequestCameraPermissionForQRScan;
- (void)showQRScanViewController;
- (void)updateMenuButtonsInsetViewFrame;
- (id)menuButtonWithTitle:(id)arg1 image:(id)arg2 placedBelowView:(id)arg3;
- (void)didTapBackButton;
- (void)didTapSwitchViewerButton;
- (void)didTapSwitchButton:(id)arg1;
- (void)didTapHelpButton:(id)arg1;
- (void)didTapWatermarkButton:(id)arg1;
- (void)didTapSettingsBackgroundView:(id)arg1;
- (_Bool)accessibilityPerformEscape;
- (void)didTapSettingsButton:(id)arg1;
- (void)didTapCardboardButton:(id)arg1;
- (void)didTapBackButton:(id)arg1;
- (void)showSwitchViewerFlow;
- (void)showSettingsDialog;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)willMoveToSuperview:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 createTransitionView:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


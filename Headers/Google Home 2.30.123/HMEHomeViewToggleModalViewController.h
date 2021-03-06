//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "HMEModelObserver-Protocol.h"

@class GMDCTypographyScheme, HMEModel, HMEStatus, HMEStructureMO, HMEStructureModeButton, MDCDialogTransitionController, NSLayoutConstraint, NSString, UILabel, UIView;
@protocol AnalyticsLogger, HMEHomeViewToggleModalViewControllerDelegate;

@interface HMEHomeViewToggleModalViewController : UIViewController <HMEModelObserver>
{
    id <HMEHomeViewToggleModalViewControllerDelegate> _delegate;
    HMEStructureMO *_structureModel;
    HMEModel *_structureModeModel;
    long long _currentStructureMode;
    HMEStatus *_status;
    id <AnalyticsLogger> _analyticsLogger;
    MDCDialogTransitionController *_transitionController;
    GMDCTypographyScheme *_typographyScheme;
    UIView *_contentView;
    UILabel *_structureNameLabel;
    UIView *_buttonSetView;
    UIView *_statusView;
    UILabel *_statusLabel;
    UIView *_timeStampView;
    UILabel *_timeStampLabel;
    UIView *_errorView;
    HMEStructureModeButton *_homeButton;
    HMEStructureModeButton *_awayButton;
    NSLayoutConstraint *_contentViewWidthConstraint;
    unsigned long long _editingCounter;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long editingCounter; // @synthesize editingCounter=_editingCounter;
@property(retain, nonatomic) NSLayoutConstraint *contentViewWidthConstraint; // @synthesize contentViewWidthConstraint=_contentViewWidthConstraint;
@property(retain, nonatomic) HMEStructureModeButton *awayButton; // @synthesize awayButton=_awayButton;
@property(retain, nonatomic) HMEStructureModeButton *homeButton; // @synthesize homeButton=_homeButton;
@property(retain, nonatomic) UIView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) UILabel *timeStampLabel; // @synthesize timeStampLabel=_timeStampLabel;
@property(retain, nonatomic) UIView *timeStampView; // @synthesize timeStampView=_timeStampView;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) UIView *statusView; // @synthesize statusView=_statusView;
@property(retain, nonatomic) UIView *buttonSetView; // @synthesize buttonSetView=_buttonSetView;
@property(retain, nonatomic) UILabel *structureNameLabel; // @synthesize structureNameLabel=_structureNameLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) GMDCTypographyScheme *typographyScheme; // @synthesize typographyScheme=_typographyScheme;
@property(retain, nonatomic) MDCDialogTransitionController *transitionController; // @synthesize transitionController=_transitionController;
@property(retain, nonatomic) id <AnalyticsLogger> analyticsLogger; // @synthesize analyticsLogger=_analyticsLogger;
@property(retain, nonatomic) HMEStatus *status; // @synthesize status=_status;
@property(nonatomic) long long currentStructureMode; // @synthesize currentStructureMode=_currentStructureMode;
@property(retain, nonatomic) HMEModel *structureModeModel; // @synthesize structureModeModel=_structureModeModel;
@property(readonly, nonatomic) HMEStructureMO *structureModel; // @synthesize structureModel=_structureModel;
@property(nonatomic) __weak id <HMEHomeViewToggleModalViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)logErrorRety;
- (void)logDismiss;
- (void)logChoosingToggleMode:(long long)arg1;
- (void)logAppearImpression;
- (void)animateWindowSizeChangeWithChange:(CDUnknownBlockType)arg1;
- (struct CGSize)calculateSizeForContentView:(id)arg1 withSystemLayoutSizeFittingSize:(struct CGSize)arg2;
- (void)updateViewState;
- (void)retryButtonTapped:(id)arg1;
- (void)homeAwayButtonTapped:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)dismissAndLog;
- (void)closeButtonTapped:(id)arg1;
- (id)newTimeStampView;
- (id)newStatusView;
- (id)createButtonSetView;
- (id)newHeaderView;
- (id)newErrorView;
- (id)newContentView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)modelDidChange:(id)arg1;
@property(readonly, nonatomic) struct CGRect leftButtonFrame;
- (struct CGRect)frameInContainerBounds:(struct CGRect)arg1;
- (id)initWithSuperviewSize:(struct CGSize)arg1 currentStructureMode:(id)arg2 structureModel:(id)arg3 analyticsLogger:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


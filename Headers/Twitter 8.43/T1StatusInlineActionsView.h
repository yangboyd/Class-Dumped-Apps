//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <T1Twitter/T1InlineActionButtonDelegate-Protocol.h>
#import <T1Twitter/T1StatusViewInlineActions-Protocol.h>

@class NSMutableArray, NSNumber, NSString, T1StatusLiveEngagementManager, TFNTwitterAccount, UIColor;
@protocol T1StatusInlineActionsViewDelegate, T1StatusViewModel;

@interface T1StatusInlineActionsView : UIView <T1StatusViewInlineActions, T1InlineActionButtonDelegate>
{
    id <T1StatusViewModel> _viewModel;
    unsigned long long _options;
    TFNTwitterAccount *_account;
    id <T1StatusInlineActionsViewDelegate> _delegate;
    T1StatusLiveEngagementManager *_livePipelineTweetManager;
    UIColor *_overrideTintColor;
    NSNumber *_overrideSize;
    NSNumber *_overrideStrength;
    unsigned long long _displayType;
    unsigned long long _displayTextOptions;
    NSMutableArray *_inlineActionButtons;
}

+ (id)_t1_inlineActionViewClassesForViewModel:(id)arg1 options:(unsigned long long)arg2 account:(id)arg3;
+ (double)_t1_heightForViewModel:(id)arg1 options:(unsigned long long)arg2 displayType:(unsigned long long)arg3 account:(id)arg4;
+ (struct CGSize)sizeForViewModel:(id)arg1 options:(unsigned long long)arg2 displayType:(unsigned long long)arg3 account:(id)arg4 maximumWidth:(double)arg5;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *inlineActionButtons; // @synthesize inlineActionButtons=_inlineActionButtons;
@property(readonly, nonatomic) unsigned long long displayTextOptions; // @synthesize displayTextOptions=_displayTextOptions;
@property(readonly, nonatomic) unsigned long long displayType; // @synthesize displayType=_displayType;
@property(retain, nonatomic) NSNumber *overrideStrength; // @synthesize overrideStrength=_overrideStrength;
@property(retain, nonatomic) NSNumber *overrideSize; // @synthesize overrideSize=_overrideSize;
@property(retain, nonatomic) UIColor *overrideTintColor; // @synthesize overrideTintColor=_overrideTintColor;
@property(nonatomic) __weak T1StatusLiveEngagementManager *livePipelineTweetManager; // @synthesize livePipelineTweetManager=_livePipelineTweetManager;
@property(nonatomic) __weak id <T1StatusInlineActionsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) id <T1StatusViewModel> viewModel; // @synthesize viewModel=_viewModel;
- (void)didLongPressInlineActionButton:(id)arg1;
- (_Bool)isLongPressEnabledForInlineActionButton:(id)arg1;
- (void)didTapInlineActionButton:(id)arg1;
- (id)calculatedLayoutMetrics;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_t1_layoutInlineActionButtonsTweetDetails;
- (id)_t1_visibleInlineActionButtonsForMaximumWidth:(double)arg1 buttonWidthCalculator:(CDUnknownBlockType)arg2;
- (void)_t1_layoutInlineActionButtonsAtOrigin:(struct CGPoint)arg1 forContentWidth:(double)arg2 buttonWidthCalculator:(CDUnknownBlockType)arg3 buttonAlignmentCalculator:(CDUnknownBlockType)arg4 minimumSpacing:(double)arg5 maximumSpacing:(double)arg6 shouldAddRightSidePadding:(_Bool)arg7;
- (void)_t1_layoutInlineActionButtons;
- (void)_t1_adjustInlineActionButtonTouchInsets;
- (void)layoutSubviews;
- (void)enumerateInlineActionsUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)isButtonEnabledForDisabledEngagementEducationForType:(unsigned long long)arg1;
- (id)viewForInlineActionWithType:(unsigned long long)arg1;
@property(readonly, nonatomic) UIView *containerView;
- (void)_t1_addInlineActionViewsForViewModel:(id)arg1 options:(unsigned long long)arg2 account:(id)arg3;
- (void)updateViewModel:(id)arg1 animated:(_Bool)arg2;
- (void)_t1_updateContent:(_Bool)arg1;
- (void)statusDidUpdate:(_Bool)arg1;
- (void)setViewModel:(id)arg1 options:(unsigned long long)arg2 displayType:(unsigned long long)arg3 displayTextOptions:(unsigned long long)arg4 account:(id)arg5;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


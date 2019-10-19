//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCShakeToReportDelegate-Protocol.h"

@class NSString, SCGradientView, SCSendConfirmationView, SCSendSuggestionView, SCSendToPreviewPopupView, UICollectionView, UIImageView;

@interface SCSendToView : UIView <SCShakeToReportDelegate>
{
    double _bottomOffset;
    double _friendsTableIndexViewBottomOffset;
    double _friendsTableIndexViewTopOffset;
    UIView *_indexView;
    SCGradientView *_gradientView;
    unsigned long long _sendToViewStyle;
    SCSendConfirmationView *_sendConfirmationView;
    SCSendSuggestionView *_sendSuggestionView;
    SCSendToPreviewPopupView *_sendPreviewPopupView;
    UIImageView *_backgroundImagePreviewView;
    _Bool _usingSendToScrollView;
    UICollectionView *_contentCollectionView;
    double _keyboardHeight;
    struct UIEdgeInsets _layoutInset;
}

@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(nonatomic) struct UIEdgeInsets layoutInset; // @synthesize layoutInset=_layoutInset;
@property(readonly, nonatomic) UICollectionView *contentCollectionView; // @synthesize contentCollectionView=_contentCollectionView;
- (void).cxx_destruct;
- (void)updateConfirmationSubtext:(id)arg1 visible:(_Bool)arg2;
- (id)defaultProjectNameV2;
- (struct CGRect)_suggestionViewFrame;
- (struct CGRect)_confirmationViewFrame;
- (id)_lastCell;
- (_Bool)_showScroll;
- (double)_confirmationViewBottomInset;
- (double)_confirmationViewHeight;
- (void)_setSuggestionViewVisibility;
- (void)_setConfirmationViewVisibility;
- (void)_updateSuggestionViewFrame:(struct CGRect)arg1 contentBottomInset:(double)arg2;
- (void)_updateConfirmationViewFrame:(struct CGRect)arg1 contentBottomInset:(double)arg2;
- (void)_animateSuggestionView:(CDUnknownBlockType)arg1;
- (void)_animateConfirmationView;
- (long long)_totalSelectionCount:(id)arg1;
- (double)_friendsIndexTopOffset;
- (void)_updateFriendsTableIndexFrame;
- (_Bool)sendConfirmationViewContainsTouch:(id)arg1;
- (void)addListener:(id)arg1;
- (void)clearSuggestionView;
- (void)removeSubViews;
- (void)fadeoutSubViews;
- (id)selectedMischiefs;
- (void)setPreviewBackgrounImage:(id)arg1;
- (void)setPreviewImage:(id)arg1;
- (void)hideScrollbar:(_Bool)arg1;
- (void)updateConfirmationViewWithAnimationDuration:(double)arg1 animationCurve:(long long)arg2;
- (void)updateWithConfirmationViewModel:(id)arg1 suggestionViewModel:(id)arg2 selectedRecipientIds:(id)arg3 orderedItemIds:(id)arg4;
- (void)updateWithConfirmationViewModel:(id)arg1 suggestionViewModel:(id)arg2 selectedRecipientIds:(id)arg3;
- (void)setSuggestionViewDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)layoutSubviews;
- (id)initWithIndexView:(id)arg1 confirmationViewConfig:(id)arg2 sendToViewStyle:(unsigned long long)arg3 shouldEnableV11Theme:(_Bool)arg4 usingSendToScrollView:(_Bool)arg5;
- (id)initWithIndexView:(id)arg1 confirmationViewConfig:(id)arg2 usingSendToScrollView:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASCollectionView.h"

#import "YTCellActionConfirmationCollectionViewProtocol-Protocol.h"
#import "YTPageStyling-Protocol.h"
#import "YTScrollBubbleCollectionViewProtocol-Protocol.h"

@class NSString, QTMActivityIndicator, UICollectionViewCell, UIColor, YTScrollBubbleView;
@protocol YTPageStyling, YTScrollBubbleViewDelegate;

@interface YTAsyncCollectionView : ASCollectionView <YTCellActionConfirmationCollectionViewProtocol, YTScrollBubbleCollectionViewProtocol, YTPageStyling>
{
    unsigned long long _layoutSubviewsCount;
    QTMActivityIndicator *_activityIndicator;
    YTScrollBubbleView *_scrollBubbleView;
    UIColor *_originalBackgroundColor;
    UICollectionViewCell *_cellInConfirmationMode;
    long long _pageStyle;
    _Bool _inActionConfirmationMode;
    _Bool _preventContentOffsetAutoAdjust;
    _Bool _shouldScrollInConfirmationMode;
    id <YTScrollBubbleViewDelegate> _scrollBubbleViewDelegate;
    UIColor *_darkBackgroundColor;
    id <YTPageStyling> _pageStylingDelegate;
}

@property(nonatomic) _Bool shouldScrollInConfirmationMode; // @synthesize shouldScrollInConfirmationMode=_shouldScrollInConfirmationMode;
@property(nonatomic) __weak id <YTPageStyling> pageStylingDelegate; // @synthesize pageStylingDelegate=_pageStylingDelegate;
@property(retain, nonatomic) UIColor *darkBackgroundColor; // @synthesize darkBackgroundColor=_darkBackgroundColor;
@property(nonatomic) _Bool preventContentOffsetAutoAdjust; // @synthesize preventContentOffsetAutoAdjust=_preventContentOffsetAutoAdjust;
@property(nonatomic) __weak id <YTScrollBubbleViewDelegate> scrollBubbleViewDelegate; // @synthesize scrollBubbleViewDelegate=_scrollBubbleViewDelegate;
@property(readonly, nonatomic) _Bool inActionConfirmationMode; // @synthesize inActionConfirmationMode=_inActionConfirmationMode;
- (void).cxx_destruct;
- (void)createActivityIndicatorIfNeeded;
- (void)updateScrollBubbleViewSizeAndFrame;
- (double)positionYBetweenFirstAndSecondCell;
- (void)didTapScrollBubbleViewAction;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (_Bool)touchesCellInConfirmationModeAtPoint:(struct CGPoint)arg1;
- (void)didFinishAnimationToExitConfirmationModeWithCell:(id)arg1;
- (void)didFinishAnimationToEnterConfirmationModeWithCell:(id)arg1;
- (void)exitActionConfirmationModeWithCell:(id)arg1;
- (void)enterActionConfirmationModeWithCell:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)touchesShouldCancelInContentView:(id)arg1;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (_Bool)isLayingOutSubviews;
- (void)layoutSubviews;
- (_Bool)isScrollBubbleActive;
- (void)hideScrollBubble;
- (void)showScrollBubbleWithRenderer:(id)arg1;
- (void)setActivityIndicatorVisible:(_Bool)arg1;
- (void)setupSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


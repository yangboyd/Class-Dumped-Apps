//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <T1Twitter/T1LayoutableStatusView-Protocol.h>
#import <T1Twitter/T1StatusViewEventHandler-Protocol.h>
#import <T1Twitter/TFNComposableViewHost-Protocol.h>
#import <T1Twitter/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, T1QuotedStatusErrorView, T1StatusLiveEngagementManager, T1StatusViewAccessibility, T1StatusViewCombinedViewModel, TFNComposableViewSet, TFNReusableViewCache, TFNTappableHighlightView, TFNTwitterAccount, TFSTwitterScribeContext;
@protocol T1AutoplayViewContainer, T1BasicStatusView, T1CardViewDelegate, T1StatusViewEventHandler, T1StatusViewInlineActions, T1StatusViewInlineImages, T1StatusViewLayoutState, T1StatusViewModel, TFSTwitterScribableItem;

@interface T1QuotedStandardStatusView : UIView <TFNComposableViewHost, T1StatusViewEventHandler, UIGestureRecognizerDelegate, T1LayoutableStatusView>
{
    T1StatusViewCombinedViewModel *_viewModel;
    T1StatusViewAccessibility *_accessibility;
    _Bool _hasURL;
    id <T1StatusViewEventHandler> _eventHandler;
    TFSTwitterScribeContext *_scribeContext;
    id <TFSTwitterScribableItem> _scribableItem;
    TFNComposableViewSet *_viewSet;
    double _canvasWidth;
    unsigned long long _conversationConnectorType;
    id <T1CardViewDelegate> _cardViewDelegate;
    UIView *_visibleAutoTranslateBodyView;
    UIView *_visibleTranslateTweetView;
    UIView *_visibleInlineActionsView;
    UIView *_visibleInlineReplyView;
    TFNReusableViewCache *_reusableViewCache;
    unsigned long long _displayType;
    CDUnknownBlockType _tapActionBlock;
    CDUnknownBlockType _longPressActionBlock;
    CDUnknownBlockType _statusViewEventHandlingBlock;
    T1QuotedStatusErrorView *_errorView;
    TFNTappableHighlightView *_highlightView;
}

+ (id)_t1_viewAdapterSetWithMaxWidth:(double)arg1;
+ (unsigned long long)_t1_displayTextOptionsForViewModel:(id)arg1 options:(unsigned long long)arg2 account:(id)arg3 attachmentType:(unsigned long long)arg4;
+ (unsigned long long)defaultStatusOptionsForViewModel:(id)arg1 account:(id)arg2 options:(unsigned long long)arg3 displayType:(unsigned long long)arg4;
+ (id)layoutStateGenerator;
- (void).cxx_destruct;
@property(retain, nonatomic) TFNTappableHighlightView *highlightView; // @synthesize highlightView=_highlightView;
@property(retain, nonatomic) T1QuotedStatusErrorView *errorView; // @synthesize errorView=_errorView;
@property(copy, nonatomic) CDUnknownBlockType statusViewEventHandlingBlock; // @synthesize statusViewEventHandlingBlock=_statusViewEventHandlingBlock;
@property(copy, nonatomic) CDUnknownBlockType longPressActionBlock; // @synthesize longPressActionBlock=_longPressActionBlock;
@property(copy, nonatomic) CDUnknownBlockType tapActionBlock; // @synthesize tapActionBlock=_tapActionBlock;
@property(readonly, nonatomic) unsigned long long displayType; // @synthesize displayType=_displayType;
@property(retain, nonatomic) TFNReusableViewCache *reusableViewCache; // @synthesize reusableViewCache=_reusableViewCache;
@property(nonatomic) unsigned long long conversationConnectorType; // @synthesize conversationConnectorType=_conversationConnectorType;
@property(nonatomic) double canvasWidth; // @synthesize canvasWidth=_canvasWidth;
@property(readonly, nonatomic) TFNComposableViewSet *viewSet; // @synthesize viewSet=_viewSet;
@property(readonly, nonatomic) id <TFSTwitterScribableItem> scribableItem; // @synthesize scribableItem=_scribableItem;
@property(copy, nonatomic) TFSTwitterScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
@property(nonatomic) __weak id <T1StatusViewEventHandler> eventHandler; // @synthesize eventHandler=_eventHandler;
- (void)_t1_recognizerLongPressAction:(id)arg1;
- (void)_t1_recognizerSingleTapAction:(id)arg1;
- (void)_t1_pressedStateDidChange:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_t1_setupErrorView;
- (void)_t1_setupViewBorder:(id)arg1;
- (void)_t1_updateAccessibility:(id)arg1;
- (void)_t1_applyViewModelUpdate:(id)arg1;
- (void)_t1_updateAccessibilityValue;
- (id)_t1_viewSetUpdatesWithInfo:(id)arg1;
- (void)_t1_onViewModelUpdate:(id)arg1;
- (_Bool)_t1_updateLayoutState;
- (id)calculatedLayoutMetrics;
- (struct CGSize)sizeWithLayoutMetrics:(id)arg1;
@property(nonatomic) _Bool shouldPauseLivePipelineUpdates;
@property(nonatomic) __weak T1StatusLiveEngagementManager *livePipelineTweetManager;
@property(readonly, nonatomic) id <T1StatusViewInlineActions> inlineActions;
@property(readonly, nonatomic) id <T1StatusViewInlineImages> inlineImages;
@property(readonly, nonatomic) id <T1AutoplayViewContainer> autoplayPlayerContainer;
@property(readonly, nonatomic) unsigned long long secondaryAttachmentType;
@property(readonly, nonatomic) unsigned long long attachmentType;
@property(readonly, nonatomic) UIView<T1BasicStatusView> *mediaForwardStatusView;
@property(readonly, nonatomic) UIView *visibleTweetstormIndicatorView;
@property(readonly, nonatomic) UIView *visibleInlineReplyView; // @synthesize visibleInlineReplyView=_visibleInlineReplyView;
@property(readonly, nonatomic) UIView *visibleInlineActionsView; // @synthesize visibleInlineActionsView=_visibleInlineActionsView;
@property(readonly, nonatomic) UIView *visibleTranslateTweetView; // @synthesize visibleTranslateTweetView=_visibleTranslateTweetView;
@property(readonly, nonatomic) UIView *visibleAutoTranslateBodyView; // @synthesize visibleAutoTranslateBodyView=_visibleAutoTranslateBodyView;
@property(readonly, nonatomic) UIView<T1BasicStatusView> *visibleQuotedStatusView;
@property(readonly, nonatomic) UIView *visibleCardForwardView;
@property(readonly, nonatomic) UIView *visibleMediaForwardView;
@property(readonly, nonatomic) UIView *visibleBodyTextView;
@property(readonly, nonatomic) UIView *visibleConversationContextView;
@property(readonly, nonatomic) UIView *visibleAuthorView;
@property(readonly, nonatomic) UIView *visibleAvatarView;
- (void)updateTimestamp;
@property(readonly, nonatomic) TFNTwitterAccount *account;
@property(readonly, nonatomic) unsigned long long options;
@property(readonly, nonatomic) id <T1StatusViewModel> viewModel;
- (void)unsetViewModelForView:(id)arg1;
- (void)setViewModel:(id)arg1 options:(unsigned long long)arg2 account:(id)arg3;
- (id)handleStatusViewEvent:(id)arg1;
- (id)previewConfigurationForLocation:(struct CGPoint)arg1;
- (_Bool)tfn_terminatesInvalidateIntrinsicContentSizeRecursion;
- (void)invalidateIntrinsicContentSize;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)openURL;
@property(readonly, nonatomic) _Bool hasURL; // @synthesize hasURL=_hasURL;
@property(readonly, nonatomic) __weak id <T1CardViewDelegate> cardViewDelegate; // @synthesize cardViewDelegate=_cardViewDelegate;
- (void)_t1_updateViewAdaptersWithMaxWidth:(double)arg1;
@property(retain, nonatomic) id <T1StatusViewLayoutState> layoutState;
- (id)initWithDisplayType:(unsigned long long)arg1 maxWidth:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


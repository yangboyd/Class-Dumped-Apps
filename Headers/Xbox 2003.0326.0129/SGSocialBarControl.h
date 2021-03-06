//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XBXView.h"

@class UIButton, UIView, XBXDataContext;
@protocol SGSocialBarDataContext, SGSocialControlDelegate;

@interface SGSocialBarControl : XBXView
{
    _Bool _collapseLabelsWhenHidden;
    id <SGSocialControlDelegate> _delegate;
    UIButton *_likeButton;
    UIButton *_likeLabelButton;
    UIButton *_commentButton;
    UIButton *_commentLabelButton;
    UIButton *_shareButton;
    UIButton *_shareLabelButton;
    UIButton *_moreActionButton;
    UIView *_container;
}

@property(retain, nonatomic) UIView *container; // @synthesize container=_container;
@property(nonatomic) __weak UIButton *moreActionButton; // @synthesize moreActionButton=_moreActionButton;
@property(retain, nonatomic) UIButton *shareLabelButton; // @synthesize shareLabelButton=_shareLabelButton;
@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) UIButton *commentLabelButton; // @synthesize commentLabelButton=_commentLabelButton;
@property(retain, nonatomic) UIButton *commentButton; // @synthesize commentButton=_commentButton;
@property(retain, nonatomic) UIButton *likeLabelButton; // @synthesize likeLabelButton=_likeLabelButton;
@property(retain, nonatomic) UIButton *likeButton; // @synthesize likeButton=_likeButton;
@property(nonatomic) _Bool collapseLabelsWhenHidden; // @synthesize collapseLabelsWhenHidden=_collapseLabelsWhenHidden;
@property(nonatomic) __weak id <SGSocialControlDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (double)heightForContext:(id)arg1;
@property(readonly, nonatomic) double contentHeight;
- (_Bool)canReportPost;
- (_Bool)canDeletePost;
- (_Bool)canHideAllPosts;
- (_Bool)canHidePost;
- (_Bool)canPinPost;
- (void)updateSocialButton:(id)arg1 ofType:(long long)arg2 forState:(long long)arg3;
- (void)updateSocialButtons;
- (void)updateMoreActionButton;
- (void)prepareForReuse;
- (void)onDataContextReportControlDataContextChanged;
- (void)onDataContextTrashControlDataContextChanged;
- (void)onDataContextShareControlDataContextIconStateChanged;
- (void)onDataContextShareControlDataContextCountChanged;
- (void)onDataContextShareControlDataContextChanged;
- (void)onDataContextCommentControlDataContextCountChanged;
- (void)onDataContextCommentControlDataContextChanged;
- (void)onDataContextLikeControlDataContextCountChanged;
- (void)onDataContextLikeControlDataContextChanged;
- (void)xbxDelayedDataContextUpdateCallback;
- (void)updateDataContext:(id)arg1;
- (void)onDataContextCurrentUserParticipatedChanged;
- (void)tearDownObservers;
- (void)setupObservers;
- (void)onSocialItemDeletedNotification:(id)arg1;
- (void)onSocialSharePostedNotification:(id)arg1;
- (void)onSocialCommentPostedNotification:(id)arg1;
- (void)moreActionButtonPressed:(id)arg1;
- (void)commentLabelButtonPressed:(id)arg1;
- (void)commentButtonPressed:(id)arg1;
- (void)shareLabelButtonPressed:(id)arg1;
- (void)shareButtonPressed:(id)arg1;
- (void)likeLabelButtonPressed:(id)arg1;
- (void)likeButtonPressed:(id)arg1;
- (id)getUserColor;
- (void)socialBarNoopTap:(id)arg1;
- (void)hideButtonsForCaptures;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)accessibilityLabel;

// Remaining properties
@property(retain, nonatomic) XBXDataContext<SGSocialBarDataContext> *dataContext; // @dynamic dataContext;

@end


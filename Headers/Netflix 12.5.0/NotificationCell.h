//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "MenuListItemDisplayProtocol-Protocol.h"

@class IconButton3, NFUILabel, NFUINotification, NSLayoutConstraint, NSString, PlayButton, UIImageView, UIStackView, UIView;

@interface NotificationCell : UITableViewCell <MenuListItemDisplayProtocol>
{
    _Bool _isVariableHeight;
    NFUINotification *_notification;
    unsigned long long _indicatorSpacing;
    NFUILabel *_headerLabel;
    NFUILabel *_bodyLabel;
    NFUILabel *_dateLabel;
    UIView *_indicatorView;
    UIStackView *_stackLabelContainer;
    UIImageView *_artImageView;
    PlayButton *_playButton;
    NSLayoutConstraint *_stackLabelContainerTrailing;
    NSLayoutConstraint *_stackLabelContainerTop;
    NSLayoutConstraint *_stackLabelContainerBottom;
    UIView *_imageContainerView;
    NSLayoutConstraint *_indicatorLeadingConstraint;
    NSLayoutConstraint *_indicatorTrailingConstraint;
    IconButton3 *_myListButton;
    id _viewModel;
}

@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) IconButton3 *myListButton; // @synthesize myListButton=_myListButton;
@property(nonatomic) __weak NSLayoutConstraint *indicatorTrailingConstraint; // @synthesize indicatorTrailingConstraint=_indicatorTrailingConstraint;
@property(nonatomic) __weak NSLayoutConstraint *indicatorLeadingConstraint; // @synthesize indicatorLeadingConstraint=_indicatorLeadingConstraint;
@property(nonatomic) __weak UIView *imageContainerView; // @synthesize imageContainerView=_imageContainerView;
@property(nonatomic) __weak NSLayoutConstraint *stackLabelContainerBottom; // @synthesize stackLabelContainerBottom=_stackLabelContainerBottom;
@property(nonatomic) __weak NSLayoutConstraint *stackLabelContainerTop; // @synthesize stackLabelContainerTop=_stackLabelContainerTop;
@property(nonatomic) __weak NSLayoutConstraint *stackLabelContainerTrailing; // @synthesize stackLabelContainerTrailing=_stackLabelContainerTrailing;
@property(nonatomic) __weak PlayButton *playButton; // @synthesize playButton=_playButton;
@property(nonatomic) __weak UIImageView *artImageView; // @synthesize artImageView=_artImageView;
@property(nonatomic) __weak UIStackView *stackLabelContainer; // @synthesize stackLabelContainer=_stackLabelContainer;
@property(nonatomic) __weak UIView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(nonatomic) __weak NFUILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(nonatomic) __weak NFUILabel *bodyLabel; // @synthesize bodyLabel=_bodyLabel;
@property(nonatomic) __weak NFUILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
@property(nonatomic) unsigned long long indicatorSpacing; // @synthesize indicatorSpacing=_indicatorSpacing;
@property(nonatomic) _Bool isVariableHeight; // @synthesize isVariableHeight=_isVariableHeight;
@property(retain, nonatomic) NFUINotification *notification; // @synthesize notification=_notification;
- (void).cxx_destruct;
- (void)markNotificationAsReadIfNeeded;
- (void)playVideo:(id)arg1;
- (void)myListButtonPressed:(id)arg1;
- (void)configureMyListButton;
- (void)configureWithViewModel:(id)arg1;
- (void)layoutSubviews;
- (void)markAsRead:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateIndicatorViewAnimated;
- (void)updateIndicatorView;
- (void)applyShadowsToLayer:(id)arg1;
- (id)shadowLayerWithFrame:(struct CGRect)arg1;
- (void)prepareForReuse;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


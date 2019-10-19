//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "NFUIImageCarouselViewDelegate-Protocol.h"
#import "NFUIMiniPlayerDelegate-Protocol.h"
#import "NFUIPlayerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NFUICornerGradientView, NFUIFocusDimOverlay, NFUIIconButton, NFUIImageCarouselView, NFUILabel, NFUIListButton, NFUIMiniPlayerViewController, NFUIStylizedLabel, NFUITitleTreatmentView, NFUIUpdatesEntity, NFUIUpdatesTagsView, NFUIUpdatesViewModel, NSLayoutConstraint, NSString, UIActivityIndicatorView, UIButton, UIView;
@protocol ViewControllerOverContextDelegateProtocol><NFUIUpdatesTableViewCellDelegate;

@interface NFUIUpdatesTableViewCell : UITableViewCell <UIGestureRecognizerDelegate, NFUIMiniPlayerDelegate, NFUIImageCarouselViewDelegate, NFUIPlayerDelegate>
{
    id <ViewControllerOverContextDelegateProtocol><NFUIUpdatesTableViewCellDelegate> _delegate;
    NFUIMiniPlayerViewController *_miniPlayerViewController;
    NSLayoutConstraint *_shareButtonWidthConstraint;
    NFUIImageCarouselView *_imageCarouselView;
    NFUILabel *_postSubtitleLabel;
    NFUILabel *_postTextLabel;
    NFUILabel *_postTitleLabel;
    NFUIStylizedLabel *_categoryLabel;
    NFUITitleTreatmentView *_titleTreatmentView;
    NFUIListButton *_btnMyList;
    NFUIIconButton *_btnSharing;
    UIButton *_btnPlay;
    NFUICornerGradientView *_cornerGradientView;
    UIActivityIndicatorView *_loadingView;
    NFUIUpdatesTagsView *_tagsView;
    UIView *_containerView;
    NSLayoutConstraint *_carouselViewBottomConstraint;
    NFUIUpdatesEntity *_entity;
    NFUIUpdatesViewModel *_model;
    NSString *_playerId;
    UIView *_playerContainer;
    NSLayoutConstraint *_imgContainerHeight;
    NSLayoutConstraint *_playerContainerHeightConstraint;
    NFUIListButton *_playerListButton;
    NFUIIconButton *_playerShareButton;
    NFUIFocusDimOverlay *_focusOverlay;
    NSLayoutConstraint *_tagsViewHeioghtConstraint;
}

@property(nonatomic) __weak NSLayoutConstraint *tagsViewHeioghtConstraint; // @synthesize tagsViewHeioghtConstraint=_tagsViewHeioghtConstraint;
@property(retain, nonatomic) NFUIFocusDimOverlay *focusOverlay; // @synthesize focusOverlay=_focusOverlay;
@property(retain, nonatomic) NFUIIconButton *playerShareButton; // @synthesize playerShareButton=_playerShareButton;
@property(retain, nonatomic) NFUIListButton *playerListButton; // @synthesize playerListButton=_playerListButton;
@property(nonatomic) __weak NSLayoutConstraint *playerContainerHeightConstraint; // @synthesize playerContainerHeightConstraint=_playerContainerHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *imgContainerHeight; // @synthesize imgContainerHeight=_imgContainerHeight;
@property(retain, nonatomic) UIView *playerContainer; // @synthesize playerContainer=_playerContainer;
@property(retain, nonatomic) NSString *playerId; // @synthesize playerId=_playerId;
@property(retain, nonatomic) NFUIUpdatesViewModel *model; // @synthesize model=_model;
@property(retain, nonatomic) NFUIUpdatesEntity *entity; // @synthesize entity=_entity;
@property(nonatomic) __weak NSLayoutConstraint *carouselViewBottomConstraint; // @synthesize carouselViewBottomConstraint=_carouselViewBottomConstraint;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak NFUIUpdatesTagsView *tagsView; // @synthesize tagsView=_tagsView;
@property(nonatomic) __weak UIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) __weak NFUICornerGradientView *cornerGradientView; // @synthesize cornerGradientView=_cornerGradientView;
@property(nonatomic) __weak UIButton *btnPlay; // @synthesize btnPlay=_btnPlay;
@property(nonatomic) __weak NFUIIconButton *btnSharing; // @synthesize btnSharing=_btnSharing;
@property(nonatomic) __weak NFUIListButton *btnMyList; // @synthesize btnMyList=_btnMyList;
@property(nonatomic) __weak NFUITitleTreatmentView *titleTreatmentView; // @synthesize titleTreatmentView=_titleTreatmentView;
@property(nonatomic) __weak NFUIStylizedLabel *categoryLabel; // @synthesize categoryLabel=_categoryLabel;
@property(nonatomic) __weak NFUILabel *postTitleLabel; // @synthesize postTitleLabel=_postTitleLabel;
@property(nonatomic) __weak NFUILabel *postTextLabel; // @synthesize postTextLabel=_postTextLabel;
@property(nonatomic) __weak NFUILabel *postSubtitleLabel; // @synthesize postSubtitleLabel=_postSubtitleLabel;
@property(nonatomic) __weak NFUIImageCarouselView *imageCarouselView; // @synthesize imageCarouselView=_imageCarouselView;
@property(nonatomic) __weak NSLayoutConstraint *shareButtonWidthConstraint; // @synthesize shareButtonWidthConstraint=_shareButtonWidthConstraint;
@property(retain, nonatomic) NFUIMiniPlayerViewController *miniPlayerViewController; // @synthesize miniPlayerViewController=_miniPlayerViewController;
@property __weak id <ViewControllerOverContextDelegateProtocol><NFUIUpdatesTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)carousel:(id)arg1 selectedIndexDidChange:(long long)arg2;
- (struct CGRect)frameForPlayer;
- (void)shareItemTapped:(id)arg1;
- (void)titleTreatmentTapped;
- (void)loadTitleTreatmentWithURLString:(id)arg1;
- (void)focusStateDidChange:(id)arg1;
- (void)miniplayerDidExitFullScreen:(id)arg1;
- (void)miniplayerDidEnterFullScreen:(id)arg1;
- (void)exitFullScreenInVideoController:(id)arg1 toDestinationView:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)enterFullScreenInVideoController:(id)arg1;
- (void)layoutSubviews;
- (void)togglePlayback:(id)arg1;
- (void)setFocusState:(_Bool)arg1;
- (void)performCleanup;
- (void)prepareForReuse;
- (_Bool)canPlay;
- (void)showPlayButtonIfValid;
- (_Bool)isPlaying;
- (void)stop;
- (void)pause;
- (void)updatePlayIconForEnd:(_Bool)arg1;
- (void)handleVideoStopWithEnd:(_Bool)arg1;
- (void)didEndPlaybackInController:(id)arg1;
- (void)didStopPlaybackInController:(id)arg1;
- (void)didBeginPlaybackInController:(id)arg1;
- (void)play;
- (id)currentPlayer;
- (void)play:(id)arg1;
- (void)showAddToListAlert;
- (void)showAddToListAlertController;
- (void)myListTapped:(id)arg1;
- (void)configureImageAspectRatio;
- (void)configureMyList;
- (void)configureTagswithModel:(id)arg1;
- (void)setText:(id)arg1 forLabel:(id)arg2;
- (void)configureWithDataModel:(id)arg1;
- (void)updateAccessibilityIdentifierForFullscreen:(_Bool)arg1;
- (id)accessibilityIdentifier;
- (void)configurePlayer;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


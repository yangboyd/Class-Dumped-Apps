//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NFUIPostPlayViewController.h"

#import "NFUIPostPlayOriginalsActionTapDelegate-Protocol.h"

@class NSDictionary, NSLayoutConstraint, NSString, PlayButton, UIButton, UIImageView, UIImageViewAligned, UIStackView, UIView;
@protocol NFUIPostPlayOriginalsDetailsViewProtocol;

@interface NFUIPostPlayOriginalsViewsControllerLegacy : NFUIPostPlayViewController <NFUIPostPlayOriginalsActionTapDelegate>
{
    UIView<NFUIPostPlayOriginalsDetailsViewProtocol> *_detailsView;
    UIStackView *_stackView;
    NSLayoutConstraint *_stackViewHeight;
    NSLayoutConstraint *_postplayItemHeight;
    NSLayoutConstraint *_postplayItemWidth;
    UIView *_originalsDetailsView;
    UIImageViewAligned *_storyArtImage;
    UIImageView *_sdpImageView;
    UIView *_shim;
    UIView *_detailsContainer;
    UIButton *_closeButton;
    PlayButton *_playButton;
    NSLayoutConstraint *_postPlayItemHeightConstraint;
    NSLayoutConstraint *_detailsTrailingConstraint;
    NSLayoutConstraint *_itemContainerHeight;
    NSDictionary *_currentVideoAction;
}

@property(retain, nonatomic) NSDictionary *currentVideoAction; // @synthesize currentVideoAction=_currentVideoAction;
@property(nonatomic) __weak NSLayoutConstraint *itemContainerHeight; // @synthesize itemContainerHeight=_itemContainerHeight;
@property(nonatomic) __weak NSLayoutConstraint *detailsTrailingConstraint; // @synthesize detailsTrailingConstraint=_detailsTrailingConstraint;
@property(nonatomic) __weak NSLayoutConstraint *postPlayItemHeightConstraint; // @synthesize postPlayItemHeightConstraint=_postPlayItemHeightConstraint;
@property(nonatomic) __weak PlayButton *playButton; // @synthesize playButton=_playButton;
@property(nonatomic) __weak UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) __weak UIView *detailsContainer; // @synthesize detailsContainer=_detailsContainer;
@property(nonatomic) __weak UIView *shim; // @synthesize shim=_shim;
@property(nonatomic) __weak UIImageView *sdpImageView; // @synthesize sdpImageView=_sdpImageView;
@property(nonatomic) __weak UIImageViewAligned *storyArtImage; // @synthesize storyArtImage=_storyArtImage;
@property(nonatomic) __weak UIView *originalsDetailsView; // @synthesize originalsDetailsView=_originalsDetailsView;
@property(nonatomic) __weak NSLayoutConstraint *postplayItemWidth; // @synthesize postplayItemWidth=_postplayItemWidth;
@property(nonatomic) __weak NSLayoutConstraint *postplayItemHeight; // @synthesize postplayItemHeight=_postplayItemHeight;
@property(nonatomic) __weak NSLayoutConstraint *stackViewHeight; // @synthesize stackViewHeight=_stackViewHeight;
@property(nonatomic) __weak UIStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) UIView<NFUIPostPlayOriginalsDetailsViewProtocol> *detailsView; // @synthesize detailsView=_detailsView;
- (void).cxx_destruct;
- (void)configureForCurrentOrientation;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (unsigned long long)retrievePlaybackBoomark:(id)arg1;
- (void)updateAutoPlayCounter:(id)arg1;
- (void)updateNextEpisodeInLabel;
- (id)playbackRequestForCurrentModelAutoplay:(_Bool)arg1 actionIdentifier:(id)arg2;
- (void)viewShouldDismiss:(id)arg1;
- (void)playEpisodeAction:(id)arg1;
- (void)playTrailerAction:(id)arg1;
- (void)playButtonAction:(id)arg1;
- (void)callToActionTapped:(id)arg1 withActionData:(id)arg2;
- (void)handleActionTapped:(id)arg1 withActionData:(id)arg2;
- (void)myListButtonPressed:(id)arg1 withAction:(id)arg2;
- (void)playVideoWithAction:(id)arg1 autoplay:(_Bool)arg2;
- (void)callToAction:(id)arg1 withButton:(id)arg2;
- (void)playbackDidEnd;
- (void)viewDidAppear:(_Bool)arg1;
- (void)logImpressions:(id)arg1;
- (void)configureCurrentVideoActionToPlayTrailer;
- (void)viewDidLoad;
- (void)initDetailsView;
- (id)nibForExperience:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


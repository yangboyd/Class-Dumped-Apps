//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NFUIPlayerControlsViewRefresh.h"

#import "MdxUiStatusButtonDelegate-Protocol.h"
#import "NFUIPlayerAirPlayRoutesAvailabilityDelegate-Protocol.h"

@class MdxUiStatusButton, NFUIBlankAirPlayButton, NFUILabel, NFUIPlayerAirPlayButton, NFUIPlayerSystemVolumeSlider, NSLayoutConstraint, NSString, UIButton, UIControl, UIStackView;

@interface NFUIPlayerControlsHeaderViewRefresh : NFUIPlayerControlsViewRefresh <NFUIPlayerAirPlayRoutesAvailabilityDelegate, MdxUiStatusButtonDelegate>
{
    _Bool _hasIconTitles;
    NFUILabel *_title;
    NFUILabel *_seasonDetails;
    NFUIPlayerAirPlayButton *_airPlayButton;
    MdxUiStatusButton *_mdxButton;
    UIStackView *_mdxStackView;
    UIButton *_episodesButton;
    UIButton *_audioSubtitlesButton;
    UIStackView *_infoStackView;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_infoStackViewCenterY;
    NSLayoutConstraint *_infoStackViewWidth;
    NSLayoutConstraint *_mdxStackInfoStackSpacing;
    UIControl *_closeButton;
    UIButton *_backButton;
    NSLayoutConstraint *_closeButtonLeadingConstraint;
    NSLayoutConstraint *_infoContainerLeadingConstraint;
    NSLayoutConstraint *_buttonContainerTrailingConstraint;
    long long _preferredStatusBarStyle;
    long long _preferredStatusBarAnimation;
    NFUIBlankAirPlayButton *_blankAirPlayButton;
    NFUIPlayerSystemVolumeSlider *_volumeSlider;
}

+ (id)fullPlayerHeaderViewWithNibName:(id)arg1;
@property _Bool hasIconTitles; // @synthesize hasIconTitles=_hasIconTitles;
@property(retain, nonatomic) NFUIPlayerSystemVolumeSlider *volumeSlider; // @synthesize volumeSlider=_volumeSlider;
@property(retain, nonatomic) NFUIBlankAirPlayButton *blankAirPlayButton; // @synthesize blankAirPlayButton=_blankAirPlayButton;
@property(nonatomic) long long preferredStatusBarAnimation; // @synthesize preferredStatusBarAnimation=_preferredStatusBarAnimation;
@property(nonatomic) long long preferredStatusBarStyle; // @synthesize preferredStatusBarStyle=_preferredStatusBarStyle;
@property(nonatomic) __weak NSLayoutConstraint *buttonContainerTrailingConstraint; // @synthesize buttonContainerTrailingConstraint=_buttonContainerTrailingConstraint;
@property(nonatomic) __weak NSLayoutConstraint *infoContainerLeadingConstraint; // @synthesize infoContainerLeadingConstraint=_infoContainerLeadingConstraint;
@property(nonatomic) __weak NSLayoutConstraint *closeButtonLeadingConstraint; // @synthesize closeButtonLeadingConstraint=_closeButtonLeadingConstraint;
@property(nonatomic) __weak UIButton *backButton; // @synthesize backButton=_backButton;
@property(nonatomic) __weak UIControl *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) NSLayoutConstraint *mdxStackInfoStackSpacing; // @synthesize mdxStackInfoStackSpacing=_mdxStackInfoStackSpacing;
@property(nonatomic) __weak NSLayoutConstraint *infoStackViewWidth; // @synthesize infoStackViewWidth=_infoStackViewWidth;
@property(nonatomic) __weak NSLayoutConstraint *infoStackViewCenterY; // @synthesize infoStackViewCenterY=_infoStackViewCenterY;
@property(nonatomic) __weak NSLayoutConstraint *topConstraint; // @synthesize topConstraint=_topConstraint;
@property(nonatomic) __weak UIStackView *infoStackView; // @synthesize infoStackView=_infoStackView;
@property(nonatomic) __weak UIButton *audioSubtitlesButton; // @synthesize audioSubtitlesButton=_audioSubtitlesButton;
@property(nonatomic) __weak UIButton *episodesButton; // @synthesize episodesButton=_episodesButton;
@property(nonatomic) __weak UIStackView *mdxStackView; // @synthesize mdxStackView=_mdxStackView;
@property(nonatomic) __weak MdxUiStatusButton *mdxButton; // @synthesize mdxButton=_mdxButton;
@property(nonatomic) __weak NFUIPlayerAirPlayButton *airPlayButton; // @synthesize airPlayButton=_airPlayButton;
@property(nonatomic) __weak NFUILabel *seasonDetails; // @synthesize seasonDetails=_seasonDetails;
@property(nonatomic) __weak NFUILabel *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)configureAccessibilityForCloseButton:(id)arg1;
- (void)configureAccessibility;
- (void)handleMdxStatusChanged:(id)arg1;
- (void)configureExternalPlaybackButton;
- (void)configureMdx;
- (void)didTapAirPlayButton:(id)arg1;
- (void)mdxButtonAvailabilityChanged:(id)arg1;
- (void)setMDXButtonEnabled:(_Bool)arg1;
- (void)airPlayRoutesPickerDisplayed;
- (void)airPlayRoutesAvailable:(_Bool)arg1;
- (void)setAirPlayButtonEnabled:(_Bool)arg1;
- (void)setEpisodesButtonEnabled:(_Bool)arg1;
- (void)setVideoText:(id)arg1 seasonDetails:(id)arg2;
- (void)resetControlsState;
- (void)configureView;
- (void)dealloc;
- (void)setHidden:(_Bool)arg1;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


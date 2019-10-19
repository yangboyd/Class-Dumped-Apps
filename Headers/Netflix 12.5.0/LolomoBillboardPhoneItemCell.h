//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LolomoBillboardItemCell.h"

@class IPInsetLabel, NFUIListButton, NFUIStackButton, NFUITitleTreatmentView, NSLayoutConstraint, NSMutableArray, NSMutableDictionary, NSString, UIButton, UIImageView, UIStackView, UIView;

@interface LolomoBillboardPhoneItemCell : LolomoBillboardItemCell
{
    _Bool _gradientApplied;
    _Bool _tagsCreated;
    UIStackView *_stackAbovePlay;
    UIStackView *_stckCTAView;
    UIView *_logoView;
    UIImageView *_imgVerticalBackground;
    UIView *_verticalImageContainer;
    UIView *_gradientView;
    UIView *_topGradientView;
    NFUITitleTreatmentView *_titleTreatmentView;
    NFUIStackButton *_btnMoreInfo;
    NFUIListButton *_btnAddToList;
    NFUIStackButton *_btnPlay;
    NFUIStackButton *_btnGallery;
    UIImageView *_imgLicensedBoxShot;
    UIView *_lblSupplementalWrapper;
    IPInsetLabel *_lblSupplemental;
    IPInsetLabel *_lblEpisodeTitle;
    NSMutableArray *_tagsToShow;
    NSString *_allTags;
    NSMutableDictionary *_tagMap;
    UIButton *_btnTagNonTappable;
    UIView *_viewTagDot;
    UIStackView *_stckTagView;
    NSLayoutConstraint *_imageBottomConstraint;
    NSLayoutConstraint *_gradientBottomConstraint;
    NSLayoutConstraint *_gradientHeightConstraint;
    NSLayoutConstraint *_topGradientConstraint;
    NSLayoutConstraint *_stackCTABottomConstraint;
    UIButton *_topTenButton;
    NSLayoutConstraint *_playGalleryConst;
}

+ (id)dequeueForItemAtIndexPath:(id)arg1 inCollectionView:(id)arg2 withLolomoViewDelegate:(id)arg3;
+ (void)registerInCollectionView:(id)arg1 withLolomoViewDelegate:(id)arg2;
@property(retain, nonatomic) NSLayoutConstraint *playGalleryConst; // @synthesize playGalleryConst=_playGalleryConst;
@property(nonatomic) __weak UIButton *topTenButton; // @synthesize topTenButton=_topTenButton;
@property(nonatomic) __weak NSLayoutConstraint *stackCTABottomConstraint; // @synthesize stackCTABottomConstraint=_stackCTABottomConstraint;
@property(nonatomic) __weak NSLayoutConstraint *topGradientConstraint; // @synthesize topGradientConstraint=_topGradientConstraint;
@property(nonatomic) __weak NSLayoutConstraint *gradientHeightConstraint; // @synthesize gradientHeightConstraint=_gradientHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *gradientBottomConstraint; // @synthesize gradientBottomConstraint=_gradientBottomConstraint;
@property(nonatomic) __weak NSLayoutConstraint *imageBottomConstraint; // @synthesize imageBottomConstraint=_imageBottomConstraint;
@property(nonatomic) __weak UIStackView *stckTagView; // @synthesize stckTagView=_stckTagView;
@property(nonatomic) __weak UIView *viewTagDot; // @synthesize viewTagDot=_viewTagDot;
@property(nonatomic) __weak UIButton *btnTagNonTappable; // @synthesize btnTagNonTappable=_btnTagNonTappable;
@property(retain, nonatomic) NSMutableDictionary *tagMap; // @synthesize tagMap=_tagMap;
@property(retain, nonatomic) NSString *allTags; // @synthesize allTags=_allTags;
@property(retain, nonatomic) NSMutableArray *tagsToShow; // @synthesize tagsToShow=_tagsToShow;
@property(nonatomic) _Bool tagsCreated; // @synthesize tagsCreated=_tagsCreated;
@property(nonatomic) _Bool gradientApplied; // @synthesize gradientApplied=_gradientApplied;
@property(nonatomic) __weak IPInsetLabel *lblEpisodeTitle; // @synthesize lblEpisodeTitle=_lblEpisodeTitle;
@property(nonatomic) __weak IPInsetLabel *lblSupplemental; // @synthesize lblSupplemental=_lblSupplemental;
@property(nonatomic) __weak UIView *lblSupplementalWrapper; // @synthesize lblSupplementalWrapper=_lblSupplementalWrapper;
@property(nonatomic) __weak UIImageView *imgLicensedBoxShot; // @synthesize imgLicensedBoxShot=_imgLicensedBoxShot;
@property(nonatomic) __weak NFUIStackButton *btnGallery; // @synthesize btnGallery=_btnGallery;
@property(nonatomic) __weak NFUIStackButton *btnPlay; // @synthesize btnPlay=_btnPlay;
@property(retain, nonatomic) NFUIListButton *btnAddToList; // @synthesize btnAddToList=_btnAddToList;
@property(retain, nonatomic) NFUIStackButton *btnMoreInfo; // @synthesize btnMoreInfo=_btnMoreInfo;
@property(nonatomic) __weak NFUITitleTreatmentView *titleTreatmentView; // @synthesize titleTreatmentView=_titleTreatmentView;
@property(nonatomic) __weak UIView *topGradientView; // @synthesize topGradientView=_topGradientView;
@property(nonatomic) __weak UIView *gradientView; // @synthesize gradientView=_gradientView;
@property(nonatomic) __weak UIView *verticalImageContainer; // @synthesize verticalImageContainer=_verticalImageContainer;
@property(nonatomic) __weak UIImageView *imgVerticalBackground; // @synthesize imgVerticalBackground=_imgVerticalBackground;
@property(nonatomic) __weak UIView *logoView; // @synthesize logoView=_logoView;
@property(nonatomic) __weak UIStackView *stckCTAView; // @synthesize stckCTAView=_stckCTAView;
@property(nonatomic) __weak UIStackView *stackAbovePlay; // @synthesize stackAbovePlay=_stackAbovePlay;
- (void).cxx_destruct;
- (void)moreInfoTapped:(id)arg1;
- (void)addToListTapped:(id)arg1;
- (void)btnPlayTapped:(id)arg1;
- (void)galleryButtonTapped:(id)arg1;
- (void)layoutSubviews;
- (void)volatileDataFetched;
- (void)resetTagContainerSubviews;
- (void)prepareForReuse;
- (void)applyGradientOnView:(id)arg1 colorWithRGB:(int)arg2 withAlphaArray:(id)arg3 withLocationsArray:(id)arg4;
- (_Bool)doesFitTheGivenWidth:(id)arg1 withTagNumber:(float)arg2;
- (void)layoutTagButtons:(id)arg1;
- (void)updateCallToActionsAfterAvailabilityChange;
- (void)titleAvailable:(id)arg1;
- (void)setupVerticalCTAs:(id)arg1;
- (void)setupGenreCTAs:(id)arg1;
- (void)setupEpisodicCTAs:(id)arg1;
- (void)displayTags:(id)arg1;
- (void)displaySupplementalMessage:(id)arg1;
- (void)displayTopTenMessage:(id)arg1;
- (void)displayNewBadge:(id)arg1;
- (void)setupVerticalAbovePlay:(id)arg1;
- (void)setupEpisodicAbovePlay:(id)arg1;
- (void)configureWithViewModel:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)viewInitialized:(_Bool)arg1;

@end


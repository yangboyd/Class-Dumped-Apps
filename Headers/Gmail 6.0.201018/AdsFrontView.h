//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "AdsMoreInfoViewDelegate-Protocol.h"
#import "CellPositionSupport-Protocol.h"
#import "DuffySurveyViewDelegate-Protocol.h"
#import "GBTAccessibilityCustomActionSupport-Protocol.h"
#import "GBTStaticHeightSupport-Protocol.h"
#import "GBTSwipeableTableViewCellSubview-Protocol.h"
#import "HUBFontManagerCachedFontAndAttributesRefresher-Protocol.h"
#import "UpdateableWithNugget-Protocol.h"

@class AdsMoreInfoView, DuffySurveyView, GBTAdBadgeView, GBTNugget, GBTPlainButton, GBTStarButton, GBTTeaserCTAButton, GBTVisualElement, NSMutableArray, NSString, UIAccessibilityCustomAction, UIAccessibilityElement, UIImageView, UILabel;
@protocol GBTAdsBodyHandlerDelegate, GBTSmartMailInteractionSupport, GBTVisualElementDataSource, HUBColorScheme, JBTAdItem;

@interface AdsFrontView : UIView <AdsMoreInfoViewDelegate, DuffySurveyViewDelegate, HUBFontManagerCachedFontAndAttributesRefresher, CellPositionSupport, GBTAccessibilityCustomActionSupport, GBTStaticHeightSupport, GBTSwipeableTableViewCellSubview, UpdateableWithNugget>
{
    GBTAdBadgeView *_adBadge;
    id <JBTAdItem> _adItem;
    UIAccessibilityElement *_adSummaryAccessibilityElement;
    _Bool _adsInfoExpanded;
    UILabel *_advertiserLabel;
    UIImageView *_avatar;
    GBTPlainButton *_chevronIcon;
    DuffySurveyView *_duffySurveyView;
    UIAccessibilityCustomAction *_hideAdsInfoAction;
    GBTPlainButton *_infoIcon;
    AdsMoreInfoView *_moreInfoView;
    GBTNugget *_nugget;
    GBTVisualElement *_parentVisualElement;
    UIAccessibilityCustomAction *_showAdsInfoAction;
    _Bool _showStar;
    GBTStarButton *_starButton;
    UIAccessibilityCustomAction *_starToggleAction;
    UILabel *_subtitleLabel;
    _Bool _swiping;
    UILabel *_titleLabel;
    GBTTeaserCTAButton *_teaserCtaButton;
    id <HUBColorScheme> _colorScheme;
    unsigned long long _cellPosition;
    NSMutableArray *gbt_accessibilityActions_;
    id <GBTAdsBodyHandlerDelegate> _adsBodyHandlerDelegate;
    id <GBTSmartMailInteractionSupport> _smartMailDelegate;
    id <GBTVisualElementDataSource> _visualElementDataSource;
}

+ (_Bool)shouldShowTeaserDescription:(id)arg1;
+ (_Bool)shouldShowCtaButton:(id)arg1;
+ (_Bool)shouldLeftAlignCtaButton:(id)arg1;
+ (double)cellCollapsedHeight:(id)arg1;
+ (double)heightForObject:(id)arg1 width:(double)arg2 expansionState:(id)arg3;
+ (double)heightForObject:(id)arg1 width:(double)arg2;
+ (void)refreshCachedFontAndAttributes;
+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) __weak id <GBTVisualElementDataSource> visualElementDataSource; // @synthesize visualElementDataSource=_visualElementDataSource;
@property(nonatomic) __weak id <GBTSmartMailInteractionSupport> smartMailDelegate; // @synthesize smartMailDelegate=_smartMailDelegate;
@property(nonatomic) __weak id <GBTAdsBodyHandlerDelegate> adsBodyHandlerDelegate; // @synthesize adsBodyHandlerDelegate=_adsBodyHandlerDelegate;
@property(retain, nonatomic) NSMutableArray *gbt_accessibilityActions; // @synthesize gbt_accessibilityActions=gbt_accessibilityActions_;
@property(nonatomic) unsigned long long cellPosition; // @synthesize cellPosition=_cellPosition;
- (void)setShowStar:(_Bool)arg1;
- (void)updateAdSummaryAccessibilityElementFrame;
- (void)updateWithVisibilityRatio:(double)arg1 isPastMinimumDistance:(_Bool)arg2 animated:(_Bool)arg3;
- (void)updateBackground;
- (void)updateBadge;
- (void)updateStarred;
- (void)teaserCtaTapped;
- (void)starTapped;
- (void)infoTapped;
- (void)createSubviews;
- (void)updateAccessibilityCustomActions;
- (void)updateAdsInfoAccessibilityCustomAction;
- (void)applyAccessibilityCustomActions:(id)arg1;
- (id)generateAccessibilityLabel;
- (void)createAccessibilityCustomActions;
- (id)accessibilityElements;
- (id)accessibilityIdentifier;
- (void)surveyDidClose;
- (void)updateWithNugget:(id)arg1 parentVisualElement:(id)arg2;
- (void)layoutSubviews;
- (void)moreInfoView:(id)arg1 didTapHelpContext:(unsigned long long)arg2;
- (void)moreInfoView:(id)arg1 didTapControlAdsLink:(id)arg2;
- (void)logImpression;
- (void)setExpanded:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


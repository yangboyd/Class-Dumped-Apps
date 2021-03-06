//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Module_Framework/GA11YMixinEmbedder-Protocol.h>
#import <Module_Framework/YTPageStyling-Protocol.h>
#import <Module_Framework/YTReusableView-Protocol.h>

@class NSArray, NSString, UIImageView, YTLabel;
@protocol GA11YMixinImpl, YTAttributedLabel;

@interface YTSubtitleView : UIView <GA11YMixinEmbedder, YTPageStyling, YTReusableView>
{
    NSArray *_labels;
    NSArray *_separators;
    _Bool _needsLayout;
    long long _pageStyle;
    _Bool _shouldForceOneLinePerField;
    id <GA11YMixinImpl> _accessibilityMixin;
    unsigned long long _numberOfLines;
    UIView<YTAttributedLabel> *_bylineLabel;
    UIView<YTAttributedLabel> *_viewCountLabel;
    UIView<YTAttributedLabel> *_additionalLabel;
    UIView<YTAttributedLabel> *_otherLabel;
    YTLabel *_separator1Label;
    YTLabel *_separator2Label;
    YTLabel *_separator3Label;
    UIView *_adBadge;
    UIImageView *_downloadedIndicator;
}

@property(readonly, nonatomic) UIImageView *downloadedIndicator; // @synthesize downloadedIndicator=_downloadedIndicator;
@property(readonly, nonatomic) UIView *adBadge; // @synthesize adBadge=_adBadge;
@property(readonly, nonatomic) YTLabel *separator3Label; // @synthesize separator3Label=_separator3Label;
@property(readonly, nonatomic) YTLabel *separator2Label; // @synthesize separator2Label=_separator2Label;
@property(readonly, nonatomic) YTLabel *separator1Label; // @synthesize separator1Label=_separator1Label;
@property(readonly, nonatomic) UIView<YTAttributedLabel> *otherLabel; // @synthesize otherLabel=_otherLabel;
@property(readonly, nonatomic) UIView<YTAttributedLabel> *additionalLabel; // @synthesize additionalLabel=_additionalLabel;
@property(readonly, nonatomic) UIView<YTAttributedLabel> *viewCountLabel; // @synthesize viewCountLabel=_viewCountLabel;
@property(readonly, nonatomic) UIView<YTAttributedLabel> *bylineLabel; // @synthesize bylineLabel=_bylineLabel;
@property(nonatomic) _Bool shouldForceOneLinePerField; // @synthesize shouldForceOneLinePerField=_shouldForceOneLinePerField;
@property(nonatomic) unsigned long long numberOfLines; // @synthesize numberOfLines=_numberOfLines;
- (void).cxx_destruct;
- (void)layoutIfNeeded;
- (void)setNeedsLayout;
- (void)hideSeparators;
- (void)setFormattedString:(id)arg1 forLabel:(id)arg2;
- (id)createLabel;
- (id)createSeparator;
- (void)updateHidden;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (id)accessibleViews;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)accessibilityElements;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
@property(readonly, nonatomic) id <GA11YMixinImpl> accessibilityMixin; // @synthesize accessibilityMixin=_accessibilityMixin;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)sizeHeightToFitWithWidth:(double)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)hasViewCountText;
- (_Bool)hasShortBylineText;
- (void)setShortBylineHidden:(_Bool)arg1;
- (void)setHasAdBadge:(_Bool)arg1;
- (void)setOtherText:(id)arg1;
- (void)setAdditionalText:(id)arg1;
- (void)setViewCountText:(id)arg1;
- (void)setShortBylineText:(id)arg1;
@property(nonatomic) _Bool shouldShowDownloadedIndicator;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


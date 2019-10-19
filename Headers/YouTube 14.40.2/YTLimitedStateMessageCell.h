//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTCollectionViewCell.h"

#import "GA11YMixinEmbedder.h"
#import "YTCollectionViewCellProtocol.h"
#import "YTPageStyling.h"
#import "YTResponder.h"

@class NSString, YTFormattedStringLabel, YTILimitedStateMessageRenderer, YTImageView, YTQTMButton;

@interface YTLimitedStateMessageCell : YTCollectionViewCell <GA11YMixinEmbedder, YTPageStyling, YTCollectionViewCellProtocol, YTResponder>
{
    YTILimitedStateMessageRenderer *_entry;
    YTImageView *_imageView;
    YTFormattedStringLabel *_headerLabel;
    YTFormattedStringLabel *_subTextLabel;
    YTQTMButton *_learnMoreButton;
    YTQTMButton *_homeButton;
    id <YTResponder> _parentResponder;
    id <GA11YMixinImpl> _accessibilityMixin;
}

+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
- (void)setParentResponder:(id)arg1;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder;
- (void).cxx_destruct;
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
- (void)didTapHomeButton;
- (void)didTapLearnMoreButton;
- (id)entry;
- (void)setEntry:(id)arg1;
- (void)prepareForReuse;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


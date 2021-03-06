//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Module_Framework/GA11YMixinEmbedder-Protocol.h>
#import <Module_Framework/YTFormattedStringLabelDelegate-Protocol.h>

@class NSMutableArray, NSString;
@protocol GA11YMixinImpl, YTFormattedStringLabelDelegate;

@interface YTStandaloneBadgesView : UIView <GA11YMixinEmbedder, YTFormattedStringLabelDelegate>
{
    NSMutableArray *_badgeViews;
    id <GA11YMixinImpl> _accessibilityMixin;
    id <YTFormattedStringLabelDelegate> _formattedStringLabelDelegate;
    long long _labelTypeVariant;
    long long _redLabelTypeVariant;
    double _badgeBackgroundFillColorAlpha;
}

- (void).cxx_destruct;
@property(nonatomic) double badgeBackgroundFillColorAlpha; // @synthesize badgeBackgroundFillColorAlpha=_badgeBackgroundFillColorAlpha;
@property(nonatomic) long long redLabelTypeVariant; // @synthesize redLabelTypeVariant=_redLabelTypeVariant;
@property(nonatomic) long long labelTypeVariant; // @synthesize labelTypeVariant=_labelTypeVariant;
@property(nonatomic) __weak id <YTFormattedStringLabelDelegate> formattedStringLabelDelegate; // @synthesize formattedStringLabelDelegate=_formattedStringLabelDelegate;
- (id)accessibleViews;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)accessibilityElements;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
@property(readonly, nonatomic) id <GA11YMixinImpl> accessibilityMixin; // @synthesize accessibilityMixin=_accessibilityMixin;
- (void)formattedStringLabel:(id)arg1 didPressNavigationEndpoint:(id)arg2 linkText:(id)arg3;
- (void)formattedStringLabel:(id)arg1 didPressURL:(id)arg2;
- (struct CGSize)intrinsicContentSize;
- (void)setBadgeRenderers:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


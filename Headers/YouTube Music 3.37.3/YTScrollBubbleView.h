//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GA11YMixinEmbedder-Protocol.h"

@class NSString, UIControl, YTFormattedStringLabel, YTIContentPillRenderer, YTImageView;
@protocol GA11YMixinImpl;

@interface YTScrollBubbleView : UIView <GA11YMixinEmbedder>
{
    YTFormattedStringLabel *_label;
    YTImageView *_iconImageView;
    YTIContentPillRenderer *_renderer;
    id <GA11YMixinImpl> _accessibilityMixin;
    UIControl *_actionButton;
}

@property(readonly, nonatomic) UIControl *actionButton; // @synthesize actionButton=_actionButton;
- (void).cxx_destruct;
- (id)accessibleViews;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)accessibilityElements;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
@property(readonly, nonatomic) id <GA11YMixinImpl> accessibilityMixin; // @synthesize accessibilityMixin=_accessibilityMixin;
- (void)setRenderer:(id)arg1;
- (int)positionValue;
- (void)hideAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showAnimated:(_Bool)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


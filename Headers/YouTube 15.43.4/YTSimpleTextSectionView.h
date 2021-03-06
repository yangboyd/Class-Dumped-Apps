//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Module_Framework/GA11YMixinEmbedder-Protocol.h>
#import <Module_Framework/YTInvalidateAccessibleElementsProtocol-Protocol.h>
#import <Module_Framework/YTPageStyling-Protocol.h>
#import <Module_Framework/YTReusableView-Protocol.h>

@class NSMutableArray, NSString, YTISimpleTextSectionRenderer;
@protocol GA11YMixinImpl, YTFormattedStringLabelDelegate;

@interface YTSimpleTextSectionView : UIView <GA11YMixinEmbedder, YTPageStyling, YTReusableView, YTInvalidateAccessibleElementsProtocol>
{
    NSMutableArray *_textLabels;
    UIView *_backgroundCardView;
    long long _pageStyle;
    int _simpleTextLayoutStyle;
    id <GA11YMixinImpl> _accessibilityMixin;
    YTISimpleTextSectionRenderer *_renderer;
    id <YTFormattedStringLabelDelegate> _formattedStringLabelDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <YTFormattedStringLabelDelegate> formattedStringLabelDelegate; // @synthesize formattedStringLabelDelegate=_formattedStringLabelDelegate;
@property(retain, nonatomic) YTISimpleTextSectionRenderer *renderer; // @synthesize renderer=_renderer;
- (void)invalidateAccessibleElements;
@property(readonly, nonatomic) double verticalSpacing;
- (struct UIEdgeInsets)sectionPaddingForLayoutStyle:(int)arg1;
- (double)textWidthForViewWidth:(double)arg1;
- (void)clearTextLabels;
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
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTCollectionViewCell.h>

#import "GA11YMixinEmbedder-Protocol.h"
#import "MDCInkTouchControllerDelegate-Protocol.h"
#import "YTCollectionViewCellProtocol-Protocol.h"
#import "YTPageStyling-Protocol.h"
#import "YTThumbnailMapping-Protocol.h"

@class MDCInkTouchController, NSString, UIView, YTICommentVideoThumbnailHeaderRenderer, YTVideoThumbnailView;
@protocol GA11YMixinImpl, YTAttributedLabel, YTResponder;

@interface YTCommentDetailHeaderCell : YTCollectionViewCell <GA11YMixinEmbedder, YTPageStyling, YTThumbnailMapping, MDCInkTouchControllerDelegate, YTCollectionViewCellProtocol>
{
    long long _pageStyle;
    MDCInkTouchController *_inkTouchController;
    YTICommentVideoThumbnailHeaderRenderer *_entry;
    id <YTResponder> _parentResponder;
    id <GA11YMixinImpl> _accessibilityMixin;
    UIView *_bottomDivider;
    UIView<YTAttributedLabel> *_messageLabel;
    YTVideoThumbnailView *_videoThumbnailView;
}

+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) YTVideoThumbnailView *videoThumbnailView; // @synthesize videoThumbnailView=_videoThumbnailView;
@property(retain, nonatomic) UIView<YTAttributedLabel> *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UIView *bottomDivider; // @synthesize bottomDivider=_bottomDivider;
@property(nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void)inkTouchController:(id)arg1 insertInkView:(id)arg2 intoView:(id)arg3;
- (id)thumbnailMappings;
- (void)updateColors;
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
- (id)entry;
- (void)setEntry:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


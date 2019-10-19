//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTExpandableCell.h"

#import "GA11YMixinEmbedder.h"
#import "UIGestureRecognizerDelegate.h"
#import "YTCollectionViewCellProtocol.h"
#import "YTPageStyling.h"
#import "YTResponder.h"
#import "YTSlimVideoDetailsActionsProtocol.h"

@class NSArray, NSString, YTISlimVideoActionBarRenderer, YTSlimVideoDetailsActionView, YTSlimVideoDetailsActionsView;

@interface YTSlimVideoActionBarCell : YTExpandableCell <GA11YMixinEmbedder, UIGestureRecognizerDelegate, YTPageStyling, YTCollectionViewCellProtocol, YTResponder, YTSlimVideoDetailsActionsProtocol>
{
    YTISlimVideoActionBarRenderer *_entry;
    YTSlimVideoDetailsActionsView *_videoDetailsActionsView;
    id <YTResponder> _parentResponder;
    id <GA11YMixinImpl> _accessibilityMixin;
}

+ (struct CGSize)cellSizeForEntry:(id)arg1 expanded:(_Bool)arg2 offlineVideo:(id)arg3 offlineability:(id)arg4 size:(struct CGSize)arg5;
+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2 gimme:(id)arg3;
+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
- (void)setParentResponder:(id)arg1;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)downloadDidCompleteWithVideoID:(id)arg1 pinTypes:(int)arg2;
- (void)downloadDidProgressWithVideoID:(id)arg1 percentageDownloaded:(double)arg2;
- (void)updateAccountLinkButton:(id)arg1;
- (void)setOfflineVideo:(id)arg1 offlineability:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setToggled:(_Bool)arg1 forSupportedRenderer:(id)arg2;
- (_Bool)isToggledForSupportedRenderer:(id)arg1;
@property(nonatomic) int likeStatus;
@property(readonly, nonatomic) YTSlimVideoDetailsActionView *offlineActionView;
@property(readonly, nonatomic) NSArray *buttonHintTargets;
@property(readonly, nonatomic) NSArray *buttonHintRenderers;
@property(nonatomic) __weak id <YTSlimVideoDetailsActionViewDelegate> videoActionsDelegate;
- (id)entry;
- (void)setEntry:(id)arg1;
- (id)accessibleViews;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)accessibilityElements;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
@property(readonly, nonatomic) id <GA11YMixinImpl> accessibilityMixin; // @synthesize accessibilityMixin=_accessibilityMixin;
- (void)setExpanded:(_Bool)arg1 animated:(_Bool)arg2;
- (void)prepareForReuse;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (double)sidePadding;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


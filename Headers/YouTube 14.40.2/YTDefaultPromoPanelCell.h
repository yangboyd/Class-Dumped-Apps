//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTCollectionViewCell.h"

#import "YTCellActionProtocol.h"
#import "YTCollectionViewCellProtocol.h"
#import "YTThumbnailMapping.h"

@class NSString, UIView, YTDefaultPromoPanelView, YTQTMButton;

@interface YTDefaultPromoPanelCell : YTCollectionViewCell <YTThumbnailMapping, YTCellActionProtocol, YTCollectionViewCellProtocol>
{
    YTDefaultPromoPanelView *_view;
    id <YTResponder> _parentResponder;
}

+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
- (void)setParentResponder:(id)arg1;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder;
- (void).cxx_destruct;
- (_Bool)isAccessibilityElement;
- (id)accessibilityElements;
- (void)prepareForReuse;
- (id)thumbnailMappings;
- (id)entry;
- (void)setEntry:(id)arg1;
- (void)removeLongPressTarget;
- (void)setLongPressTarget:(id)arg1 action:(SEL)arg2;
- (void)removeActionTarget;
- (void)setActionTarget:(id)arg1 action:(SEL)arg2;
- (void)setPlaybackViewVisible:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic) double maxHeight;
@property(nonatomic) double aspectRatio;
@property(nonatomic) _Bool shouldAdjustBackgroundImageForVideoThumbnails;
@property(nonatomic) long long descriptionTypeKind;
@property(nonatomic) long long titleTypeKind;
@property(nonatomic) _Bool shouldDynamicallyHideForegroundThumbnail;
@property(nonatomic) __weak UIView *playbackView;
@property(nonatomic) struct UIEdgeInsets contentInsets;
@property(nonatomic) __weak id <YTDefaultPromoPanelViewDelegate> delegate;
@property(readonly, nonatomic) YTQTMButton *actionButton;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


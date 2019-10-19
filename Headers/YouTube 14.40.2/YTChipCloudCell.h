//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "YTCollectionViewCellProtocol.h"
#import "YTPageStyling.h"
#import "YTThumbnailMapping.h"

@class NSMutableArray, NSString, UIScrollView, YTIChipCloudRenderer;

@interface YTChipCloudCell : UICollectionViewCell <YTCollectionViewCellProtocol, YTPageStyling, YTThumbnailMapping>
{
    YTIChipCloudRenderer *_renderer;
    NSMutableArray *_childViews;
    UIScrollView *_scrollView;
    id <YTResponder> _parentResponder;
    id <YTChipCloudTapDelegate> _delegate;
    CDUnknownBlockType _onSelectChipRenderer;
}

+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2 gimme:(id)arg3 safeAreaInsets:(struct UIEdgeInsets)arg4;
@property(copy, nonatomic) CDUnknownBlockType onSelectChipRenderer; // @synthesize onSelectChipRenderer=_onSelectChipRenderer;
@property(nonatomic) __weak id <YTChipCloudTapDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setParentResponder:(id)arg1;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder;
- (void).cxx_destruct;
- (void)routeButtonTap:(id)arg1;
- (void)routeChipTap:(id)arg1;
- (id)framesForChipViewsWithWidth:(double)arg1;
- (id)buttonViews;
- (id)chipViews;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (id)entry;
- (id)thumbnailMappings;
- (void)setEntry:(id)arg1;
- (void)selectChip:(id)arg1;
- (void)selectChipForRenderer:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


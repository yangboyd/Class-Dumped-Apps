//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTCollectionViewCell.h"

#import "YTCollectionViewCellProtocol.h"
#import "YTThumbnailMapping.h"

@class GIMMe, NSString, UIView, YTICompactMovieRenderer, YTTvfilmCompactMovieView;

@interface YTTvfilmCompactMovieCell : YTCollectionViewCell <YTThumbnailMapping, YTCollectionViewCellProtocol>
{
    YTICompactMovieRenderer *_renderer;
    YTTvfilmCompactMovieView *_compactMovieView;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
}

+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2 gimme:(id)arg3 safeAreaInsets:(struct UIEdgeInsets)arg4;
+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2 gimme:(id)arg3;
+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void)setParentResponder:(id)arg1;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder;
- (void).cxx_destruct;
- (id)thumbnailMappings;
- (void)prepareForReuse;
- (id)entry;
- (void)setEntry:(id)arg1;
@property(readonly, nonatomic) UIView *menuAnchorView;
- (struct CGRect)compactMovieThumbnailFrame;
- (void)setCompactMovieDelegate:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


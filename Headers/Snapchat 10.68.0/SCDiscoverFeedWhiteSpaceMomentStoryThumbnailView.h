//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCDiscoverFeedStoryTileWithCoverImageConfigurable-Protocol.h"
#import "SCViewModelConfigurable-Protocol.h"

@class NSString, SCDiscoverFeedBadgeView, SCGradientView, SCNetworkImageView, UILabel;
@protocol SCImageDownloading;

@interface SCDiscoverFeedWhiteSpaceMomentStoryThumbnailView : UIView <SCViewModelConfigurable, SCDiscoverFeedStoryTileWithCoverImageConfigurable>
{
    SCNetworkImageView *_storyCoverImageView;
    SCGradientView *_backgroundGradientView;
    SCDiscoverFeedBadgeView *_badgeView;
    UILabel *_titleLabel;
    unsigned long long _currentTitleLanguageDirection;
    id _viewModel;
    id <SCImageDownloading> _imageDownloader;
}

+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
@property(retain, nonatomic) id <SCImageDownloading> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)_viewModelDidUpdate;
- (void)layoutSubviews;
- (id)storyCoverImage;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


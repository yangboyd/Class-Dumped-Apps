//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "YTMusicPassPromoCellContentView-Protocol.h"
#import "YTThumbnailMapping-Protocol.h"

@class NSString, UIImageView, YTFormattedStringLabel, YTIMusicPassSmallFeatureInfoRenderer, YTImageView;

@interface YTMusicPassPromoSmallFeatureInfoView : UIView <YTMusicPassPromoCellContentView, YTThumbnailMapping>
{
    YTFormattedStringLabel *_headerLabel;
    YTImageView *_imageView;
    UIImageView *_bottomSeparator;
    YTIMusicPassSmallFeatureInfoRenderer *_renderer;
}

+ (double)preferredHeightForRenderer:(id)arg1 width:(double)arg2;
@property(retain, nonatomic) YTIMusicPassSmallFeatureInfoRenderer *renderer; // @synthesize renderer=_renderer;
- (void).cxx_destruct;
- (id)subscribeSwitchMappings;
- (id)thumbnailMappings;
@property(nonatomic) _Bool showsBottomSeparator;
- (void)layoutSubviews;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


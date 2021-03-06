//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTEngagementToolbarBaseButton.h>

#import <Module_Framework/YTThumbnailMapping-Protocol.h>

@class FLXLayout, NSArray, NSString, UIColor, UIImage, UIImageView, YTICreatorHeartRenderer, YTImageView;

@interface YTCreatorHeartButton : YTEngagementToolbarBaseButton <YTThumbnailMapping>
{
    YTICreatorHeartRenderer *_renderer;
    NSArray *_thumbnailMappings;
    FLXLayout *_layout;
    UIColor *_defaultHeartDecoratorColor;
    UIImage *_defaultHeartDecoratorImage;
    UIColor *_cachedHeartDecoratorColor;
    UIImage *_cachedHeartDecoratorImage;
    YTImageView *_creatorThumbnailView;
    YTImageView *_creatorHeartDecoratorView;
    UIImageView *_creatorHeartDecoratorBorderView;
    YTImageView *_creatorHeartView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) YTImageView *creatorHeartView; // @synthesize creatorHeartView=_creatorHeartView;
@property(retain, nonatomic) UIImageView *creatorHeartDecoratorBorderView; // @synthesize creatorHeartDecoratorBorderView=_creatorHeartDecoratorBorderView;
@property(retain, nonatomic) YTImageView *creatorHeartDecoratorView; // @synthesize creatorHeartDecoratorView=_creatorHeartDecoratorView;
@property(retain, nonatomic) YTImageView *creatorThumbnailView; // @synthesize creatorThumbnailView=_creatorThumbnailView;
- (void)setIsHearted:(_Bool)arg1;
- (id)thumbnailMappings;
- (void)pageStyleDidChange:(long long)arg1;
- (id)root;
- (void)layoutSubviews;
- (void)toggleHeartedState;
- (void)setRenderer:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


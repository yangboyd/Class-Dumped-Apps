//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTCollectionViewCell.h"

#import "YTCollectionViewCellProtocol-Protocol.h"
#import "YTFormattedStringLabelDelegate-Protocol.h"
#import "YTThumbnailMapping-Protocol.h"

@class NSString, YTIInterstitialPromoRenderer, YTInterstitialPromoView;
@protocol YTInterstitialPromoViewDelegate, YTResponder;

@interface YTInterstitialPromoCell : YTCollectionViewCell <YTFormattedStringLabelDelegate, YTThumbnailMapping, YTCollectionViewCellProtocol>
{
    YTIInterstitialPromoRenderer *_entry;
    id <YTResponder> _parentResponder;
    YTInterstitialPromoView *_view;
}

+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
@property(readonly, nonatomic) YTInterstitialPromoView *view; // @synthesize view=_view;
- (void)setParentResponder:(id)arg1;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder;
- (void).cxx_destruct;
- (_Bool)isAccessibilityElement;
- (id)accessibilityElements;
- (id)thumbnailMappings;
- (void)formattedStringLabel:(id)arg1 didPressURL:(id)arg2;
- (void)formattedStringLabel:(id)arg1 didPressNavigationEndpoint:(id)arg2 linkText:(id)arg3;
- (id)entry;
- (void)setEntry:(id)arg1;
@property(nonatomic) __weak id <YTInterstitialPromoViewDelegate> delegate;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


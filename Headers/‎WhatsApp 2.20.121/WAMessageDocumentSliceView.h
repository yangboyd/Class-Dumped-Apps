//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMessageContainerSliceView.h"

@class UIImageView, UIView, WAMessageDocumentSlice, WAMessageDocumentSliceMetadataView;

@interface WAMessageDocumentSliceView : WAMessageContainerSliceView
{
    UIView *_containerView;
    UIView *_imageContainerView;
    UIImageView *_imageView;
    UIImageView *_iconImageView;
    WAMessageDocumentSliceMetadataView *_metadataView;
    long long _imageQuality;
}

+ (_Bool)pairsWithQuickActionButton;
+ (_Bool)needsProgressView;
+ (_Bool)isUserInteractionEnabled;
- (void).cxx_destruct;
- (void)configureProgressView:(id)arg1;
- (void)layoutProgressView:(id)arg1;
- (id)newStandardProgressView;
- (void)reloadSliceAfterChange:(unsigned long long)arg1;
- (_Bool)isDoubleTapGestureEnabled;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, nonatomic) WAMessageDocumentSlice *slice; // @dynamic slice;

@end


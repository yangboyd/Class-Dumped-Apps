//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GOOBaseContentView.h"

@class GSXNetworkImageView, UIImageView;

@interface GSXImageContentView : GOOBaseContentView
{
    GSXNetworkImageView *_networkImageView;
    UIImageView *_imageView;
    struct UIEdgeInsets _imageInsets;
    _Bool selected;
    _Bool highlighted;
}

+ (double)heightForObject:(id)arg1 constrainedToWidth:(double)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (_Bool)isHighlighted;
- (void)setSelected:(_Bool)arg1;
- (_Bool)isSelected;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)updateViewWithObject:(id)arg1;
- (void)layoutSubviews;

@end


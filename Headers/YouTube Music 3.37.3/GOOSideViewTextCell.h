//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GOOSideViewCell.h"

@class NSString, UIImage, UIImageView, UILabel;

@interface GOOSideViewTextCell : GOOSideViewCell
{
    UIImageView *_imageView;
    UILabel *_textLabel;
}

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) UIImage *image;
- (id)initWithFrame:(struct CGRect)arg1;

@end


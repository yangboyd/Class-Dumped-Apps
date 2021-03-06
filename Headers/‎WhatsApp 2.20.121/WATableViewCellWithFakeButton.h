//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIColor, UIImage, UIImageView, WAShapeView;

@interface WATableViewCellWithFakeButton : UITableViewCell
{
    UIImageView *_imageView;
    WAShapeView *_imageViewBackground;
    UIColor *_backgroundImageColor;
    UIColor *_imageTintColor;
}

- (void).cxx_destruct;
- (void)updateSeparatorInset;
- (void)traitCollectionDidChange:(id)arg1;
@property(retain, nonatomic) UIColor *imageTintColor;
@property(retain, nonatomic) UIColor *imageBackgroundColor;
@property(retain, nonatomic) UIImage *buttonImage;
- (void)layoutSubviews;
- (double)leadingContentMargin;
- (void)updateColors;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


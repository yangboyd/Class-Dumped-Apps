//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIColor, UIImage;

@interface AWELiveMTColoredPillButton : UIButton
{
    double _cornerRadius;
    UIColor *_pillBackgroundColor;
    UIColor *_borderColor;
    double _borderWidth;
    UIImage *_image;
    struct CGSize _padding;
}

+ (id)imageWithColor:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) struct CGSize padding; // @synthesize padding=_padding;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(retain, nonatomic) UIColor *pillBackgroundColor; // @synthesize pillBackgroundColor=_pillBackgroundColor;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
- (void)update;
- (struct CGSize)intrinsicContentSize;
- (void)setUp;
- (void)layoutSubviews;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

@end


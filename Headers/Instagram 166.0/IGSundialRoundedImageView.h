//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, IGImageView, NSURL;

@interface IGSundialRoundedImageView : UIView
{
    IGImageView *_imageView;
    CAShapeLayer *_borderLayer;
    NSURL *_imageURL;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(nonatomic) double cornerRadius;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


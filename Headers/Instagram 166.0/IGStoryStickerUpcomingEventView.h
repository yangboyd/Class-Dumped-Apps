//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGBouncyButton, IGFixedWidthLayout, IGImageView, UIControl, UILabel;
@protocol IGLayoutElement;

@interface IGStoryStickerUpcomingEventView : UIView
{
    IGImageView *_imageView;
    UILabel *_eventText;
    UILabel *_titleText;
    UILabel *_subtitleText;
    id <IGLayoutElement> _layout;
    IGFixedWidthLayout *_fixedWidthLayoutConstraint;
    IGBouncyButton *_bouncyImageButton;
}

- (void).cxx_destruct;
- (void)configureWithTitle:(id)arg1 subtitle:(id)arg2 media:(id)arg3;
@property(readonly, nonatomic) UIControl *mediaImageView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


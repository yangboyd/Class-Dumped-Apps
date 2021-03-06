//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

#import <Module_Framework/YTPageStyling-Protocol.h>

@class CALayer, NSString, UIImage, UIImageView, YTLabel;

@interface YTEditMetadataPrivacyButton : UIButton <YTPageStyling>
{
    YTLabel *_titleLabel;
    UIImageView *_imageView;
    YTLabel *_textLabel;
    UIImageView *_expandImageView;
    CALayer *_borderBottomLayer;
    double _padding;
    UIImage *_image;
    NSString *_text;
    long long _style;
}

@property(nonatomic) long long style; // @synthesize style=_style;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) double padding; // @synthesize padding=_padding;
- (void).cxx_destruct;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


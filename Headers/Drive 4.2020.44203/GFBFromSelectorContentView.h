//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GOOBaseContentView.h>

@class GFBFromSelectorContentViewObject, MDCInkTouchController, UIImageView, UILabel, UITapGestureRecognizer;

@interface GFBFromSelectorContentView : GOOBaseContentView
{
    GFBFromSelectorContentViewObject *_object;
    UILabel *_fromLabel;
    UILabel *_emailAddressLabel;
    UIImageView *_downArrowImageView;
    MDCInkTouchController *_inkController;
    UITapGestureRecognizer *_tapRecognizer;
}

+ (double)heightForObject:(id)arg1 constrainedToWidth:(double)arg2;
- (void).cxx_destruct;
- (double)updateSubviewFramesForWidth:(double)arg1;
- (void)viewTapped:(id)arg1;
- (void)updateViewWithObject:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


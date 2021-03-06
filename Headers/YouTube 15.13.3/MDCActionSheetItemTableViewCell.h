//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class MDCActionSheetAction, MDCRippleTouchController, NSLayoutConstraint, UIColor, UIFont, UIImageView, UILabel, UIView;

@interface MDCActionSheetItemTableViewCell : UITableViewCell
{
    MDCActionSheetAction *_itemAction;
    NSLayoutConstraint *_titleLeadingConstraint;
    NSLayoutConstraint *_contentContainerTopConstraint;
    NSLayoutConstraint *_contentContainerLeadingConstraint;
    NSLayoutConstraint *_contentContainerBottomConstraint;
    NSLayoutConstraint *_contentContainerTrailingConstraint;
    _Bool _mdc_adjustsFontForContentSizeCategory;
    _Bool _addLeadingPadding;
    UIFont *_actionFont;
    UIColor *_actionTextColor;
    UIColor *_rippleColor;
    long long _imageRenderingMode;
    UILabel *_actionLabel;
    UIImageView *_actionImageView;
    MDCRippleTouchController *_rippleTouchController;
    UIView *_contentContainerView;
    UIView *_divider;
    struct UIEdgeInsets _contentEdgeInsets;
}

@property(retain, nonatomic) UIView *divider; // @synthesize divider=_divider;
@property(retain, nonatomic) UIView *contentContainerView; // @synthesize contentContainerView=_contentContainerView;
@property(retain, nonatomic) MDCRippleTouchController *rippleTouchController; // @synthesize rippleTouchController=_rippleTouchController;
@property(retain, nonatomic) UIImageView *actionImageView; // @synthesize actionImageView=_actionImageView;
@property(retain, nonatomic) UILabel *actionLabel; // @synthesize actionLabel=_actionLabel;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
@property(nonatomic) _Bool addLeadingPadding; // @synthesize addLeadingPadding=_addLeadingPadding;
@property(nonatomic) long long imageRenderingMode; // @synthesize imageRenderingMode=_imageRenderingMode;
@property(retain, nonatomic) UIColor *rippleColor; // @synthesize rippleColor=_rippleColor;
@property(retain, nonatomic) UIColor *actionTextColor; // @synthesize actionTextColor=_actionTextColor;
@property(retain, nonatomic) UIFont *actionFont; // @synthesize actionFont=_actionFont;
@property(nonatomic, setter=mdc_setAdjustsFontForContentSizeCategory:) _Bool mdc_adjustsFontForContentSizeCategory; // @synthesize mdc_adjustsFontForContentSizeCategory=_mdc_adjustsFontForContentSizeCategory;
- (void).cxx_destruct;
- (void)updateTitleFont;
@property(retain, nonatomic) MDCActionSheetAction *action;
@property(nonatomic) _Bool showsDivider;
@property(copy, nonatomic) UIColor *dividerColor;
- (void)layoutSubviews;
- (void)commonMDCActionSheetItemViewInit;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


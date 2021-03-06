//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, NSString, SPTSearchUIHeaderExperimentalStyle, SPTSearchUIMarginView, UIButton, UIImage, UIImageView, UILabel, UIStackView;

@interface SPTSearchUIHeaderExperimental : UIView
{
    CDUnknownBlockType _onSearchBarPress;
    CDUnknownBlockType _onPrimaryTrailingButtonPress;
    CDUnknownBlockType _onSecondaryTrailingButtonPress;
    SPTSearchUIHeaderExperimentalStyle *_style;
    UIStackView *_mainStackView;
    UILabel *_titleLabel;
    UIStackView *_horizontalStackView;
    UIButton *_searchBarButton;
    SPTSearchUIMarginView *_marginView;
    UIStackView *_searchBarStackView;
    UIImageView *_leadingImageView;
    UILabel *_searchBarLabel;
    UIButton *_primaryTrailingButton;
    UIButton *_secondaryTrailingButton;
    NSLayoutConstraint *_primaryTrailingButtonHeightConstraint;
}

+ (struct CGSize)preferredSizeForTitle:(id)arg1 searchBarText:(id)arg2 leadingAccessoryImage:(id)arg3 primaryTrailingAccessoryImage:(id)arg4 secondaryTrailingAccessoryImage:(id)arg5 style:(id)arg6;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSLayoutConstraint *primaryTrailingButtonHeightConstraint; // @synthesize primaryTrailingButtonHeightConstraint=_primaryTrailingButtonHeightConstraint;
@property(readonly, nonatomic) UIButton *secondaryTrailingButton; // @synthesize secondaryTrailingButton=_secondaryTrailingButton;
@property(readonly, nonatomic) UIButton *primaryTrailingButton; // @synthesize primaryTrailingButton=_primaryTrailingButton;
@property(readonly, nonatomic) UILabel *searchBarLabel; // @synthesize searchBarLabel=_searchBarLabel;
@property(readonly, nonatomic) UIImageView *leadingImageView; // @synthesize leadingImageView=_leadingImageView;
@property(readonly, nonatomic) UIStackView *searchBarStackView; // @synthesize searchBarStackView=_searchBarStackView;
@property(readonly, nonatomic) SPTSearchUIMarginView *marginView; // @synthesize marginView=_marginView;
@property(readonly, nonatomic) UIButton *searchBarButton; // @synthesize searchBarButton=_searchBarButton;
@property(readonly, nonatomic) UIStackView *horizontalStackView; // @synthesize horizontalStackView=_horizontalStackView;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIStackView *mainStackView; // @synthesize mainStackView=_mainStackView;
@property(copy, nonatomic) SPTSearchUIHeaderExperimentalStyle *style; // @synthesize style=_style;
@property(copy, nonatomic) CDUnknownBlockType onSecondaryTrailingButtonPress; // @synthesize onSecondaryTrailingButtonPress=_onSecondaryTrailingButtonPress;
@property(copy, nonatomic) CDUnknownBlockType onPrimaryTrailingButtonPress; // @synthesize onPrimaryTrailingButtonPress=_onPrimaryTrailingButtonPress;
@property(copy, nonatomic) CDUnknownBlockType onSearchBarPress; // @synthesize onSearchBarPress=_onSearchBarPress;
- (void)secondaryTrailingButtonPressed;
- (void)primaryTrailingButtonPressed;
- (void)searchBarPressed;
- (void)updateSubviews;
- (void)setUpConstraints;
- (void)setUpViewHierarchy;
- (void)setUpViews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(copy, nonatomic) NSString *secondaryTrailingAccessoryAccessibilityLabel;
@property(retain, nonatomic) UIImage *secondaryTrailingAccessoryImage;
@property(copy, nonatomic) NSString *primaryTrailingAccessoryAccessibilityLabel;
@property(retain, nonatomic) UIImage *primaryTrailingAccessoryImage;
@property(retain, nonatomic) UIImage *leadingAccessoryImage;
@property(copy, nonatomic) NSString *searchBarAccessibilityIdentifier;
@property(copy, nonatomic) NSString *searchBarAccessibilityLabel;
@property(copy, nonatomic) NSString *searchBarText;
@property(copy, nonatomic) NSString *title;
- (id)initWithFrame:(struct CGRect)arg1;

@end


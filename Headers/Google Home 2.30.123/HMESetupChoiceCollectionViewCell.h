//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MDCCollectionViewCell.h"

#import "HMESetupChoiceCell-Protocol.h"

@class HMEIconChoiceView, MDCButton, NSArray, NSLayoutConstraint, NSString, UIImageView, UILabel, UIStackView;
@protocol HMESetupChoice;

@interface HMESetupChoiceCollectionViewCell : MDCCollectionViewCell <HMESetupChoiceCell>
{
    id <HMESetupChoice> _choice;
    CDUnknownBlockType _accessoryButtonTappedCallback;
    UIStackView *_upperHorizontalStackView;
    UIStackView *_labelStackView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    HMEIconChoiceView *_iconChoiceView;
    UIImageView *_networkHeroImageView;
    UIImageView *_heroImageOverlayView;
    MDCButton *_accessoryButton;
    NSArray *_accessoryButtonConstraints;
    NSLayoutConstraint *_bottomContentConstraint;
}

+ (double)preferredHeightWithHeroImageForWidth:(double)arg1;
+ (double)preferredHeight;
+ (double)preferredHeightForWidth:(double)arg1 choice:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *bottomContentConstraint; // @synthesize bottomContentConstraint=_bottomContentConstraint;
@property(retain, nonatomic) NSArray *accessoryButtonConstraints; // @synthesize accessoryButtonConstraints=_accessoryButtonConstraints;
@property(retain, nonatomic) MDCButton *accessoryButton; // @synthesize accessoryButton=_accessoryButton;
@property(retain, nonatomic) UIImageView *heroImageOverlayView; // @synthesize heroImageOverlayView=_heroImageOverlayView;
@property(retain, nonatomic) UIImageView *networkHeroImageView; // @synthesize networkHeroImageView=_networkHeroImageView;
@property(retain, nonatomic) HMEIconChoiceView *iconChoiceView; // @synthesize iconChoiceView=_iconChoiceView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIStackView *labelStackView; // @synthesize labelStackView=_labelStackView;
@property(retain, nonatomic) UIStackView *upperHorizontalStackView; // @synthesize upperHorizontalStackView=_upperHorizontalStackView;
@property(copy, nonatomic) CDUnknownBlockType accessoryButtonTappedCallback; // @synthesize accessoryButtonTappedCallback=_accessoryButtonTappedCallback;
@property(retain, nonatomic) id <HMESetupChoice> choice; // @synthesize choice=_choice;
- (void)prepareForReuse;
- (void)markAsSelected:(_Bool)arg1 disabled:(_Bool)arg2 animated:(_Bool)arg3;
- (void)markAsSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)iconImageForChoice:(id)arg1;
- (void)accessoryButtonTapped;
- (void)renderChoice:(id)arg1;
- (void)updateFonts;
- (void)setAccessoryButtonHidden:(_Bool)arg1;
- (void)createConstraints;
- (id)createIconChoiceViewConstraints;
- (id)createUpperHorizontalStackViewContraints;
- (void)createSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


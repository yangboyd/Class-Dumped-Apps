//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AWRatingStarsView, NSArray, NSString, UIButton, UIImageView, UILabel;
@protocol A9VSFezProductInfoViewDelegate;

@interface A9VSFezProductInfoView : UIView
{
    _Bool _isVariableConstraintsInPortrait;
    NSString *_asin;
    UIView *_topStopperView;
    UIImageView *_productImageView;
    UIView *_detailsView;
    UILabel *_titleLabel;
    AWRatingStarsView *_ratingStarsView;
    UILabel *_ratingsCountLabel;
    UILabel *_priceLabel;
    UIImageView *_primeImageView;
    UIButton *_productDetailsButton;
    UIView *_bottomStopperView;
    NSArray *_variableConstraintsOnRotation;
    id <A9VSFezProductInfoViewDelegate> _delegate;
}

@property(nonatomic) __weak id <A9VSFezProductInfoViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isVariableConstraintsInPortrait; // @synthesize isVariableConstraintsInPortrait=_isVariableConstraintsInPortrait;
@property(retain, nonatomic) NSArray *variableConstraintsOnRotation; // @synthesize variableConstraintsOnRotation=_variableConstraintsOnRotation;
@property(retain, nonatomic) UIView *bottomStopperView; // @synthesize bottomStopperView=_bottomStopperView;
@property(retain, nonatomic) UIButton *productDetailsButton; // @synthesize productDetailsButton=_productDetailsButton;
@property(retain, nonatomic) UIImageView *primeImageView; // @synthesize primeImageView=_primeImageView;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *ratingsCountLabel; // @synthesize ratingsCountLabel=_ratingsCountLabel;
@property(retain, nonatomic) AWRatingStarsView *ratingStarsView; // @synthesize ratingStarsView=_ratingStarsView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *detailsView; // @synthesize detailsView=_detailsView;
@property(retain, nonatomic) UIImageView *productImageView; // @synthesize productImageView=_productImageView;
@property(retain, nonatomic) UIView *topStopperView; // @synthesize topStopperView=_topStopperView;
@property(retain, nonatomic) NSString *asin; // @synthesize asin=_asin;
- (void).cxx_destruct;
- (id)priceAttributedTextWithPrice:(id)arg1;
- (void)productDetailsButtonTapped;
- (void)updateProductInfo:(id)arg1;
- (void)layoutSubviews;
- (void)updateVariableConstraintsToLandscape;
- (void)updateVariableConstraintsToPortrait;
- (void)setUpDetailsViewConstraints;
- (id)stopperView;
- (id)initWithDelegate:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GBTCardView.h"

@class GBTNetworkImageView, GBTSmartMailCardViewModel, NSArray, NSMutableArray, NSString, UIButton, UIImageView, UILabel, UIView;
@protocol JBTGenericSmartMailLayout, JBTSmartMailComponent;

@interface GBTSmartMailCardView : GBTCardView
{
    NSString *_appUrl;
    UIView *_border;
    NSString *_fallbackUrl;
    UIButton *_imageButton;
    GBTNetworkImageView *_imageView;
    double _lastLoadedImageHeight;
    UIView *_leftStatusContainer;
    UIImageView *_leftStatusIcon;
    UILabel *_leftStatusLabel;
    GBTSmartMailCardViewModel *_model;
    NSMutableArray *_accessibilityCustomActions;
    NSArray *_allowedInsecureImageURLSchemes;
    id <JBTGenericSmartMailLayout> _layout;
    id <JBTSmartMailComponent> _smartMailComponent;
}

+ (void)handleLowMemory:(id)arg1;
+ (double)snippetLeftMargin;
+ (void)initialize;
+ (double)imageWidth;
+ (double)heightWithLayout:(id)arg1 width:(double)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <JBTSmartMailComponent> smartMailComponent; // @synthesize smartMailComponent=_smartMailComponent;
@property(readonly, nonatomic) id <JBTGenericSmartMailLayout> layout; // @synthesize layout=_layout;
@property(retain, nonatomic) NSArray *allowedInsecureImageURLSchemes; // @synthesize allowedInsecureImageURLSchemes=_allowedInsecureImageURLSchemes;
- (id)defaultImageFromStockImageType:(id)arg1;
- (id)filterImage:(id)arg1 overlay:(_Bool)arg2;
- (void)userDidSelectInView:(id)arg1 withDelegate:(id)arg2;
- (void)reloadImages;
- (void)updateImageViewWithImage:(id)arg1 client:(id)arg2;
- (void)createSubviews;
- (void)cardTapped;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setLayout:(id)arg1 client:(id)arg2;
- (void)setSmartMailComponent:(id)arg1 client:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateWithModel:(id)arg1;
- (void)updateModelWithCurrentLayoutAndClient:(id)arg1;

@end


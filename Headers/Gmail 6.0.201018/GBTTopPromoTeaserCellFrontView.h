//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GBTDefaultCellFrontView.h"

#import "GBTThemeable-Protocol.h"
#import "UpdateableWithNugget-Protocol.h"

@class GBTBadgeView, GBTNugget, NSDictionary, NSString, UIImageView, UILabel, UIView;

@interface GBTTopPromoTeaserCellFrontView : GBTDefaultCellFrontView <GBTThemeable, UpdateableWithNugget>
{
    GBTNugget *_nugget;
    NSDictionary *_subviewsForLayout;
    NSString *_accessibilityLabel;
    UIView *_logosView;
    GBTBadgeView *_promoBadge;
    UILabel *_sendersLabel;
    UILabel *_subtitleLabel;
    UIImageView *_tabImageView;
    UILabel *_titleLabel;
    GBTBadgeView *_unseenCountBadge;
}

+ (double)heightWithObject:(id)arg1 width:(double)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) GBTBadgeView *unseenCountBadge; // @synthesize unseenCountBadge=_unseenCountBadge;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *tabImageView; // @synthesize tabImageView=_tabImageView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *sendersLabel; // @synthesize sendersLabel=_sendersLabel;
@property(retain, nonatomic) GBTBadgeView *promoBadge; // @synthesize promoBadge=_promoBadge;
@property(retain, nonatomic) UIView *logosView; // @synthesize logosView=_logosView;
@property(retain, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property(retain, nonatomic) NSDictionary *subviewsForLayout; // @synthesize subviewsForLayout=_subviewsForLayout;
@property(retain, nonatomic) GBTNugget *nugget; // @synthesize nugget=_nugget;
- (void)resetLogosView;
- (void)createSubviews;
- (id)viewLayout;
- (void)gbt_applyTheme:(id)arg1;
- (void)updateWithNugget:(id)arg1 parentVisualElement:(id)arg2;
- (id)accessibilityIdentifier;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


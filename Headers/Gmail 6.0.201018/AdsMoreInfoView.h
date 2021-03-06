//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GBTPlainButton;
@protocol AdsMoreInfoViewDelegate, JBTAd;

@interface AdsMoreInfoView : UIView
{
    GBTPlainButton *_whyThisAdButton;
    id <JBTAd> _ad;
    id <AdsMoreInfoViewDelegate> _delegate;
}

+ (double)heightWithAd:(id)arg1 width:(double)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak id <AdsMoreInfoViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <JBTAd> ad; // @synthesize ad=_ad;
- (void)learnMoreTapped;
- (void)controlAdsTapped;
- (void)createSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QTMButton, UILabel, YTMBevelView;

@interface YTMNavigationDrawerPromoView : UIView
{
    UILabel *_subtitleLabel;
    YTMBevelView *_dividerView;
    _Bool _shouldSizeToFit;
    QTMButton *_promoButton;
}

@property(readonly, nonatomic) QTMButton *promoButton; // @synthesize promoButton=_promoButton;
- (void).cxx_destruct;
- (void)sizeSubviewsIfNeeded;
- (void)loadModel:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)init;

@end


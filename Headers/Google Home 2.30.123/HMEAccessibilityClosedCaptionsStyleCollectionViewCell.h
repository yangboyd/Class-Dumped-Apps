//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UILabel, UIView;

@interface HMEAccessibilityClosedCaptionsStyleCollectionViewCell : UICollectionViewCell
{
    UIView *_captionBackgroundView;
    UILabel *_closedCaptionsLabel;
    UILabel *_descriptionLabel;
}

+ (double)preferredHeightForWidth:(double)arg1 style:(long long)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(readonly, nonatomic) UILabel *closedCaptionsLabel; // @synthesize closedCaptionsLabel=_closedCaptionsLabel;
@property(readonly, nonatomic) UIView *captionBackgroundView; // @synthesize captionBackgroundView=_captionBackgroundView;
- (void)renderForStyle:(long long)arg1;
- (void)setupConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end


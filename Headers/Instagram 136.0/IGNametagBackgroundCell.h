//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IGGradientView, IGNametagBackgroundModeConfiguration, UITapGestureRecognizer;
@protocol IGNametagBackgroundCellDelegate;

@interface IGNametagBackgroundCell : UICollectionViewCell
{
    IGGradientView *_gradientView;
    UITapGestureRecognizer *_tapGesture;
    IGNametagBackgroundModeConfiguration *_configuration;
    id <IGNametagBackgroundCellDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_didUpdateBackground;
- (void)layoutSubviews;
- (void)configWithBgConfiguration:(id)arg1 delegate:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end


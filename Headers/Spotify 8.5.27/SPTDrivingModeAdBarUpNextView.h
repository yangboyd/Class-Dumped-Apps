//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface SPTDrivingModeAdBarUpNextView : UIView
{
    _Bool _setupComplete;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_contextLabel;
}

@property(nonatomic) _Bool setupComplete; // @synthesize setupComplete=_setupComplete;
@property(readonly, nonatomic) UILabel *contextLabel; // @synthesize contextLabel=_contextLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void).cxx_destruct;
- (void)setCurrentPivotItem:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


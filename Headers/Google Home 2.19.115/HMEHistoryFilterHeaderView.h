//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class NSLayoutConstraint, NSString, UILabel, UIView;

@interface HMEHistoryFilterHeaderView : UICollectionReusableView
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIView *_separatorView;
    NSLayoutConstraint *_separatorViewTopConstraint;
}

@property(readonly, nonatomic) NSLayoutConstraint *separatorViewTopConstraint; // @synthesize separatorViewTopConstraint=_separatorViewTopConstraint;
@property(readonly, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *title;
- (void)setShowSeparatorLine:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


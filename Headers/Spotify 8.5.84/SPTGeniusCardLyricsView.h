//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTGeniusCardView.h"

@class UIImageView, UILabel, UIView;

@interface SPTGeniusCardLyricsView : SPTGeniusCardView
{
    UILabel *_titleLabel;
    UIImageView *_iconImageView;
    UIView *_leftDividerView;
    UIView *_rightDividerView;
    UILabel *_annotationLabel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UILabel *annotationLabel; // @synthesize annotationLabel=_annotationLabel;
@property(readonly, nonatomic) UIView *rightDividerView; // @synthesize rightDividerView=_rightDividerView;
@property(readonly, nonatomic) UIView *leftDividerView; // @synthesize leftDividerView=_leftDividerView;
@property(readonly, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (id)annotationAttributedString;
- (id)titleAttributedString;
- (void)activateConstraints;
- (void)customizeAppearance;
- (void)buildHierarchy;
- (id)initWithAnnotation:(id)arg1;

@end


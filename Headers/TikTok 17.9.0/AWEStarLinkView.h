//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AWEUserModel, UIImageView, UILabel;

@interface AWEStarLinkView : UIView
{
    UIImageView *_iconImageView;
    UILabel *_label;
    UIImageView *_arrowImageView;
    AWEUserModel *_user;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AWEUserModel *user; // @synthesize user=_user;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void)trackTap;
- (void)trackShow;
- (void)didTap;
- (void)handleTap:(id)arg1;
- (id)defaultIconForModel:(id)arg1;
- (void)updateWithUser:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface ASTHomeControlHeaderView : UIView
{
    UILabel *_titleLabel;
    UIImageView *_subtitleIcon;
    UILabel *_subtitleLabel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UIImageView *subtitleIcon; // @synthesize subtitleIcon=_subtitleIcon;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (id)initWithTitle:(id)arg1 icon:(id)arg2 subtitle:(id)arg3;

@end


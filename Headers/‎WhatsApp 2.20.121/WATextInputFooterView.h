//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSLayoutConstraint, UILabel;

@interface WATextInputFooterView : UIView
{
    NSLayoutConstraint *_leftMargin;
    NSLayoutConstraint *_rightMargin;
    NSArray *_topMargins;
    NSArray *_bottomMargins;
    UILabel *_leftLabel;
    UILabel *_rightLabel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UILabel *rightLabel; // @synthesize rightLabel=_rightLabel;
@property(readonly, nonatomic) UILabel *leftLabel; // @synthesize leftLabel=_leftLabel;
- (id)initWithFrame:(struct CGRect)arg1;

@end


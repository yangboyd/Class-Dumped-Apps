//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;
@protocol IGActivityNavigationHeaderViewDelegate;

@interface IGActivityNavigationHeaderView : UIView
{
    UILabel *_titleLabel;
    UIButton *_backButton;
    UIButton *_rightButton;
    UIView *_separatorView;
    _Bool _backButtonEnabled;
    id <IGActivityNavigationHeaderViewDelegate> _delegate;
    double _height;
}

- (void).cxx_destruct;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) __weak id <IGActivityNavigationHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double separatorAlpha;
- (void)_backButtonTapped;
- (void)setRightButton:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 backButtonEnabled:(_Bool)arg2;

@end


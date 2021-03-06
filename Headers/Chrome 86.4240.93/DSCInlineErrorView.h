//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChromeInternal/DSCContentView.h>

@class UIButton, UILabel, UIView;

@interface DSCInlineErrorView : DSCContentView
{
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UIButton *_tryAgainButton;
    UIView *_dividerBar;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *dividerBar; // @synthesize dividerBar=_dividerBar;
@property(retain, nonatomic) UIButton *tryAgainButton; // @synthesize tryAgainButton=_tryAgainButton;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (id)lastUpdatedStringFromError:(id)arg1;
- (id)errorDescriptionStringFromError:(id)arg1;
- (id)errorTitleFromError:(id)arg1;
- (void)retryPressed:(id)arg1;
- (void)setData:(id)arg1;
- (void)createViews;

@end


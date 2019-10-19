//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class YTFormattedStringLabel, YTQTMButton;
@protocol YTRequiredSignInErrorViewDelegate;

@interface YTRequiredSignInErrorView : UIView
{
    id <YTRequiredSignInErrorViewDelegate> _delegate;
    YTFormattedStringLabel *_titleLabel;
    YTFormattedStringLabel *_bodyLabel;
    YTQTMButton *_retryButton;
}

@property(retain, nonatomic) YTQTMButton *retryButton; // @synthesize retryButton=_retryButton;
@property(retain, nonatomic) YTFormattedStringLabel *bodyLabel; // @synthesize bodyLabel=_bodyLabel;
@property(retain, nonatomic) YTFormattedStringLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <YTRequiredSignInErrorViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)retry;
- (id)accessibilityElements;
- (void)layoutSubviews;
- (id)initWithTitle:(id)arg1 body:(id)arg2 delegate:(id)arg3;

@end


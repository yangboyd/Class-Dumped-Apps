//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGDirectInteropUpgradeViewModel, IGStackView, NSArray, UIImageView, UILabel, UIScrollView;

@interface IGDirectInteropUpgradeView : UIView
{
    IGDirectInteropUpgradeViewModel *_viewModel;
    NSArray *_featureHighlightViews;
    UIImageView *_headerImageView;
    UILabel *_headerLabel;
    IGStackView *_featureHighlightsStackView;
    UIScrollView *_scrollView;
    _Bool _smallScreen;
}

- (void).cxx_destruct;
- (id)_createFeatureHighlightViews;
- (void)updateHeaderImageView;
- (void)layoutSubviews;
- (id)initWithViewModel:(id)arg1 textViewDelegate:(id)arg2;

@end


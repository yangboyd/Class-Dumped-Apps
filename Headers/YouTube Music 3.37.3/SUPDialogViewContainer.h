//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIScrollView;

@interface SUPDialogViewContainer : UIView
{
    UIScrollView *_scrollView;
    UIView *_contentView;
    UIView *_headerView;
    UIView *_footerView;
    double _maxWidth;
    double _maxHeightRatio;
}

@property(nonatomic) double maxHeightRatio; // @synthesize maxHeightRatio=_maxHeightRatio;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithContentView:(id)arg1 headerView:(id)arg2 footerView:(id)arg3;
- (id)initWithContentView:(id)arg1;

@end


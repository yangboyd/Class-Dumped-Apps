//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCViewModelConfigurable-Protocol.h"

@class NSString, SCBottomBorderedView, SCButton, SCGrowingButton, SIGActivityIndicatorView, SIGPullToRefreshView, UICollectionView, UILabel;
@protocol SCDynamicLayoutDelegate;

@interface SCDynamicLayoutView : UIView <SCViewModelConfigurable>
{
    SIGPullToRefreshView *_pullToRefreshView;
    SIGActivityIndicatorView *_pullToRefreshActivityIndicatorView;
    SCBottomBorderedView *_header;
    UILabel *_titleLabel;
    SCButton *_backButton;
    SCGrowingButton *_scrollToTopButton;
    id _viewModel;
    id <SCDynamicLayoutDelegate> _delegate;
    UICollectionView *_contentCollectionView;
}

@property(readonly, nonatomic) UICollectionView *contentCollectionView; // @synthesize contentCollectionView=_contentCollectionView;
@property(nonatomic) __weak id <SCDynamicLayoutDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)fadeOutScrollToTopButton;
- (void)fadeInScrollToTopButton;
- (void)_scrollToTop;
- (void)_didTapBackButton;
- (id)pullToRefreshActivityIndicatorView;
- (id)pullToRefreshView;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithDefaultCollectionViewLayout:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


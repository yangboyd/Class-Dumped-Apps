//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, SCSavingSnapsMessageCardViewModel, UIImageView, UILabel;
@protocol SCSavingSnapChatCardViewDelegate;

@interface SCSavingSnapsMessageCardBaseView : UIView
{
    UILabel *_titleLabel;
    UILabel *_subtextLabel;
    UIImageView *_arrowIcon;
    UIView *_titleContainerView;
    UIView *_lineView;
    CAShapeLayer *_maskLayer;
    id <SCSavingSnapChatCardViewDelegate> _delegate;
    SCSavingSnapsMessageCardViewModel *_viewModel;
    UIView *_imagesContainerView;
}

@property(readonly, nonatomic) UIView *imagesContainerView; // @synthesize imagesContainerView=_imagesContainerView;
@property(readonly, copy, nonatomic) SCSavingSnapsMessageCardViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) __weak id <SCSavingSnapChatCardViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_handleTap:(id)arg1;
- (void)_updateLayouts;
- (void)setViewModel:(id)arg1 delegate:(id)arg2;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


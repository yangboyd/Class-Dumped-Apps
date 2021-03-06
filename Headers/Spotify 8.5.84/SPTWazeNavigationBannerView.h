//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTBannerView.h"

#import "SPTWazeNavigationBannerViewModelDelegate-Protocol.h"

@class NSString, SPTWazeNavigationBannerViewModel, UIButton, UIImageView, UILabel;

@interface SPTWazeNavigationBannerView : SPTBannerView <SPTWazeNavigationBannerViewModelDelegate>
{
    SPTWazeNavigationBannerViewModel *_viewModel;
    UIButton *_actionButton;
    UIImageView *_instructionImageView;
    UILabel *_roundaboutExitLabel;
    UILabel *_titleLabel;
    UIImageView *_iconImageView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UILabel *roundaboutExitLabel; // @synthesize roundaboutExitLabel=_roundaboutExitLabel;
@property(readonly, nonatomic) UIImageView *instructionImageView; // @synthesize instructionImageView=_instructionImageView;
@property(readonly, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(readonly, nonatomic) SPTWazeNavigationBannerViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)actionButtonTap;
- (void)viewModelDidUpdate:(id)arg1;
- (void)applyThemeLayout;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


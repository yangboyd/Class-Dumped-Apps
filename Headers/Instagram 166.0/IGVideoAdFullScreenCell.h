//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IGVideoAdCTAView, IGVideoAdControlsView, IGVideoAdHeaderView, IGVideoAdItem, UISwipeGestureRecognizer, UIView;
@protocol IGVideoAdViewerDelegate;

@interface IGVideoAdFullScreenCell : UICollectionViewCell
{
    UIView *_videoView;
    UIView *_videoContainerView;
    UIView *_overlayContentView;
    UIView *_backgroundView;
    IGVideoAdHeaderView *_headerView;
    IGVideoAdCTAView *_ctaView;
    IGVideoAdItem *_videoAdItem;
    UISwipeGestureRecognizer *_swipeUpGestureRecognizer;
    IGVideoAdControlsView *_controlsView;
    id <IGVideoAdViewerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGVideoAdViewerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) IGVideoAdControlsView *controlsView; // @synthesize controlsView=_controlsView;
- (void)_handleSwipeUpGesture:(id)arg1;
- (void)_resetVideoView;
- (void)updateProgress:(double)arg1 timeLeft:(double)arg2;
- (void)configureWithVideoView:(id)arg1 videoAdItem:(id)arg2 analyticsModule:(id)arg3;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "GCKSessionManagerListener-Protocol.h"
#import "GCKUIMediaButtonBarProtocol-Protocol.h"
#import "GCKUIMediaControllerDelegate-Protocol.h"

@class GCKAnalyticsEventLogger, GCKSessionManager, GCKUIButtonBarViewController, GCKUIMediaController, GCKUIStyleAttributes, NSLayoutConstraint, NSString, UIImageView, UILabel, UIProgressView, UIView;
@protocol GCKUIMiniMediaControlsViewControllerDelegate;

@interface GCKUIMiniMediaControlsViewController : UIViewController <GCKUIMediaControllerDelegate, GCKSessionManagerListener, GCKUIMediaButtonBarProtocol>
{
    GCKSessionManager *_sessionManager;
    GCKAnalyticsEventLogger *_analyticsEventLogger;
    GCKUIStyleAttributes *_styleAttributes;
    GCKUIMediaController *_mediaController;
    GCKUIButtonBarViewController *_buttonBarViewController;
    NSLayoutConstraint *_buttonBarVisibleWidthConstraint;
    NSLayoutConstraint *_thumbnailWidthConstraint;
    UIImageView *_thumbnailImageView;
    UILabel *_subtitleLabel;
    UILabel *_titleLabel;
    UIProgressView *_streamProgressView;
    UIView *_barContainerView;
    UIView *_shadowView;
    _Bool _thumbnailEnabled;
    _Bool _active;
    id <GCKUIMiniMediaControlsViewControllerDelegate> _delegate;
    double _minHeight;
}

@property(readonly, nonatomic) double minHeight; // @synthesize minHeight=_minHeight;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(nonatomic) _Bool thumbnailEnabled; // @synthesize thumbnailEnabled=_thumbnailEnabled;
@property(nonatomic) __weak id <GCKUIMiniMediaControlsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)applyStyleAttributes;
- (void)didTapParentView:(id)arg1;
- (void)sessionManager:(id)arg1 didSuspendSession:(id)arg2 withReason:(long long)arg3;
- (void)sessionManager:(id)arg1 didEndSession:(id)arg2 withError:(id)arg3;
- (void)mediaController:(id)arg1 didUpdatePlayerState:(long long)arg2 lastStreamPosition:(double)arg3;
- (void)setThumbnailVisible:(_Bool)arg1;
- (id)customButtonAtIndex:(unsigned long long)arg1;
- (void)setCustomButton:(id)arg1 atIndex:(unsigned long long)arg2;
- (long long)buttonTypeAtIndex:(unsigned long long)arg1;
- (void)setButtonType:(long long)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)buttonCount;
- (void)updateLabelConstraint;
- (void)applyShadowEffect;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "MOPUBPlayerViewControllerDelegate-Protocol.h"
#import "MPAdDestinationDisplayAgentDelegate-Protocol.h"

@class CAGradientLayer, MOPUBActivityIndicatorView, MOPUBPlayerView, MOPUBPlayerViewController, MPAdDestinationDisplayAgent, NSString, UIActivityIndicatorView, UIButton, UIView;
@protocol MOPUBFullscreenPlayerViewControllerDelegate;

@interface MOPUBFullscreenPlayerViewController : UIViewController <MPAdDestinationDisplayAgentDelegate, MOPUBPlayerViewControllerDelegate>
{
    MOPUBPlayerView *_playerView;
    id <MOPUBFullscreenPlayerViewControllerDelegate> _delegate;
    UIButton *_daaButton;
    UIButton *_closeButton;
    UIButton *_ctaButton;
    MOPUBActivityIndicatorView *_stallSpinner;
    UIActivityIndicatorView *_playerNotReadySpinner;
    UIView *_gradientView;
    CAGradientLayer *_gradient;
    MOPUBPlayerViewController *_playerController;
    UIView *_originalParentView;
    MPAdDestinationDisplayAgent *_displayAgent;
    CDUnknownBlockType _dismissBlock;
}

@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
@property(retain, nonatomic) MPAdDestinationDisplayAgent *displayAgent; // @synthesize displayAgent=_displayAgent;
@property(retain, nonatomic) UIView *originalParentView; // @synthesize originalParentView=_originalParentView;
@property(retain, nonatomic) MOPUBPlayerViewController *playerController; // @synthesize playerController=_playerController;
@property(retain, nonatomic) CAGradientLayer *gradient; // @synthesize gradient=_gradient;
@property(retain, nonatomic) UIView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) UIActivityIndicatorView *playerNotReadySpinner; // @synthesize playerNotReadySpinner=_playerNotReadySpinner;
@property(retain, nonatomic) MOPUBActivityIndicatorView *stallSpinner; // @synthesize stallSpinner=_stallSpinner;
@property(retain, nonatomic) UIButton *ctaButton; // @synthesize ctaButton=_ctaButton;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIButton *daaButton; // @synthesize daaButton=_daaButton;
@property(nonatomic) __weak id <MOPUBFullscreenPlayerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MOPUBPlayerView *playerView; // @synthesize playerView=_playerView;
- (void).cxx_destruct;
- (_Bool)prefersStatusBarHidden;
- (void)setApplicationStatusBarHidden:(_Bool)arg1;
- (void)displayAgentDidDismissModal;
- (void)displayAgentWillLeaveApplication;
- (void)displayAgentWillPresentModal;
- (id)viewControllerForPresentingModalView;
- (void)playerDidProgressToTime:(double)arg1;
- (void)playerViewController:(id)arg1 didRecoverFromStall:(id)arg2;
- (void)playerViewController:(id)arg1 didStall:(id)arg2;
- (void)playerViewController:(id)arg1 willShowReplayView:(id)arg2;
- (void)playerPlaybackDidStart:(id)arg1;
- (void)daaButtonTapped;
- (void)ctaButtonTapped;
- (void)closeButtonTapped;
- (void)layoutGradientView;
- (void)layoutPlayerNotReadySpinner;
- (void)layoutStallSpinner;
- (void)layoutCtaButton;
- (void)layoutCloseButton;
- (void)layoutDaaButton;
- (void)layoutPlayerView;
- (void)viewWillLayoutSubviews;
- (void)removePlayerNotReadySpinner;
- (void)createPlayerNotReadySpinner;
- (void)hideStallSpinner;
- (void)showStallSpinner;
- (void)createAndAddGradientView;
- (void)viewDidLoad;
- (id)initWithVideoPlayer:(id)arg1 dismissBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


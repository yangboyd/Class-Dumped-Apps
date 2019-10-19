//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAlert.h"

#import "SBWorkspaceAlertAnimationProviding.h"

@class NSString, SBSpotlightAlertSpotlightViewController, UIView;

@interface SBSpotlightAlert : SBAlert <SBWorkspaceAlertAnimationProviding>
{
    _Bool _wantsToHandleItsOwnAnimation;
    CDUnknownBlockType _presentationCompletionHandler;
    CDUnknownBlockType _dismissalCompletionHandler;
    SBSpotlightAlertSpotlightViewController *_spotlightViewController;
    UIView *_backgroundView;
}

@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(readonly, nonatomic) SBSpotlightAlertSpotlightViewController *spotlightViewController; // @synthesize spotlightViewController=_spotlightViewController;
@property(copy, nonatomic) CDUnknownBlockType dismissalCompletionHandler; // @synthesize dismissalCompletionHandler=_dismissalCompletionHandler;
@property(copy, nonatomic) CDUnknownBlockType presentationCompletionHandler; // @synthesize presentationCompletionHandler=_presentationCompletionHandler;
@property(nonatomic) _Bool wantsToHandleItsOwnAnimation; // @synthesize wantsToHandleItsOwnAnimation=_wantsToHandleItsOwnAnimation;
- (void).cxx_destruct;
- (_Bool)handleHomeButtonPress;
- (_Bool)wantsHomeButtonPress;
- (void)setVisible:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)activate;
- (id)alertDisplayViewWithSize:(struct CGSize)arg1;
- (_Bool)suppressesControlCenter;
- (_Bool)shouldDismissOnUILock;
- (_Bool)shouldDismissWithGoToHomeShortcut;
- (_Bool)hasTranslucentBackground;
- (void)orderOutWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)orderFrontWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)alertView;
- (void)loadView;
- (void)viewDidLayoutSubviews;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


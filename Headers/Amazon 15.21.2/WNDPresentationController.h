//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPresentationController.h>

#import "ANXAppearanceManagerListener-Protocol.h"

@class NSString, SKView, UIView, WNDNavMenuAnimator;
@protocol ANXAppearanceContext, ANXMetricsService, ANXNavMenuEventDelegate, ANXWeblabTriggerService;

@interface WNDPresentationController : UIPresentationController <ANXAppearanceManagerListener>
{
    _Bool _interactive;
    UIView *_dimmingView;
    WNDNavMenuAnimator *_animator;
    id <ANXNavMenuEventDelegate> _eventDelegate;
    id <ANXMetricsService> _metricsService;
    id <ANXAppearanceContext> _context;
    SKView *_snowFlakesView;
    id <ANXWeblabTriggerService> _weblabService;
}

@property(retain, nonatomic) id <ANXWeblabTriggerService> weblabService; // @synthesize weblabService=_weblabService;
@property(retain, nonatomic) SKView *snowFlakesView; // @synthesize snowFlakesView=_snowFlakesView;
@property(retain, nonatomic) id <ANXAppearanceContext> context; // @synthesize context=_context;
@property(nonatomic) _Bool interactive; // @synthesize interactive=_interactive;
@property(retain, nonatomic) id <ANXMetricsService> metricsService; // @synthesize metricsService=_metricsService;
@property(retain, nonatomic) id <ANXNavMenuEventDelegate> eventDelegate; // @synthesize eventDelegate=_eventDelegate;
@property(retain, nonatomic) WNDNavMenuAnimator *animator; // @synthesize animator=_animator;
@property(retain, nonatomic) UIView *dimmingView; // @synthesize dimmingView=_dimmingView;
- (void).cxx_destruct;
- (void)setContext:(id)arg1 transition:(id)arg2 animated:(_Bool)arg3;
- (void)setupAutoLayoutConstraintsForChildView:(id)arg1 fillingParentView:(id)arg2;
- (void)addGradient;
- (void)backgroundViewDidTap:(id)arg1;
- (_Bool)snowFlakeWeblabEnabled;
- (void)setUpSnowFlakesView;
- (void)setUpDimmingView;
- (void)dismissalTransitionDidEnd:(_Bool)arg1;
- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionDidEnd:(_Bool)arg1;
- (void)presentationTransitionWillBegin;
- (void)dealloc;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 eventDelegate:(id)arg3 appearanceManager:(id)arg4 metrics:(id)arg5 interactive:(_Bool)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


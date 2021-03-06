//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PSPDFKitUI/PSPDFNavigationController.h>

@class UINavigationBar, UIPercentDrivenInteractiveTransition, UIVisualEffectView;

@interface PSPDFPaddingNavigationController : PSPDFNavigationController
{
    UINavigationBar *_backgroundNavigationBar;
    UIPercentDrivenInteractiveTransition *_interactionController;
    UIVisualEffectView *_backgroundVisualEffectView;
}

@property(readonly, nonatomic) UIVisualEffectView *backgroundVisualEffectView; // @synthesize backgroundVisualEffectView=_backgroundVisualEffectView;
@property(retain, nonatomic) UIPercentDrivenInteractiveTransition *interactionController; // @synthesize interactionController=_interactionController;
- (void).cxx_destruct;
- (id)effectiveBackgroundEffectOfNavigationBar:(id)arg1;
- (id)effectiveBackgroundColorOfNavigationBar:(id)arg1;
- (void)updateBackgroundForNavigationBarAppearance:(id)arg1;
- (void)updateBackgroundForCurrentNavigationBarAppearance;
- (void)traitCollectionDidChange:(id)arg1;
- (void)pspdf_willTransitionToPresentationStyle:(long long)arg1 withTransitionCoordinator:(id)arg2;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)setPreferredContentSize:(struct CGSize)arg1;
- (void)handleEdgePan:(id)arg1;
- (void)setupBackgroundView:(id)arg1;
@property(readonly, nonatomic) UINavigationBar *backgroundNavigationBar; // @synthesize backgroundNavigationBar=_backgroundNavigationBar;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;
- (void)setViewControllers:(id)arg1;
- (id)popViewControllerAnimated:(_Bool)arg1;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;

@end


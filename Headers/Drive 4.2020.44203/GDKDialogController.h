//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <drive_extension_framework/GDKThemable-Protocol.h>
#import <drive_extension_framework/MDCElevatable-Protocol.h>
#import <drive_extension_framework/UIViewControllerTransitioningDelegate-Protocol.h>

@class GDKDialogPresentationController, GDKTheme, GOODimmingBackgroundView, GOOPopoverMenuView, NSString, UITraitCollection, UIView;
@protocol GDKDialogControllerDelegate;

@interface GDKDialogController : UIViewController <UIViewControllerTransitioningDelegate, GDKThemable, MDCElevatable>
{
    _Bool _dismissOnRotation;
    CDUnknownBlockType _mdc_elevationDidChangeBlock;
    id <GDKDialogControllerDelegate> _delegate;
    unsigned long long _arrowDirections;
    UIView *_anchorView;
    double _shadowElevation;
    UIViewController *_contentViewController;
    GDKDialogPresentationController *_presentationController;
    GOOPopoverMenuView *_popoverView;
    GDKTheme *_theme;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GDKTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) GOOPopoverMenuView *popoverView; // @synthesize popoverView=_popoverView;
@property(readonly, nonatomic) GDKDialogPresentationController *presentationController; // @synthesize presentationController=_presentationController;
@property(readonly, nonatomic) UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(nonatomic) double shadowElevation; // @synthesize shadowElevation=_shadowElevation;
@property(nonatomic, getter=shouldDismissOnRotation) _Bool dismissOnRotation; // @synthesize dismissOnRotation=_dismissOnRotation;
@property(retain, nonatomic) UIView *anchorView; // @synthesize anchorView=_anchorView;
@property(nonatomic) unsigned long long arrowDirections; // @synthesize arrowDirections=_arrowDirections;
@property(nonatomic) __weak id <GDKDialogControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType mdc_elevationDidChangeBlock; // @synthesize mdc_elevationDidChangeBlock=_mdc_elevationDidChangeBlock;
- (struct CGRect)orientedFrame:(struct CGRect)arg1;
- (void)repositionPopover;
- (void)layoutPopover;
@property(nonatomic, getter=shouldDimBackgroundWhilePresenting) _Bool dimBackgroundWhilePresenting;
@property(readonly, nonatomic) UIView *contentView;
@property(retain, nonatomic) GOODimmingBackgroundView *dimmingView;
- (void)appDidBecomeActive:(id)arg1;
- (void)appWillResignActive:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (_Bool)accessibilityPerformEscape;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
@property(readonly, nonatomic) double mdc_currentElevation;
- (void)applyTheme:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithContentViewController:(id)arg1 theme:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UITraitCollection *traitCollection;

@end


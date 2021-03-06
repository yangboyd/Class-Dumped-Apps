//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPresentationController.h>

#import <drive_extension_framework/UIGestureRecognizerDelegate-Protocol.h>

@class GOOPopoverView, GOOTouchForwardingView, NSArray, NSString, UIColor, UIView;

@interface GOOPopoverPresentationController : UIPresentationController <UIGestureRecognizerDelegate>
{
    _Bool _passesThroughTouchesOnPopoverView;
    _Bool _enableSwipeToDismiss;
    GOOTouchForwardingView *_backgroundView;
    UIView *_sourceView;
    unsigned long long _menuAnchor;
    unsigned long long _permittedArrowDirections;
    UIColor *_backgroundColor;
    double _presentationTransitionDuration;
    double _dismissalTransitionDuration;
    GOOPopoverView *_popoverView;
    struct CGRect _sourceRect;
}

+ (Class)popoverClassForMenuAnchor:(unsigned long long)arg1;
@property(retain, nonatomic) GOOPopoverView *popoverView; // @synthesize popoverView=_popoverView;
@property(nonatomic) double dismissalTransitionDuration; // @synthesize dismissalTransitionDuration=_dismissalTransitionDuration;
@property(nonatomic) double presentationTransitionDuration; // @synthesize presentationTransitionDuration=_presentationTransitionDuration;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) _Bool enableSwipeToDismiss; // @synthesize enableSwipeToDismiss=_enableSwipeToDismiss;
@property(nonatomic) _Bool passesThroughTouchesOnPopoverView; // @synthesize passesThroughTouchesOnPopoverView=_passesThroughTouchesOnPopoverView;
@property(nonatomic) unsigned long long permittedArrowDirections; // @synthesize permittedArrowDirections=_permittedArrowDirections;
@property(nonatomic) unsigned long long menuAnchor; // @synthesize menuAnchor=_menuAnchor;
@property(nonatomic) struct CGRect sourceRect; // @synthesize sourceRect=_sourceRect;
@property(retain, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
- (void).cxx_destruct;
- (void)positionPopover;
- (void)installPopoverInContainerView;
- (void)updateContentSize;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handleSwipeOnBackground:(id)arg1;
- (void)handleTapOnBackground:(id)arg1;
- (void)containerViewDidLayoutSubviews;
- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionWillBegin;
- (struct CGRect)frameOfPresentedViewInContainerView;
- (id)presentedView;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
@property(copy, nonatomic) NSArray *passthroughViews;
@property(readonly, nonatomic) GOOTouchForwardingView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 menuAnchor:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


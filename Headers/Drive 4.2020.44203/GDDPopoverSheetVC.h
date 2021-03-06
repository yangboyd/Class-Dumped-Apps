//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UIImageView, UIPanGestureRecognizer, UITapGestureRecognizer, UIView;
@protocol GDDModalControlDelegate, GDDPopoverSheetDelegate, GDDPopoverSheetGestureProtocol;

@interface GDDPopoverSheetVC : UIViewController <UIGestureRecognizerDelegate>
{
    _Bool _isHiding;
    _Bool _panScrollOffsetInitialized;
    struct CGPoint _panScrollOffsetStart;
    long long _transitionType;
    UIImageView *_shadowImageView;
    UIPanGestureRecognizer *_panRecognizer;
    UITapGestureRecognizer *_tapRecognizer;
    UIView *_overlayView;
    UIViewController *_contentVC;
    UIViewController *_parentVC;
    _Bool _isPresentingVC;
    _Bool _adjustsForKeyboard;
    id <GDDModalControlDelegate> _modalSheetControlDelegate;
    id <GDDPopoverSheetDelegate> _delegate;
    id <GDDPopoverSheetGestureProtocol> _gestureDelegate;
    struct CGSize _popoverContentSize;
}

+ (id)presentPopoverSheetWithVC:(id)arg1 parentVC:(id)arg2 transitionType:(long long)arg3 isAccessible:(_Bool)arg4;
- (void).cxx_destruct;
@property(nonatomic) _Bool adjustsForKeyboard; // @synthesize adjustsForKeyboard=_adjustsForKeyboard;
@property(readonly, nonatomic) _Bool isPresentingVC; // @synthesize isPresentingVC=_isPresentingVC;
@property(nonatomic) __weak id <GDDPopoverSheetGestureProtocol> gestureDelegate; // @synthesize gestureDelegate=_gestureDelegate;
@property(nonatomic) __weak id <GDDPopoverSheetDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <GDDModalControlDelegate> modalSheetControlDelegate; // @synthesize modalSheetControlDelegate=_modalSheetControlDelegate;
@property(nonatomic) struct CGSize popoverContentSize; // @synthesize popoverContentSize=_popoverContentSize;
- (_Bool)accessibilityPerformEscape;
- (void)keyboardWillBeHidden:(id)arg1;
- (void)keyboardWillBeShown:(id)arg1;
- (void)hideSheetAnimated:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)showSheetViewAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showSheetViewAnimated:(_Bool)arg1;
- (struct CGRect)endingMainViewFrame;
- (void)configureMainViewForPresentAnimation;
- (void)configureShadowView;
- (void)attachPanGestureRecognizer;
- (void)representSheetWithTransitionType:(long long)arg1;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentSheetViewControllerAnimated:(_Bool)arg1 forAccessibleSheet:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentSheetViewControllerAnimated:(_Bool)arg1 forAccessibleSheet:(_Bool)arg2;
- (void)presentSheetViewControllerAnimated:(_Bool)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)viewSafeAreaInsetsDidChange;
- (void)handleOverlayTap:(id)arg1;
- (void)handleBottomSheetPan:(id)arg1;
- (void)handleRightSheetPan:(id)arg1;
- (void)loadView;
- (void)dealloc;
- (void)removeSheetViewController;
- (void)calculatePopoverContentSize;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)configureView;
- (id)initWithContentViewController:(id)arg1 parentViewController:(id)arg2 transitionType:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


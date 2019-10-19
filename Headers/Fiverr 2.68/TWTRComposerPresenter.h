//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLayoutConstraint, NSString, UIView;

@interface TWTRComposerPresenter : NSObject
{
    _Bool _didRegisterForKeyboardNotifications;
    _Bool _presenting;
    CDUnknownBlockType _becomeResponderBlock;
    UIView *_chrome;
    UIView *_keyboardMarkerView;
    NSLayoutConstraint *_keyboardMarkerHeightConstraint;
}

@property(readonly, nonatomic) NSLayoutConstraint *keyboardMarkerHeightConstraint; // @synthesize keyboardMarkerHeightConstraint=_keyboardMarkerHeightConstraint;
@property(readonly, nonatomic) UIView *keyboardMarkerView; // @synthesize keyboardMarkerView=_keyboardMarkerView;
@property(readonly, nonatomic) UIView *chrome; // @synthesize chrome=_chrome;
@property(copy, nonatomic) CDUnknownBlockType becomeResponderBlock; // @synthesize becomeResponderBlock=_becomeResponderBlock;
@property(nonatomic, getter=isPresenting) _Bool presenting; // @synthesize presenting=_presenting;
- (void).cxx_destruct;
- (void)keyboardWillChange:(id)arg1;
- (void)registerForKeyboardNotifications;
- (void)animateDismissal:(id)arg1;
- (void)addKeyboardMarkerViewWithContainer:(id)arg1;
- (void)addChromeWithContainer:(id)arg1;
- (struct CGAffineTransform)offscreenTransformWithContext:(id)arg1;
- (_Bool)shouldShowAsFullScreen:(id)arg1;
- (void)constrainViewControllerView:(id)arg1 inContainer:(id)arg2 fullScreen:(_Bool)arg3;
- (void)presentCardController:(id)arg1;
- (void)animatePresentation:(id)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


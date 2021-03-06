//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGDirectKeyboardTextView.h>

@class UIView, UIViewController;
@protocol IGDirectNextResponderProvider;

@interface IGDirectAlwaysActiveKeyboardTextView : IGDirectKeyboardTextView
{
    _Bool _appIsActive;
    UIView *_subview;
    UIViewController<IGDirectNextResponderProvider> *_vc;
    _Bool _isBecomingFirstResponder;
    _Bool _isResigningFirstResponder;
    _Bool _isCachedFirstResponder;
}

- (void).cxx_destruct;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (_Bool)isAlwaysActive;
- (void)becomeActiveIfNecessaryFromVC:(id)arg1;
- (id)keyCommands;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (id)nextResponder;
@property(readonly, nonatomic) _Bool isFirstResponderForNextResponder;
- (_Bool)_isUpdatingFirstResponder;
- (void)setTintColor:(id)arg1;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)setSelectedRange:(struct _NSRange)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


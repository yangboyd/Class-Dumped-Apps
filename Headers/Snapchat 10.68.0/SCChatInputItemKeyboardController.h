//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCChatInputDrawerRenderable-Protocol.h"
#import "SCChatInputStylable-Protocol.h"
#import "SCChatInputTextViewListener-Protocol.h"
#import "SCChatKeyboardManagerDataSource-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSLayoutConstraint, NSString, SCChatInputItem, SCChatInputViewController, SCChatKeyboardManager, UIView;

@interface SCChatInputItemKeyboardController : UIViewController <SCChatKeyboardManagerDataSource, SCTraceEnabled, SCChatInputDrawerRenderable, SCChatInputTextViewListener, SCChatInputStylable>
{
    SCChatKeyboardManager *_keyboardManager;
    UIView *_keyboardSnapshotView;
    UIView *_systemKeyboardView;
    NSLayoutConstraint *_keyboardSnapshotViewHeightConstraint;
    _Bool _isPanningKeyboardOpen;
    SCChatInputViewController *_inputController;
    double _defaultDrawerHeight;
    SCChatInputItem *inputItem;
    unsigned long long _style;
}

@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) __weak SCChatInputItem *inputItem; // @synthesize inputItem;
@property(nonatomic) double defaultDrawerHeight; // @synthesize defaultDrawerHeight=_defaultDrawerHeight;
@property(nonatomic) __weak SCChatInputViewController *inputController; // @synthesize inputController=_inputController;
- (void).cxx_destruct;
- (_Bool)isTextInputEnabled;
- (id)textInputViewForChatKeyboardManager;
- (void)inputViewController:(id)arg1 textViewDidEndEditing:(id)arg2;
- (void)inputViewController:(id)arg1 textViewWillEndEditing:(id)arg2;
- (void)willSuspendActive;
- (void)willResumeActive;
- (void)sizeDidChange:(struct CGSize)arg1;
- (void)didResignActive;
- (void)willResignActive;
- (void)didBecomeActive;
- (void)willBecomeActive;
- (double)maximumDrawerHeight;
- (void)didEndPanningToState:(unsigned long long)arg1;
- (void)willEndPanningToState:(unsigned long long)arg1;
- (void)didPanFromState:(unsigned long long)arg1;
- (void)willBeginPanningFromState:(unsigned long long)arg1;
- (_Bool)canPanDrawer;
- (void)_translateKeyboardFrame;
- (void)_attachSystemKeyboardView;
- (void)_snapshotKeyboardView;
- (void)_keyboardDidHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_keyboardDidShow:(id)arg1;
- (void)_keyboardWillChangeFrame:(id)arg1;
- (void)_registerNotifications;
- (void)_constructKeyboardSnapshotViewConstraints;
- (void)_setupKeyboardSnapshotView;
- (void)viewDidLoad;
- (id)initWithKeyboardManager:(id)arg1 inputViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


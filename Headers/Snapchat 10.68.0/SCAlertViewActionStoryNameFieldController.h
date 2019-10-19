//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCAlertViewActionController-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSString, UITextField, UIView;

@interface SCAlertViewActionStoryNameFieldController : NSObject <UITextFieldDelegate, SCAlertViewActionController>
{
    UIView *_textFieldContainer;
    CDUnknownBlockType _actionHandler;
    CDUnknownBlockType _textChangeHandler;
    UITextField *_textField;
}

@property(readonly, nonatomic) UITextField *textField; // @synthesize textField=_textField;
- (void).cxx_destruct;
- (_Bool)requiresAdditionalPaddingIfLastItem;
- (struct UIEdgeInsets)edgeInsets;
- (void)becomeFirstResponder;
- (_Bool)adjustsSizeToMatchStandard;
- (unsigned long long)alertViewActionType;
- (id)actionView;
- (struct CGSize)actionViewSize;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
@property(readonly, nonatomic) NSString *trimmedText;
- (void)_textFieldDidChange:(id)arg1;
- (id)initWithTitle:(id)arg1 actionHandler:(CDUnknownBlockType)arg2 textChangeHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


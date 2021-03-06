//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GWA2Node.h>

#import <Module_Framework/GWA2MinimumHeightContent-Protocol.h>
#import <Module_Framework/UITextFieldDelegate-Protocol.h>

@class GWA2MDCTextFieldWrapper, MDCBaseTextField, NSString;

@interface GWA2InputNode : GWA2Node <UITextFieldDelegate, GWA2MinimumHeightContent>
{
    _Bool _shouldAutoAdvance;
    GWA2MDCTextFieldWrapper *_textFieldWrapper;
    int _materialType;
    double _minimumHeight;
    MDCBaseTextField *_inputField;
}

- (void).cxx_destruct;
@property(nonatomic) int materialType; // @synthesize materialType=_materialType;
@property(retain, nonatomic) MDCBaseTextField *inputField; // @synthesize inputField=_inputField;
@property(nonatomic) double minimumHeight; // @synthesize minimumHeight=_minimumHeight;
- (void)inputDataValidationStateDidChange:(id)arg1;
- (void)inputDataChangedOnInputKeyPath:(id)arg1;
- (void)updateErrorText;
- (void)validateData;
- (id)activeChildNodesOfParentNode:(id)arg1;
- (void)autoAdvance;
- (void)inputFieldDidEndEditingOnExit:(id)arg1;
- (void)inputFieldDidEndEditing:(id)arg1;
- (void)inputFieldDidBeginEditing:(id)arg1;
- (void)inputFieldTextDidChange:(id)arg1;
- (void)setupAccessibilityProperties;
- (void)dismissKeyboard;
- (void)updateKeyboardWithDoneButton;
- (struct CGSize)contentSizeForTextField:(id)arg1;
- (id)presentedView;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


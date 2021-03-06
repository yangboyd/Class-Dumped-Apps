//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GWA2InputNode.h>

#import <Module_Framework/GWA2AutocompleteTemplateNodeDelegate-Protocol.h>

@class GWA2AutocompleteTemplateNode, NSString, ORCH2TextInputNode;

@interface GWA2TextInputNode : GWA2InputNode <GWA2AutocompleteTemplateNodeDelegate>
{
    ORCH2TextInputNode *_textInputNodeExtension;
    GWA2AutocompleteTemplateNode *_autocompleteNode;
}

- (void).cxx_destruct;
- (void)autocompleteTemplateNode:(id)arg1 didSelectAutocompleteOption:(id)arg2;
- (void)autocompleteTemplateNode:(id)arg1 didCreateInputAccessoryView:(id)arg2;
- (void)setPhoneKeyboardTypeVariations;
- (void)setNumberKeyboardTypeVariations;
- (void)setTextKeyboardTypeVariations;
- (void)setKeyboardLayout;
- (void)updateAutocompleteAccessoryViewForTextField:(id)arg1;
- (void)textInputFieldTextDidChange:(id)arg1;
- (void)textInputFieldDidBeginEditing:(id)arg1;
- (void)applyStyleProperties;
- (void)applyLayoutProperties;
- (id)presentedView;
- (id)initWithNode:(id)arg1 pageContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ORCH2ImageUrlOptions, ORCH2Node, ORCH2NumberKeyboardLayoutVariations, ORCH2TextKeyboardLayoutVariations;

@interface ORCH2TextInputNode : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) ORCH2Node *autocompleteTemplateNode; // @dynamic autocompleteTemplateNode;
@property(nonatomic) int contentType; // @dynamic contentType;
@property(retain, nonatomic) ORCH2ImageUrlOptions *endIconFifeOption; // @dynamic endIconFifeOption;
@property(nonatomic) _Bool hasAutocompleteTemplateNode; // @dynamic hasAutocompleteTemplateNode;
@property(nonatomic) _Bool hasContentType; // @dynamic hasContentType;
@property(nonatomic) _Bool hasEndIconFifeOption; // @dynamic hasEndIconFifeOption;
@property(nonatomic) _Bool hasInputNodeMaterialType; // @dynamic hasInputNodeMaterialType;
@property(nonatomic) _Bool hasKeyboardLayout; // @dynamic hasKeyboardLayout;
@property(nonatomic) _Bool hasStartIconFifeOption; // @dynamic hasStartIconFifeOption;
@property(nonatomic) int inputNodeMaterialType; // @dynamic inputNodeMaterialType;
@property(nonatomic) int keyboardLayout; // @dynamic keyboardLayout;
@property(readonly, nonatomic) int keyboardLayoutVariationsOneOfCase; // @dynamic keyboardLayoutVariationsOneOfCase;
@property(retain, nonatomic) ORCH2NumberKeyboardLayoutVariations *numberKeyboardLayoutVariations; // @dynamic numberKeyboardLayoutVariations;
@property(retain, nonatomic) ORCH2ImageUrlOptions *startIconFifeOption; // @dynamic startIconFifeOption;
@property(retain, nonatomic) ORCH2TextKeyboardLayoutVariations *textKeyboardLayoutVariations; // @dynamic textKeyboardLayoutVariations;

@end


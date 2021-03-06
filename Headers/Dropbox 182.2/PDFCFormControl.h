//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PDFCFormControl : NSObject
{
    struct Handle<std::__1::shared_ptr<PDFC::FormControl>, std::__1::shared_ptr<PDFC::FormControl>> _cppRefHandle;
}

+ (id)create:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setExportValue:(int)arg1 exportValue:(id)arg2;
- (id)getExportValue:(int)arg1;
- (id)executeKeystrokeEventForComboOrListFields:(id)arg1;
- (id)executeKeystrokeEventForTextSelection:(id)arg1 change:(id)arg2 range:(id)arg3 isFinal:(_Bool)arg4;
- (_Bool)setRichText:(id)arg1;
- (_Bool)setText:(id)arg1;
- (void)setMaxLength:(int)arg1;
- (id)getRichText;
- (id)getText;
- (int)getMaxLength;
- (void)setSelectedIndexes:(id)arg1;
- (id)getSelectedIndexes;
- (void)setCustomValue:(id)arg1;
- (id)getCustomValue;
- (_Bool)isCustomValueSet;
- (_Bool)setButtonDownCaption:(id)arg1 widgetID:(int)arg2;
- (id)getButtonDownCaption:(int)arg1;
- (_Bool)setButtonRolloverCaption:(id)arg1 widgetID:(int)arg2;
- (id)getButtonRolloverCaption:(int)arg1;
- (_Bool)setButtonNormalCaption:(id)arg1 widgetID:(int)arg2;
- (id)getButtonNormalCaption:(int)arg1;
- (void)setOnState:(int)arg1 name:(id)arg2;
- (id)getOnState:(int)arg1;
- (_Bool)setSelectedButtonWidgetIds:(id)arg1;
- (id)getSelectedButtonWidgetIds;
- (id)getButtonValue:(int)arg1;
- (_Bool)isButtonSelected:(int)arg1;
- (_Bool)deselectButton:(int)arg1;
- (_Bool)selectButton:(int)arg1;
- (void)setDirty:(_Bool)arg1;
- (_Bool)isDirty;
- (_Bool)setDefaultValue:(id)arg1;
- (_Bool)setValue:(id)arg1;
- (_Bool)reset;
- (void)setOptions:(id)arg1;
- (id)getOptions;
- (id)getFQN;
- (id)initWithCpp:(const shared_ptr_697076fb *)arg1;

@end


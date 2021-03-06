//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASTFormDropDownSelection.h"

#import "ASTFormField-Protocol.h"
#import "GOODatePickerViewControllerDelegate-Protocol.h"

@class ASTAPIFormFieldContent, ASTCTTimeItem, GPBMessage, MDCActionSheetController, NSString;
@protocol ASTFormRendererDelegate;

@interface ASTFormTimeSelection : ASTFormDropDownSelection <GOODatePickerViewControllerDelegate, ASTFormField>
{
    id <ASTFormRendererDelegate> _fieldDelegate;
    GPBMessage *_proto;
    NSString *_fieldID;
    NSString *_intentFieldID;
    MDCActionSheetController *_actionController;
    ASTCTTimeItem *_selectedTime;
    ASTCTTimeItem *_timePickerTime;
    ASTAPIFormFieldContent *_formFieldContent;
}

@property(retain, nonatomic) ASTAPIFormFieldContent *formFieldContent; // @synthesize formFieldContent=_formFieldContent;
@property(retain, nonatomic) ASTCTTimeItem *timePickerTime; // @synthesize timePickerTime=_timePickerTime;
@property(retain, nonatomic) ASTCTTimeItem *selectedTime; // @synthesize selectedTime=_selectedTime;
@property(retain, nonatomic) MDCActionSheetController *actionController; // @synthesize actionController=_actionController;
@property(retain, nonatomic) NSString *intentFieldID; // @synthesize intentFieldID=_intentFieldID;
@property(retain, nonatomic) NSString *fieldID; // @synthesize fieldID=_fieldID;
@property(retain, nonatomic) GPBMessage *proto; // @synthesize proto=_proto;
@property(nonatomic) __weak id <ASTFormRendererDelegate> fieldDelegate; // @synthesize fieldDelegate=_fieldDelegate;
- (void).cxx_destruct;
- (void)didTapView;
- (void)datePickerViewControllerDidCancel:(id)arg1;
- (void)datePickerViewController:(id)arg1 didSelectDate:(id)arg2;
- (void)handleFormFieldContent;
- (void)showSelectedTime;
- (void)updateSelectedTime:(id)arg1;
- (void)showError:(_Bool)arg1;
- (id)initWithFieldID:(id)arg1 intentID:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


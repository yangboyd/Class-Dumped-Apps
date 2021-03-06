//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BAMCheckout/BAMInputTableViewCell.h>

#import <BAMCheckout/UIPickerViewDataSource-Protocol.h>
#import <BAMCheckout/UIPickerViewDelegate-Protocol.h>

@class BAMCustomField, NSString, UILabel, UIPickerView;

@interface BAMCustomFieldTableViewCell : BAMInputTableViewCell <UIPickerViewDataSource, UIPickerViewDelegate>
{
    BAMCustomField *_customField;
    UILabel *_titleLabel;
    UIPickerView *_pickerView;
}

+ (id)reuseIdentifier;
@property(retain, nonatomic) UIPickerView *pickerView; // @synthesize pickerView=_pickerView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) BAMCustomField *customField; // @synthesize customField=_customField;
- (void).cxx_destruct;
- (void)delgateInputTableViewCellInputDidChange;
- (void)delegatePerformInputTableViewCellDidFinishEditing;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)updateFromField:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


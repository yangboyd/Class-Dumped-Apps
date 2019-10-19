//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSError, NSString, UIStoryboard, UIView, XLFormBaseCell, XLFormRowDescriptor, XLFormSectionDescriptor;

@protocol XLFormViewControllerDelegate <NSObject>

@optional
- (void)ensureRowIsVisible:(XLFormRowDescriptor *)arg1;
- (void)endEditing:(XLFormRowDescriptor *)arg1;
- (void)beginEditing:(XLFormRowDescriptor *)arg1;
- (XLFormRowDescriptor *)nextRowDescriptorForRow:(XLFormRowDescriptor *)arg1 withDirection:(unsigned long long)arg2;
- (UIView *)inputAccessoryViewForRowDescriptor:(XLFormRowDescriptor *)arg1;
- (long long)deleteRowAnimationForSection:(XLFormSectionDescriptor *)arg1;
- (long long)insertRowAnimationForSection:(XLFormSectionDescriptor *)arg1;
- (long long)deleteRowAnimationForRow:(XLFormRowDescriptor *)arg1;
- (long long)insertRowAnimationForRow:(XLFormRowDescriptor *)arg1;
- (void)showFormValidationError:(NSError *)arg1 withTitle:(NSString *)arg2;
- (void)showFormValidationError:(NSError *)arg1;
- (NSArray *)formValidationErrors;
- (UIStoryboard *)storyboardForRow:(XLFormRowDescriptor *)arg1;
- (void)multivaluedInsertButtonTapped:(XLFormRowDescriptor *)arg1;
- (XLFormRowDescriptor *)formRowFormMultivaluedFormSection:(XLFormSectionDescriptor *)arg1;
- (NSDictionary *)httpParameters;
- (NSDictionary *)formValues;
- (XLFormBaseCell *)updateFormRow:(XLFormRowDescriptor *)arg1;
- (void)reloadFormRow:(XLFormRowDescriptor *)arg1;
- (void)deselectFormRow:(XLFormRowDescriptor *)arg1;
- (void)didSelectFormRow:(XLFormRowDescriptor *)arg1;
@end


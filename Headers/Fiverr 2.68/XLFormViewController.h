//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"
#import "XLFormDescriptorDelegate-Protocol.h"
#import "XLFormViewControllerDelegate-Protocol.h"

@class NSNumber, NSString, UITableView, XLFormDescriptor, XLFormRowNavigationAccessoryView;

@interface XLFormViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, XLFormDescriptorDelegate, UITextFieldDelegate, UITextViewDelegate, XLFormViewControllerDelegate>
{
    NSNumber *_oldBottomTableContentInset;
    struct CGRect _keyboardFrame;
    XLFormDescriptor *_form;
    UITableView *_tableView;
    long long _tableViewStyle;
    XLFormRowNavigationAccessoryView *_navigationAccessoryView;
}

+ (id)inlineRowDescriptorTypesForRowDescriptorTypes;
+ (id)cellClassesForRowDescriptorTypes;
@property(retain, nonatomic) XLFormRowNavigationAccessoryView *navigationAccessoryView; // @synthesize navigationAccessoryView=_navigationAccessoryView;
@property long long tableViewStyle; // @synthesize tableViewStyle=_tableViewStyle;
@property(retain) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
@property(retain) XLFormDescriptor *form; // @synthesize form=_form;
- (id)nextRowDescriptorForRow:(id)arg1 withDirection:(unsigned long long)arg2;
- (void)navigateToDirection:(unsigned long long)arg1;
- (void)rowNavigationDone:(id)arg1;
- (void)rowNavigationAction:(id)arg1;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (void)tableView:(id)arg1 willBeginReorderingRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)configureCell:(id)arg1;
- (id)updateFormRow:(id)arg1;
- (void)reloadFormRow:(id)arg1;
- (void)deselectFormRow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)contentSizeCategoryChanged:(id)arg1;
- (void)performFormSelector:(SEL)arg1 withObject:(id)arg2;
- (void)showFormValidationError:(id)arg1 withTitle:(id)arg2;
- (void)showFormValidationError:(id)arg1;
- (id)formValidationErrors;
- (void)ensureRowIsVisible:(id)arg1;
- (void)multivaluedInsertButtonTapped:(id)arg1;
- (id)formRowFormMultivaluedFormSection:(id)arg1;
- (void)endEditing:(id)arg1;
- (void)beginEditing:(id)arg1;
- (id)inputAccessoryViewForRowDescriptor:(id)arg1;
- (long long)deleteRowAnimationForSection:(id)arg1;
- (long long)insertRowAnimationForSection:(id)arg1;
- (long long)deleteRowAnimationForRow:(id)arg1;
- (long long)insertRowAnimationForRow:(id)arg1;
- (void)didSelectFormRow:(id)arg1;
- (id)httpParameters;
- (id)formValues;
- (void)updateAfterDependentRowChanged:(id)arg1;
- (void)formRowDescriptorPredicateHasChanged:(id)arg1 oldValue:(id)arg2 newValue:(id)arg3 predicateType:(unsigned long long)arg4;
- (void)formRowDescriptorValueHasChanged:(id)arg1 oldValue:(id)arg2 newValue:(id)arg3;
- (void)formSectionHasBeenAdded:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)formSectionHasBeenRemoved:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)formRowHasBeenRemoved:(id)arg1 atIndexPath:(id)arg2;
- (void)formRowHasBeenAdded:(id)arg1 atIndexPath:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithForm:(id)arg1 style:(long long)arg2;
- (id)initWithForm:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


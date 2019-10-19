//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GWAFlowSection-Protocol.h"
#import "GWAForm-Protocol.h"
#import "GWASelectorOptionDelegate-Protocol.h"

@class GWAComponentGroup, GWAFlowContext, GWAInfoMessageSection, NSArray, NSString, OrchCustomerOption, OrchCustomerSelector, OrchImageWithCaption, UIColor, UIImage;
@protocol GWACardComponentDelegate, GWAFlowSectionDelegate;

@interface GWACustomerSelectorForm : NSObject <GWAFlowSection, GWASelectorOptionDelegate, GWAForm>
{
    GWAFlowContext *_context;
    OrchCustomerSelector *_selectorProto;
    OrchCustomerOption *_selectedExistingOption;
    GWAInfoMessageSection *_customerSelectorInfoSection;
    _Bool _selectedCreateNewCustoemr;
    _Bool _alwaysExpanded;
    _Bool _isExpanded;
    OrchImageWithCaption *_selectedImage;
    NSArray *_sectionRows;
    id <GWAFlowSectionDelegate> _delegate;
    GWAComponentGroup *_parentComponentGroup;
}

+ (id)preselectedCustomerOption:(id)arg1;
@property(nonatomic) __weak GWAComponentGroup *parentComponentGroup; // @synthesize parentComponentGroup=_parentComponentGroup;
@property(nonatomic) __weak id <GWAFlowSectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateSelectedRow;
- (id)headerTitle;
- (_Bool)isRowNewCustomerOption:(unsigned long long)arg1;
- (void)rowTapped:(unsigned long long)arg1;
- (id)viewForCustomerOption:(id)arg1;
- (_Bool)isOptionEnabled:(id)arg1;
- (id)viewForNewCustomerOption;
- (id)openSelectorRows;
- (void)regenerateRows;
- (void)reload;
@property(readonly, nonatomic) unsigned long long cellDividerStyleInsets;
@property(readonly, nonatomic) _Bool wantsCellDividers;
@property(readonly, copy, nonatomic) NSArray *rows;
@property(readonly, nonatomic) _Bool hasErrors;
@property(readonly, nonatomic, getter=isComplete) _Bool complete;
@property(readonly, nonatomic, getter=isSubmittable) _Bool submittable;
@property(readonly, nonatomic, getter=isFocusable) _Bool focusable;
- (_Bool)didHandleErrorMessage:(id)arg1;
- (id)sections;
- (id)value;
- (void)selectorOptionSelected:(id)arg1;
- (id)initWithCustomerSelector:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(nonatomic) __weak id <GWACardComponentDelegate> cardComponentDelegate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) unsigned long long fieldDisplayType;
@property(retain, nonatomic) UIImage *fieldGroupIcon;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *title;

@end


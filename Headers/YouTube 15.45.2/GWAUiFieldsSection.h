//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/GOOTextFieldValidator-Protocol.h>
#import <Module_Framework/GWADependencyGraphComponent-Protocol.h>
#import <Module_Framework/GWADynamicListExistingSubItemComponent-Protocol.h>
#import <Module_Framework/GWAFlowSection-Protocol.h>
#import <Module_Framework/GWAFocusDelegate-Protocol.h>
#import <Module_Framework/GWAMegalogsSupportingComponent-Protocol.h>
#import <Module_Framework/GWASelectFieldViewDelegate-Protocol.h>
#import <Module_Framework/GWASummaryViewDelegate-Protocol.h>
#import <Module_Framework/GWAUIFieldDelegate-Protocol.h>

@class GWAComponentGroup, GWAFlowContext, GWAMegalogsContext, NSArray, NSMutableDictionary, NSNumber, NSString, UIColor, UIImage;
@protocol GWACardComponentDelegate, GWAFlowSectionDelegate, NSCopying;

@interface GWAUiFieldsSection : NSObject <GOOTextFieldValidator, GWADependencyGraphComponent, GWAFocusDelegate, GWASelectFieldViewDelegate, GWASummaryViewDelegate, GWAUIFieldDelegate, GWAFlowSection, GWADynamicListExistingSubItemComponent, GWAMegalogsSupportingComponent>
{
    NSArray *_fields;
    GWAFlowContext *_context;
    NSMutableDictionary *_textFieldsToValidate;
    NSMutableDictionary *_serverErrors;
    id <NSCopying> _parentID;
    id <GWAFlowSectionDelegate> _delegate;
    UIImage *_fieldGroupIcon;
    unsigned long long _fieldDisplayType;
    GWAComponentGroup *_parentComponentGroup;
    GWAMegalogsContext *megalogsContext;
    GWAMegalogsContext *megalogsParentContext;
    NSNumber *megalogsUIReference;
    NSArray *subcomponentsSupportingMegalogs;
    NSString *_summaryTextSeperatorText;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *summaryTextSeperatorText; // @synthesize summaryTextSeperatorText=_summaryTextSeperatorText;
@property(retain, nonatomic) NSArray *subcomponentsSupportingMegalogs; // @synthesize subcomponentsSupportingMegalogs;
@property(retain, nonatomic) NSNumber *megalogsUIReference; // @synthesize megalogsUIReference;
@property(nonatomic) __weak GWAMegalogsContext *megalogsParentContext; // @synthesize megalogsParentContext;
@property(retain, nonatomic) GWAMegalogsContext *megalogsContext; // @synthesize megalogsContext;
@property(nonatomic) __weak GWAComponentGroup *parentComponentGroup; // @synthesize parentComponentGroup=_parentComponentGroup;
@property(nonatomic) unsigned long long fieldDisplayType; // @synthesize fieldDisplayType=_fieldDisplayType;
@property(retain, nonatomic) UIImage *fieldGroupIcon; // @synthesize fieldGroupIcon=_fieldGroupIcon;
@property(nonatomic) __weak id <GWAFlowSectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)prepareMegalogsContexts;
- (void)summaryViewTap:(id)arg1;
- (id)dynamicListExistingSubItemSummaryView;
- (id)summaryText;
- (id)fieldWithUIReference:(long long)arg1;
- (void)handleErrorMessage:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)fieldNeedsSectionReload:(id)arg1;
- (void)registerWithDependencyGraph:(id)arg1;
- (void)textFieldChanged:(id)arg1;
- (void)selectFieldViewDoneButtonPressed:(id)arg1;
- (void)selectFieldView:(id)arg1 didSetText:(id)arg2;
- (void)viewUnfocused:(id)arg1;
- (void)viewFocused:(id)arg1;
@property(readonly, nonatomic) long long announcementFrequency;
- (id)validationResultsForTextField:(id)arg1;
- (_Bool)hasLocalError;
- (id)firstFocusableIndexPath;
- (id)nextIndexPathToFocus:(id)arg1;
- (id)firstIndexPathToFocus;
- (id)activeFields;
- (id)fields;
- (id)values;
- (void)handleErrorMessage:(id)arg1;
- (void)validate;
@property(readonly, copy, nonatomic) NSArray *rows;
@property(readonly, nonatomic, getter=isSubmittable) _Bool submittable;
@property(readonly, nonatomic, getter=isComplete) _Bool complete;
@property(readonly, nonatomic) _Bool hasErrors;
@property(readonly, nonatomic, getter=isFocusable) _Bool focusable;
- (void)setAccessibilityIDWithPrefix:(id)arg1;
- (void)dealloc;
- (id)initWithUiFields:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(nonatomic) __weak id <GWACardComponentDelegate> cardComponentDelegate;
@property(readonly, nonatomic) unsigned long long cellDividerStyleInsets;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, nonatomic) _Bool wantsCellDividers;

@end


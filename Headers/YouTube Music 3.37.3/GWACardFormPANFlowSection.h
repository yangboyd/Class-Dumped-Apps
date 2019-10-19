//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GOOTextFieldValidator-Protocol.h"
#import "GWAFlowSection-Protocol.h"
#import "GWAFocusDelegate-Protocol.h"
#import "GWAMegalogsSupporting-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class GWAComponentGroup, GWACreditCardTextFieldView, GWAFlowContext, GWAMegalogsContext, GWATextFieldFormatter, NSArray, NSNumber, NSString, OrchCardForm, OrchFormFieldMessage, OrchPanCategory, QTMButton, UIColor, UIImage;
@protocol GWACardComponentDelegate, GWACardScanningViewControllerDelegate, GWAFlowSectionDelegate;

@interface GWACardFormPANFlowSection : NSObject <GOOTextFieldValidator, GWAFocusDelegate, UITextFieldDelegate, GWAFlowSection, GWAMegalogsSupporting>
{
    GWACreditCardTextFieldView *_cardNumberRow;
    OrchCardForm *_cardForm;
    GWAFlowContext *_context;
    GWATextFieldFormatter *_formatter;
    QTMButton *_ocrButton;
    OrchPanCategory *_matchingCategory;
    id <GWACardScanningViewControllerDelegate> _ocrDelegate;
    OrchFormFieldMessage *_serverError;
    NSString *_lastInvalidValue;
    id <GWAFlowSectionDelegate> _delegate;
    GWAComponentGroup *_parentComponentGroup;
    GWAMegalogsContext *megalogsParentContext;
    GWAMegalogsContext *megalogsContext;
    NSNumber *megalogsUIReference;
    NSArray *subcomponentsSupportingMegalogs;
}

@property(retain, nonatomic) NSArray *subcomponentsSupportingMegalogs; // @synthesize subcomponentsSupportingMegalogs;
@property(retain, nonatomic) NSNumber *megalogsUIReference; // @synthesize megalogsUIReference;
@property(retain, nonatomic) GWAMegalogsContext *megalogsContext; // @synthesize megalogsContext;
@property(nonatomic) __weak GWAMegalogsContext *megalogsParentContext; // @synthesize megalogsParentContext;
@property(nonatomic) __weak GWAComponentGroup *parentComponentGroup; // @synthesize parentComponentGroup=_parentComponentGroup;
@property(nonatomic) __weak id <GWAFlowSectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)prepareMegalogsContexts;
- (void)updatePan:(id)arg1 textField:(id)arg2;
- (void)updatePan:(id)arg1;
- (_Bool)shouldShowLogoForCategory:(id)arg1 withCategoryMatchResult:(int)arg2;
- (_Bool)isPanExcluded:(id)arg1;
- (id)validationMessageForPan;
- (_Bool)panIsValid;
- (id)cardNumberRow;
- (id)summaryText;
- (void)panChanged:(id)arg1;
- (id)validationResultsForTextField:(id)arg1;
- (void)setCardNumber:(id)arg1;
- (id)addCardManuallyButton;
- (void)presentOCRViewController;
- (void)scanCardTapped:(id)arg1;
- (id)ocrButton;
- (_Bool)ocrIsAvailable;
- (void)viewUnfocused:(id)arg1;
- (void)viewFocused:(id)arg1;
- (void)validate;
- (id)firstIndexPathToFocus;
- (void)handleErrorMessage:(id)arg1;
@property(readonly, nonatomic, getter=isFocusable) _Bool focusable;
@property(readonly, nonatomic, getter=isComplete) _Bool complete;
@property(readonly, nonatomic, getter=isSubmittable) _Bool submittable;
@property(readonly, nonatomic) _Bool hasErrors;
@property(readonly, copy, nonatomic) NSArray *rows;
- (id)subformIndexesToShow;
- (id)panCategoryToken;
- (id)pan;
- (id)initWithCardForm:(id)arg1 context:(id)arg2 ocrDelegate:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, nonatomic) long long announcementFrequency;
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(nonatomic) __weak id <GWACardComponentDelegate> cardComponentDelegate;
@property(readonly, nonatomic) unsigned long long cellDividerStyleInsets;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) unsigned long long fieldDisplayType;
@property(retain, nonatomic) UIImage *fieldGroupIcon;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, nonatomic) _Bool wantsCellDividers;

@end


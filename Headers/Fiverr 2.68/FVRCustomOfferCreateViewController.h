//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FVRBaseViewController.h"

#import "FVRCreateCustomOfferDeliveryTimeCellDelegate-Protocol.h"
#import "FVRCreateCustomOfferRelatedGigCellNewDelegate-Protocol.h"
#import "FVRCreateCustomOfferRevisionsCellDelegate-Protocol.h"
#import "FVRCustomOfferExtrasVCDelegate-Protocol.h"
#import "FVRPickAGigViewControllerDelegate-Protocol.h"
#import "FVRRequestGigEditRequestMessageViewControllerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "_TtP6fiverr46CreateCustomOfferToggleRequirmentsCellDelegate_-Protocol.h"

@class FVRCreateCustomOfferChargeAmountCellTableViewCell, FVRGigExtra, FVRGigItem, NSArray, NSMutableSet, NSNumber, NSString, UIButton, UITableView, UITapGestureRecognizer;
@protocol FVRCustomOfferCreateDelegate;

@interface FVRCustomOfferCreateViewController : FVRBaseViewController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, UIGestureRecognizerDelegate, FVRRequestGigEditRequestMessageViewControllerDelegate, FVRCreateCustomOfferRelatedGigCellNewDelegate, FVRPickAGigViewControllerDelegate, FVRCreateCustomOfferDeliveryTimeCellDelegate, FVRCreateCustomOfferRevisionsCellDelegate, FVRCustomOfferExtrasVCDelegate, _TtP6fiverr46CreateCustomOfferToggleRequirmentsCellDelegate_>
{
    _Bool _showFillAnimation;
    _Bool _didShowFillAnimation;
    _Bool _viewDidAppear;
    _Bool _skipGigRequirements;
    _Bool _shouldShowAskForGigRequirementsToggle;
    id <FVRCustomOfferCreateDelegate> _delegate;
    NSString *_contactId;
    NSString *_requestId;
    NSNumber *_subCategoryId;
    NSString *_source;
    NSString *_parentOrderId;
    FVRGigItem *_selectedRelatedGig;
    UITapGestureRecognizer *_tapGestureRecognizer;
    NSArray *_gigs;
    UITableView *_formTableView;
    UIButton *_submitButton;
    FVRCreateCustomOfferChargeAmountCellTableViewCell *_offerChargeAmountCell;
    NSString *_offerMessage;
    long long _selectedDeliveryTimeByDays;
    NSNumber *_selectedPriceAmount;
    NSArray *_formTableSections;
    long long _customOfferCreateType;
    long long _selectedRevisionNumber;
    FVRGigExtra *_revisionsExtra;
    NSMutableSet *_selectedExtraIds;
    NSArray *_availableExtras;
    CDUnknownBlockType _presentGigPickerBlock;
    FVRGigExtra *_gigExtraToEdit;
}

+ (id)initToCustomOfferFromOrderWithDelegate:(id)arg1 contactId:(id)arg2 gigExtraToEdit:(id)arg3;
+ (id)initWithCustomOfferCreateType:(long long)arg1 contactId:(id)arg2 relatedGig:(id)arg3 sorce:(id)arg4;
@property(nonatomic) _Bool shouldShowAskForGigRequirementsToggle; // @synthesize shouldShowAskForGigRequirementsToggle=_shouldShowAskForGigRequirementsToggle;
@property(nonatomic) _Bool skipGigRequirements; // @synthesize skipGigRequirements=_skipGigRequirements;
@property(retain, nonatomic) FVRGigExtra *gigExtraToEdit; // @synthesize gigExtraToEdit=_gigExtraToEdit;
@property(nonatomic) _Bool viewDidAppear; // @synthesize viewDidAppear=_viewDidAppear;
@property(copy, nonatomic) CDUnknownBlockType presentGigPickerBlock; // @synthesize presentGigPickerBlock=_presentGigPickerBlock;
@property(retain, nonatomic) NSArray *availableExtras; // @synthesize availableExtras=_availableExtras;
@property(retain, nonatomic) NSMutableSet *selectedExtraIds; // @synthesize selectedExtraIds=_selectedExtraIds;
@property(retain, nonatomic) FVRGigExtra *revisionsExtra; // @synthesize revisionsExtra=_revisionsExtra;
@property(nonatomic) long long selectedRevisionNumber; // @synthesize selectedRevisionNumber=_selectedRevisionNumber;
@property(nonatomic) long long customOfferCreateType; // @synthesize customOfferCreateType=_customOfferCreateType;
@property(retain, nonatomic) NSArray *formTableSections; // @synthesize formTableSections=_formTableSections;
@property(retain, nonatomic) NSNumber *selectedPriceAmount; // @synthesize selectedPriceAmount=_selectedPriceAmount;
@property(nonatomic) long long selectedDeliveryTimeByDays; // @synthesize selectedDeliveryTimeByDays=_selectedDeliveryTimeByDays;
@property(retain, nonatomic) NSString *offerMessage; // @synthesize offerMessage=_offerMessage;
@property(nonatomic) __weak FVRCreateCustomOfferChargeAmountCellTableViewCell *offerChargeAmountCell; // @synthesize offerChargeAmountCell=_offerChargeAmountCell;
@property(nonatomic) __weak UIButton *submitButton; // @synthesize submitButton=_submitButton;
@property(nonatomic) __weak UITableView *formTableView; // @synthesize formTableView=_formTableView;
@property(nonatomic) _Bool didShowFillAnimation; // @synthesize didShowFillAnimation=_didShowFillAnimation;
@property(nonatomic) _Bool showFillAnimation; // @synthesize showFillAnimation=_showFillAnimation;
@property(retain, nonatomic) NSArray *gigs; // @synthesize gigs=_gigs;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) FVRGigItem *selectedRelatedGig; // @synthesize selectedRelatedGig=_selectedRelatedGig;
@property(retain, nonatomic) NSString *parentOrderId; // @synthesize parentOrderId=_parentOrderId;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) NSNumber *subCategoryId; // @synthesize subCategoryId=_subCategoryId;
@property(retain, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(retain, nonatomic) NSString *contactId; // @synthesize contactId=_contactId;
@property(nonatomic) __weak id <FVRCustomOfferCreateDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)mixpanelSendCustomOfferSentEvent;
- (void)mixpanelSendCustomOfferAbortedEvent;
- (void)mixpanelSendCustomOfferViewEvent;
- (void)didApplyExtras:(long long)arg1;
- (void)didSelectTimeToDeliver:(long long)arg1;
- (void)didSelectRevision:(long long)arg1;
- (_Bool)isFormInputValid;
- (_Bool)isSelectedPriceAmountValid;
- (void)didPressCloseButton;
- (void)pickAGigViewController:(id)arg1 gigSelected:(id)arg2;
- (void)didPressChangeGigButton;
- (void)requestGigEditRequestMessageDoneButtonClicked:(id)arg1 messageText:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)cell:(id)arg1 didUpdateSwitchWith:(_Bool)arg2;
- (id)offerSettings;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)titleForHeaderInSection:(long long)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)submitButtonPressed:(id)arg1;
- (void)deleteButtonPressed;
- (void)closeButtonPressed;
- (void)tableTapDetected;
- (id)gigRequirmentsCellId;
- (id)cellForCustomTableViewCellClass:(Class)arg1;
- (void)didSelectRelatedGigCell;
- (void)didSelectWriteYourOfferCell;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)removeObserverForKeyboardNotifications;
- (void)addObserverForKeyboardNotifications;
- (void)addGestureRecognizerForFormTableView;
- (void)showUserCustomOfferSettingsFailWithMessage:(id)arg1;
- (long long)sectionForIndexPath:(id)arg1;
- (long long)sectionIndexForSection:(long long)arg1;
- (void)createAndPresentPickAGigViewController;
- (void)submiteFormToServer;
- (void)loadUserGigsWithCompltionBlock:(CDUnknownBlockType)arg1;
- (void)refreshWithRelategGig:(id)arg1;
- (void)setAppearances;
- (void)dealloc;
- (id)analyticsManagerScreenName;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)defaultFormTableSectionsWithType:(long long)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 type:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


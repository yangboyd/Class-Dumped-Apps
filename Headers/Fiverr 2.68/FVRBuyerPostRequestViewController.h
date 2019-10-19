//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XLFormViewController.h"

#import "FVRAnalyticsManagerProtocol-Protocol.h"
#import "FVRBuyerPostRequestEducationViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class FVRCategoryItem, FVRSubCategoryItem, NSArray, NSString, UIButton;
@protocol FVRBuyerPostRequestViewControllerDelegate;

@interface FVRBuyerPostRequestViewController : XLFormViewController <UITableViewDataSource, UITableViewDelegate, FVRBuyerPostRequestEducationViewDelegate, FVRAnalyticsManagerProtocol>
{
    NSString *_source;
    id <FVRBuyerPostRequestViewControllerDelegate> _delegate;
    UIButton *_submitButton;
    FVRCategoryItem *_categoryItem;
    FVRSubCategoryItem *_subCategoryItem;
    NSArray *_buyerRequestWizardSearchItems;
}

+ (void)load;
@property(retain, nonatomic) NSArray *buyerRequestWizardSearchItems; // @synthesize buyerRequestWizardSearchItems=_buyerRequestWizardSearchItems;
@property(retain, nonatomic) FVRSubCategoryItem *subCategoryItem; // @synthesize subCategoryItem=_subCategoryItem;
@property(retain, nonatomic) FVRCategoryItem *categoryItem; // @synthesize categoryItem=_categoryItem;
@property(nonatomic) __weak UIButton *submitButton; // @synthesize submitButton=_submitButton;
@property(nonatomic) __weak id <FVRBuyerPostRequestViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
- (void).cxx_destruct;
- (id)textInField:(id)arg1;
- (id)valueInField:(id)arg1;
- (id)mixpanelFormProperties;
- (id)postRequestBasicProperties;
- (void)mixpanelSendPostRequestSubmittedEvent;
- (void)mixpanelSendPostRequestAbortedEvent;
- (void)mixpanelSendPostRequestViewEvent;
- (void)importDataFromSearchItems;
- (void)formRowDescriptorValueHasChanged:(id)arg1 oldValue:(id)arg2 newValue:(id)arg3;
- (void)buyerPostRequestEducationViewDidClosed:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)submitButtonPressed:(id)arg1;
- (_Bool)isTableContainMoreThenOneCriteriaSection;
- (id)criteriasAsXLFormObjectOptiosFromDictionary:(id)arg1;
- (id)sectionDescriptorForRowTag:(id)arg1;
- (id)getCriteriasFormSectionDescriptor;
- (id)stringIdForXLFormOptionsObject:(id)arg1;
- (id)daysStingArrayWithNumberOfDays:(long long)arg1;
- (id)formOtionObjectArrayFromAdvancedSearchOptionItem:(id)arg1;
- (id)convertCategorySubcategoriesArrayToXLFormOptionOblectArray:(id)arg1;
- (id)convertCategoryItemArrayToXLFormOptionOblectArray:(id)arg1;
- (void)removeCriteriasFormSectionIfNeeded;
- (void)createCriteriasSectionFromAdvancedSearchOptionItemArray:(id)arg1;
- (void)setupTitle;
- (void)createAndShowEducationView;
- (void)popScreen;
- (void)setupBackButton;
- (void)referralManagerViewWillAppearReport;
- (void)referralManagerViewDidLoadReport;
- (void)analyticsManagerReportShowEvent;
- (id)analyticsManagerScreenName;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)setPreSelectedCategory:(id)arg1 subCategoryItem:(id)arg2 searchItems:(id)arg3 source:(id)arg4;
- (id)updateFormRow:(id)arg1;
- (void)initializeForm;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


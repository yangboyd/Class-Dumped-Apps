//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/IGPromoteViewController.h>

#import <InstagramAppCoreFramework/IGListAdapterDataSource-Protocol.h>
#import <InstagramAppCoreFramework/IGPromoteEducationDrawerRowViewDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGPromoteEducationDrawerViewDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGPromoteFlowManagerNavigationProtocol-Protocol.h>
#import <InstagramAppCoreFramework/IGPromoteHeaderSectionControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGPromoteReviewPaymentCardSectionControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGPromoteSliderViewSectionControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGPromoteTitleSubtitleSectionControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/UICollectionViewDelegate-Protocol.h>

@class IGBoostPostLogger, IGListAdapter, IGPromoteDataStore, IGPromoteDoubleTextViewListModel, IGPromoteEducationPresenter, IGPromoteHeaderViewModel, IGPromoteImageTextViewModel, IGPromoteListWithDrawerView, IGPromoteMessageViewModel, IGPromoteReachEstimationFetcher, IGPromoteReachEstimationStore, IGPromoteSliderViewModel, IGPromoteTitleSubtitleViewModel, IGUserSession, NSString;
@protocol IGPromoteBudgetAndDurationViewControllerDelegate, IGPromoteReachEstimationUpdateAnnouncer;

@interface IGPromoteBudgetAndDurationViewController : IGPromoteViewController <IGListAdapterDataSource, UICollectionViewDelegate, IGPromoteSliderViewSectionControllerDelegate, IGPromoteHeaderSectionControllerDelegate, IGPromoteEducationDrawerRowViewDelegate, IGPromoteEducationDrawerViewDelegate, IGPromoteTitleSubtitleSectionControllerDelegate, IGPromoteReviewPaymentCardSectionControllerDelegate, IGPromoteFlowManagerNavigationProtocol>
{
    IGUserSession *_session;
    IGBoostPostLogger *_logger;
    IGPromoteListWithDrawerView *_contentView;
    IGListAdapter *_adapter;
    id <IGPromoteReachEstimationUpdateAnnouncer> _reachEstimationUpdateAnnouncer;
    IGPromoteReachEstimationFetcher *_reachEstimationFetcher;
    IGPromoteEducationPresenter *_educationPresenter;
    _Bool _isFetching;
    _Bool _shouldFetchPaymentInfo;
    _Bool _isPromoteSpendLimitNexusEnabled;
    _Bool _didExposePromoteSpendLimitNexus;
    _Bool _shouldResetLocalDataStore;
    IGPromoteDataStore *_localDataStore;
    id <IGPromoteBudgetAndDurationViewControllerDelegate> _delegate;
    IGPromoteHeaderViewModel *_headerViewModel;
    IGPromoteHeaderViewModel *_warningViewModel;
    IGPromoteTitleSubtitleViewModel *_estimatedReachViewModel;
    IGPromoteSliderViewModel *_budgetSliderViewModel;
    IGPromoteSliderViewModel *_durationSliderViewModel;
    IGPromoteMessageViewModel *_budgetRecommendationMessageViewModel;
    IGPromoteTitleSubtitleViewModel *_addPaymentMethodViewModel;
    IGPromoteImageTextViewModel *_paymentCardViewModel;
    IGPromoteDoubleTextViewListModel *_estimatedTaxViewModels;
    IGPromoteDataStore *_dataStore;
    IGPromoteReachEstimationStore *_reachEstimationStore;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGPromoteReachEstimationStore *reachEstimationStore; // @synthesize reachEstimationStore=_reachEstimationStore;
@property(retain, nonatomic) IGPromoteDataStore *dataStore; // @synthesize dataStore=_dataStore;
@property(copy, nonatomic) IGPromoteDoubleTextViewListModel *estimatedTaxViewModels; // @synthesize estimatedTaxViewModels=_estimatedTaxViewModels;
@property(copy, nonatomic) IGPromoteImageTextViewModel *paymentCardViewModel; // @synthesize paymentCardViewModel=_paymentCardViewModel;
@property(copy, nonatomic) IGPromoteTitleSubtitleViewModel *addPaymentMethodViewModel; // @synthesize addPaymentMethodViewModel=_addPaymentMethodViewModel;
@property(copy, nonatomic) IGPromoteMessageViewModel *budgetRecommendationMessageViewModel; // @synthesize budgetRecommendationMessageViewModel=_budgetRecommendationMessageViewModel;
@property(copy, nonatomic) IGPromoteSliderViewModel *durationSliderViewModel; // @synthesize durationSliderViewModel=_durationSliderViewModel;
@property(copy, nonatomic) IGPromoteSliderViewModel *budgetSliderViewModel; // @synthesize budgetSliderViewModel=_budgetSliderViewModel;
@property(copy, nonatomic) IGPromoteTitleSubtitleViewModel *estimatedReachViewModel; // @synthesize estimatedReachViewModel=_estimatedReachViewModel;
@property(copy, nonatomic) IGPromoteHeaderViewModel *warningViewModel; // @synthesize warningViewModel=_warningViewModel;
@property(copy, nonatomic) IGPromoteHeaderViewModel *headerViewModel; // @synthesize headerViewModel=_headerViewModel;
@property(nonatomic) __weak id <IGPromoteBudgetAndDurationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)shouldPopViewControllerWithDismissViewControllers;
- (void)promoteEducationDrawerViewController:(id)arg1 didSelectEducationAction:(long long)arg2;
- (void)didTapOnPromoteEducationDrawerRowView:(id)arg1;
- (void)_navigateToSpendLimitManager:(_Bool)arg1;
- (void)_fetchBudgetRecommendation;
- (void)_fetchPaymentAndTaxDataIfNeeded;
- (void)_pushAddPaymentViewController;
- (void)_updateBudgetRecommendationView;
- (void)_updateSliderViewModels;
- (void)_updateSliderViews;
- (void)_reloadView;
- (void)_setUpNavigationBar;
- (void)_setUpContentView;
- (void)_updateViewModels;
- (void)_updateReachEstimationViewModel;
- (void)_fetchReachEstimation;
- (_Bool)_didEditBudgetAndDuration;
- (void)promoteReviewPaymentCardSectionController:(id)arg1 didTapSubtitleWithViewModel:(id)arg2;
- (void)promoteTitleSubtitleSectionController:(id)arg1 didTapSubtitleLink:(id)arg2;
- (void)promoteTitleSubtitleSectionController:(id)arg1 didTapCellTitleWithViewModel:(id)arg2;
- (void)promoteHeaderSectionController:(id)arg1 didTapURL:(id)arg2;
- (void)promoteHeaderSectionController:(id)arg1 didTapSubtitle:(id)arg2;
- (void)promoteSliderViewSectionController:(id)arg1 didRespondToTapOutsideThumbWithCell:(id)arg2;
- (void)promoteSliderViewSectionController:(id)arg1 didEndSlidingOnCell:(id)arg2;
- (void)promoteSliderViewSectionController:(id)arg1 didSlideOnCell:(id)arg2 withValue:(id)arg3;
- (void)_onDoneBarButtonTapped;
- (void)_onCancelBarButtonTapped;
- (void)_onSaveBarButtonTapped;
- (void)_onBackBarButtonTapped;
- (void)_onNextBarButtonTapped;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithSession:(id)arg1 dataStore:(id)arg2 logger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


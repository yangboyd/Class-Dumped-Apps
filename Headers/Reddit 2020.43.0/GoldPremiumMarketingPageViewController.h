//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "AttributedLabelRegularDelegate-Protocol.h"
#import "GoldPremiumPurchaseSuccessViewControllerDelegate-Protocol.h"
#import "InAppPurchaseManagerDelegate-Protocol.h"
#import "RUIThemeUpdateCallbackProtocol-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "_TtP18AnalyticsFramework26AnalyticsScreenViewContext_-Protocol.h"

@class AnalyticsEvent, AttributedLabelRegular, GoldProduct, NSArray, NSLayoutConstraint, NSString, NSURL, UICollectionView, UILabel, UIPageControl, UIScrollView, UIStackView, UIView, _TtC7Economy14EconomyContext, _TtC7Economy27PremiumMarketingEventLogger;
@protocol AccountContext, _TtP18AnalyticsFramework15AnalyticsLogger_;

@interface GoldPremiumMarketingPageViewController : BaseViewController <UICollectionViewDataSource, UICollectionViewDelegate, RUIThemeUpdateCallbackProtocol, InAppPurchaseManagerDelegate, AttributedLabelRegularDelegate, GoldPremiumPurchaseSuccessViewControllerDelegate, _TtP18AnalyticsFramework26AnalyticsScreenViewContext_>
{
    _Bool _disableSwipeToGoBackGesture;
    _Bool _inProgress;
    _Bool _wasReferredFromInFeedUnit;
    NSString *_analyticsReason;
    NSURL *_analyticsReferringURL;
    id <AccountContext> _accountContext;
    _TtC7Economy14EconomyContext *_economyContext;
    UIScrollView *_scrollView;
    UIView *_contentView;
    UIStackView *_contentStackView;
    UIView *_headerView;
    UIView *_footerView;
    AttributedLabelRegular *_footerContentLabel;
    UIView *_titleView;
    UIView *_premiumBenefitContentView;
    UICollectionView *_collectionView;
    UIPageControl *_pageControl;
    UIStackView *_actionsStackView;
    UILabel *_subscriptionInfoLabel;
    NSLayoutConstraint *_collectionViewHeightConstraint;
    NSLayoutConstraint *_contentStackViewWidthConstraint;
    NSArray *_benefitViewModels;
    NSArray *_premiumProducts;
    GoldProduct *_premiumProductBeingPurchased;
    NSString *_correlationId;
    _TtC7Economy27PremiumMarketingEventLogger *_eventLogger;
    id _econProductsSubscription;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id econProductsSubscription; // @synthesize econProductsSubscription=_econProductsSubscription;
@property(readonly, nonatomic) _TtC7Economy27PremiumMarketingEventLogger *eventLogger; // @synthesize eventLogger=_eventLogger;
@property(readonly, nonatomic) _Bool wasReferredFromInFeedUnit; // @synthesize wasReferredFromInFeedUnit=_wasReferredFromInFeedUnit;
@property(readonly, nonatomic) NSString *correlationId; // @synthesize correlationId=_correlationId;
@property(nonatomic) _Bool inProgress; // @synthesize inProgress=_inProgress;
@property(retain, nonatomic) GoldProduct *premiumProductBeingPurchased; // @synthesize premiumProductBeingPurchased=_premiumProductBeingPurchased;
@property(retain, nonatomic) NSArray *premiumProducts; // @synthesize premiumProducts=_premiumProducts;
@property(retain, nonatomic) NSArray *benefitViewModels; // @synthesize benefitViewModels=_benefitViewModels;
@property(retain, nonatomic) NSLayoutConstraint *contentStackViewWidthConstraint; // @synthesize contentStackViewWidthConstraint=_contentStackViewWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *collectionViewHeightConstraint; // @synthesize collectionViewHeightConstraint=_collectionViewHeightConstraint;
@property(retain, nonatomic) UILabel *subscriptionInfoLabel; // @synthesize subscriptionInfoLabel=_subscriptionInfoLabel;
@property(retain, nonatomic) UIStackView *actionsStackView; // @synthesize actionsStackView=_actionsStackView;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UIView *premiumBenefitContentView; // @synthesize premiumBenefitContentView=_premiumBenefitContentView;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) AttributedLabelRegular *footerContentLabel; // @synthesize footerContentLabel=_footerContentLabel;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIStackView *contentStackView; // @synthesize contentStackView=_contentStackView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(readonly, nonatomic) _TtC7Economy14EconomyContext *economyContext; // @synthesize economyContext=_economyContext;
@property(readonly, nonatomic) id <AccountContext> accountContext; // @synthesize accountContext=_accountContext;
@property(nonatomic) _Bool disableSwipeToGoBackGesture; // @synthesize disableSwipeToGoBackGesture=_disableSwipeToGoBackGesture;
@property(copy, nonatomic) NSURL *analyticsReferringURL; // @synthesize analyticsReferringURL=_analyticsReferringURL;
@property(copy, nonatomic) NSString *analyticsReason; // @synthesize analyticsReason=_analyticsReason;
@property(readonly, nonatomic) id <_TtP18AnalyticsFramework15AnalyticsLogger_> analyticsLogger;
@property(readonly, nonatomic) AnalyticsEvent *screenViewEvent;
@property(readonly, copy, nonatomic) NSString *analyticsScreenViewName;
@property(readonly, copy, nonatomic) NSString *analyticsPageType;
- (void)presentLoginViewController;
- (void)updateFooterContentLabel;
- (id)makeActionButtonWithTitle:(id)arg1 isPrimary:(_Bool)arg2 highlightedText:(id)arg3 action:(CDUnknownBlockType)arg4;
- (void)goldPremiumPurchaseSuccessViewController:(id)arg1 didTapLinkUrl:(id)arg2;
- (void)attributedLabelRegular:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)inAppPurchaseManager:(id)arg1 didRefreshReceiptWithError:(id)arg2;
- (void)inAppPurchaseManager:(id)arg1 encounteredUninishedTransactionForDifferentAccount:(id)arg2 transactionId:(id)arg3 productId:(id)arg4 correlationId:(id)arg5 removalHandler:(CDUnknownBlockType)arg6;
- (void)inAppPurchaseManager:(id)arg1 transactionDidFailWithId:(id)arg2 correlationId:(id)arg3 error:(id)arg4;
- (void)inAppPurchaseManager:(id)arg1 transactionDidDeferWithId:(id)arg2 correlationId:(id)arg3;
- (void)inAppPurchaseManager:(id)arg1 transactionDidCancelWithCorrelationId:(id)arg2;
- (void)inAppPurchaseManager:(id)arg1 transactionDidSucceedWithId:(id)arg2 correlationId:(id)arg3;
- (void)inAppPurchaseManager:(id)arg1 transactionDidBeginValidationWithId:(id)arg2 correlationId:(id)arg3;
- (void)inAppPurchaseManagerDidBeginTransaction:(id)arg1 correlationId:(id)arg2;
- (void)inAppPurchaseManagerLogTransactionToFirebase:(id)arg1 userData:(id)arg2;
- (void)updateThemeProperty;
- (void)scrollViewDidScroll:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)showValidationFailureDialog;
- (void)hidePurchasingModalIfPresented;
- (void)updateSubscriptionInfoLabel;
- (void)updateBenefitsInfo;
- (void)updateActionsStack;
- (CDUnknownBlockType)actionBlockToPurchaseProduct:(id)arg1;
- (long long)renewalFrequency;
- (id)singleMonthlyProduct;
- (_Bool)isSubscribed;
- (void)updateProducts:(id)arg1 error:(id)arg2;
- (double)estimatedCollectionViewHeight;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithAccountContext:(id)arg1 correlationId:(id)arg2 wasReferredFromInFeedUnit:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


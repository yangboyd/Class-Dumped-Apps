//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Payments/WAPaymentFBPayHubViewController.h>

#import "WALinkLabelDelegate-Protocol.h"
#import "WAPaymentGetStartedPromptCellDelegate-Protocol.h"

@class NSString, WAPaymentMerchantManager, WATableRow, WATableSection;

@interface WAPaymentMerchantFBPayHubViewController : WAPaymentFBPayHubViewController <WAPaymentGetStartedPromptCellDelegate, WALinkLabelDelegate>
{
    WATableSection *_sectionMerchantPayments;
    WATableRow *_rowMerchantGetStarted;
    WATableRow *_rowConsumerGetStarted;
    WAPaymentMerchantManager *_paymentMerchantManager;
    CDUnknownBlockType _setupMerchantAccountTapped;
    CDUnknownBlockType _setupConsumerAccountTapped;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType setupConsumerAccountTapped; // @synthesize setupConsumerAccountTapped=_setupConsumerAccountTapped;
@property(copy, nonatomic) CDUnknownBlockType setupMerchantAccountTapped; // @synthesize setupMerchantAccountTapped=_setupMerchantAccountTapped;
- (void)handleOpenURL:(id)arg1 fromLinkLabel:(id)arg2;
- (void)didTapGetStartedForCell:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (_Bool)shouldShowMerchantSetupSection;
- (id)newConsumerGetStartedCell;
- (_Bool)shouldShowAddNewPaymentMethodRow;
- (void)addNoAccountsRowToSection:(id)arg1;
- (id)paymentAccountsForDisplay;
- (id)newMerchantGetStartedCell;
- (void)reloadBusinessPaymentsSectionWithAnimation:(_Bool)arg1;
- (void)setUpTableView;
- (void)reloadPaymentAccountsWithAnimation:(_Bool)arg1;
- (id)initWithPaymentMerchantManager:(id)arg1 flowId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


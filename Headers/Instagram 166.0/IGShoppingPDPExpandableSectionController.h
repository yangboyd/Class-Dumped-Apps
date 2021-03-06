//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import <InstagramAppCoreFramework/IGShoppingPDPShippingReturnsExpandableCellDelegate-Protocol.h>

@class IGShoppingConsumptionFeedItemLogger, IGShoppingPDPLinkViewModel, IGUserSession, NSString;

@interface IGShoppingPDPExpandableSectionController : IGListSectionController <IGShoppingPDPShippingReturnsExpandableCellDelegate>
{
    IGShoppingPDPLinkViewModel *_viewModel;
    IGUserSession *_userSession;
    IGShoppingConsumptionFeedItemLogger *_logger;
    _Bool _isExpanded;
}

- (void).cxx_destruct;
- (void)shippingAndReturnsExpandableCell:(id)arg1 didTapPurchaseProtectionURL:(id)arg2;
- (void)didSelectItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithUserSession:(id)arg1 logger:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


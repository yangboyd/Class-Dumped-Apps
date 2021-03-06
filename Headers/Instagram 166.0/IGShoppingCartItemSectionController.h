//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import <InstagramAppCoreFramework/IGShoppingCartItemCollectionViewCellDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGShoppingInlineVariantSelectionControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGTextPickerViewControllerDelegate-Protocol.h>

@class IGSessionTracker, IGShoppingCartItemCellSwipeCoordinator, IGShoppingCartItemViewModel, IGShoppingCartLogger, IGShoppingInlineVariantSelectionController, IGShoppingMerchantCartEntryPointData, IGUserSession, NSString;
@protocol IGShoppingCartItemSectionControllerDelegate;

@interface IGShoppingCartItemSectionController : IGListSectionController <IGShoppingCartItemCollectionViewCellDelegate, IGShoppingInlineVariantSelectionControllerDelegate, IGTextPickerViewControllerDelegate>
{
    IGUserSession *_userSession;
    IGShoppingCartLogger *_logger;
    IGShoppingCartItemCellSwipeCoordinator *_cellSwipeCoordinator;
    NSString *_analyticsModule;
    IGShoppingCartItemViewModel *_viewModel;
    IGShoppingMerchantCartEntryPointData *_entryPointData;
    IGSessionTracker *_shoppingSessionTracker;
    IGShoppingInlineVariantSelectionController *_variantSelectionController;
    _Bool _accentedHighlightEnabled;
    id <IGShoppingCartItemSectionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGShoppingCartItemSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)shoppingInlineVariantSelectionController:(id)arg1 didResolveWithProductItem:(id)arg2;
- (void)shoppingBagItemCollectionViewCellDidTapEdit:(id)arg1;
- (void)shoppingBagItemCollectionViewCellDidTapSave:(id)arg1;
- (void)textPickerViewController:(id)arg1 didSelectItem:(id)arg2 atIndex:(long long)arg3;
- (void)shoppingBagItemCollectionViewCellDidStartSwipePanGestureRecognition:(id)arg1;
- (void)shoppingBagItemCollectionViewCellDidTapSelectQuantity:(id)arg1;
- (void)shoppingBagItemCollectionViewCellDidTapRemove:(id)arg1;
- (void)shoppingBagItemCollectionViewCellDidTapTitle:(id)arg1;
- (void)shoppingBagItemCollectionViewCellDidTapImageView:(id)arg1;
- (id)_bagInfoForMerchantBag:(id)arg1;
- (void)_navigateToPDP;
- (struct UIEdgeInsets)inset;
- (void)didSelectItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (void)peekAccentedHighlightAnimated:(_Bool)arg1;
- (id)initWithUserSession:(id)arg1 logger:(id)arg2 cellSwipeCoordinator:(id)arg3 entryPointData:(id)arg4 shoppingSessionTracker:(id)arg5 analyticsModule:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


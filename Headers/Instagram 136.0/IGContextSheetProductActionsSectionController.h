//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import <InstagramAppCoreFramework/IGShoppingSaveControllerDelegate-Protocol.h>

@class IGFeedItem, IGProductItem, IGShoppingConsumptionFeedItemLogger, IGShoppingSaveController, IGUserSession, NSDictionary, NSString;
@protocol IGContextSheetProductActionsSectionControllerDelegate;

@interface IGContextSheetProductActionsSectionController : IGListSectionController <IGShoppingSaveControllerDelegate>
{
    IGProductItem *_productItem;
    NSString *_analyticsModule;
    IGUserSession *_userSession;
    IGFeedItem *_feedItem;
    IGShoppingConsumptionFeedItemLogger *_shoppingLogger;
    NSDictionary *_loggingExtras;
    IGShoppingSaveController *_shoppingSaveController;
    _Bool _isDropsReminder;
    _Bool _shareProductStickerEnabled;
    id <IGContextSheetProductActionsSectionControllerDelegate> _delegate;
}

+ (double)sectionControllerHeight:(_Bool)arg1 shareProductStickerEnabled:(_Bool)arg2;
@property(nonatomic) __weak id <IGContextSheetProductActionsSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_shoppingSaveTextWhenIsDropsReminder:(_Bool)arg1 isSaved:(_Bool)arg2;
- (void)shoppingSaveControllerDidUpdateButtonState:(long long)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (void)tryToggleSave;
- (id)initWithProductItem:(id)arg1 isDropsReminder:(_Bool)arg2 feedItem:(id)arg3 shoppingSaveController:(id)arg4 userSession:(id)arg5 shoppingLogger:(id)arg6 loggingExtras:(id)arg7 analyticsModule:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


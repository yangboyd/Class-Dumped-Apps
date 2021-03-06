//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGLiveShoppingContentDataSourceListener-Protocol.h>
#import <InstagramAppCoreFramework/IGSaveStatusListener-Protocol.h>
#import <InstagramAppCoreFramework/IGShoppingGenericProductWithContextCardSectionControllerDelegate-Protocol.h>

@class IGLiveShoppingContentDataSource, IGSessionTracker, IGShoppingCartLogger, IGShoppingNavigationAnalyticsContext, IGUserSession, NSString, UIViewController;
@protocol IGLiveShoppingContentViewAdapterDelegate;

@interface IGLiveShoppingContentViewAdapter : NSObject <IGLiveShoppingContentDataSourceListener, IGSaveStatusListener, IGShoppingGenericProductWithContextCardSectionControllerDelegate>
{
    IGLiveShoppingContentDataSource *_dataSource;
    IGUserSession *_userSession;
    UIViewController *_viewController;
    IGShoppingNavigationAnalyticsContext *_analyticsContext;
    IGSessionTracker *_shoppingSessionTracker;
    struct IGGridLayoutConfiguration _gridLayoutConfiguration;
    IGShoppingCartLogger *_bagLogger;
    NSString *_mediaId;
    id <IGLiveShoppingContentViewAdapterDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGLiveShoppingContentViewAdapterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)savableObject:(id)arg1 didUpdateSaveStatusWithHasSaved:(_Bool)arg2 saveAction:(long long)arg3;
- (void)genericProductWithContextCardSectionController:(id)arg1 didTapDismissForGenericProductItem:(id)arg2;
- (void)genericProductWithContextCardSectionController:(id)arg1 willNavigateToPDPForGenericViewModel:(id)arg2;
- (_Bool)genericProductWithContextCardSectionController:(id)arg1 containsLastSavedGenericProductItem:(id)arg2;
- (void)genericProductWithContextCardSectionController:(id)arg1 didUpdateGenericProductItem:(id)arg2 withUpdatedSaveStatus:(_Bool)arg3 displayedMediaId:(id)arg4;
- (void)liveShoppingContentDataSource:(id)arg1 didUpdateFetchState:(id)arg2;
- (void)liveShoppingContentDataSource:(id)arg1 didUpdateDataModel:(id)arg2;
- (void)_handleSaveProductItemSuccessWithGenericProductItem:(id)arg1 updatedSaveStatus:(_Bool)arg2;
- (id)_productWithContextCardLoggingProvider;
- (id)sectionControllerForProductFeedViewModel:(id)arg1;
- (id)productFeedViewModels;
- (id)initWithDataSource:(id)arg1 userSession:(id)arg2 viewController:(id)arg3 analyticsContext:(id)arg4 shoppingSessionTracker:(id)arg5 gridLayoutConfiguration:(struct IGGridLayoutConfiguration)arg6 mediaId:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


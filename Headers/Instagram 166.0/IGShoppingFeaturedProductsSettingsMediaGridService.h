//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGShoppingMediaGridServiceType-Protocol.h>

@class IGShoppingMediaCollectionModel, IGStatefulNetworker, IGStatefulNetworkerFetchState, IGUserSession, NSString;
@protocol IGShoppingMediaGridServiceDelegate;

@interface IGShoppingFeaturedProductsSettingsMediaGridService : NSObject <IGShoppingMediaGridServiceType>
{
    IGShoppingMediaCollectionModel *_mediaCollection;
    IGStatefulNetworker *_networker;
    IGUserSession *_userSession;
    NSString *_destinationSurface;
    NSString *_title;
    id <IGShoppingMediaGridServiceDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGShoppingMediaGridServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_networkFetchStateChanged:(id)arg1;
- (void)_networkResponseLoaded:(id)arg1 requestConfiguration:(id)arg2;
- (id)placeholderItemsForMediaGrid;
- (long long)contextualFeedEntryPoint;
- (id)contextualFeedTitleForViewControllerConfiguration:(id)arg1;
- (id)contextualFeedServiceForMedia:(id)arg1;
- (_Bool)hasMoreAvailable;
@property(readonly, nonatomic) IGStatefulNetworkerFetchState *fetchState;
- (_Bool)fetchDataWithAction:(long long)arg1 isPullToRefresh:(_Bool)arg2;
- (id)itemsForMediaGrid;
- (id)initWithUserSession:(id)arg1 destinationSurface:(id)arg2 mediaCollection:(id)arg3 mediaContextualFeedTitle:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


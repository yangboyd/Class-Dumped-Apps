//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGSaveCoordinating-Protocol.h>

@class IGShoppingObjectsCache, NSString;
@protocol IGAPIClient, IGSaveStatusAnnouncer, IGSavedItemStatusAnnouncer;

@interface IGSaveCoordinator : NSObject <IGSaveCoordinating>
{
    id <IGAPIClient> _networker;
    id <IGSaveStatusAnnouncer> _saveStatusAnnouncer;
    IGShoppingObjectsCache *_shoppingObjectsCache;
    id <IGSavedItemStatusAnnouncer> _savedItemStatusAnnouncer;
}

- (void).cxx_destruct;
- (void)saveFeedItem:(id)arg1 userSession:(id)arg2 saveStatus:(_Bool)arg3 isAlreadySaved:(_Bool)arg4 addCollectionIds:(id)arg5 removeCollectionIds:(id)arg6 successHandler:(CDUnknownBlockType)arg7 failureHandler:(CDUnknownBlockType)arg8 analyticsModule:(id)arg9;
- (void)saveProductItem:(id)arg1 saveStatus:(_Bool)arg2 productSaveStatusStore:(id)arg3 merchantId:(id)arg4 mediaId:(id)arg5 logger:(id)arg6 extras:(id)arg7 successHandler:(CDUnknownBlockType)arg8 failureHandler:(CDUnknownBlockType)arg9 analyticsModule:(id)arg10;
- (id)initWithNetworker:(id)arg1 saveStatusAnnouncer:(id)arg2 savedItemStatusAnnouncer:(id)arg3 shoppingObjectsCache:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


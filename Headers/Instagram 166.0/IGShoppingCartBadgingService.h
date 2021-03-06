//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGShoppingCartDataControllerListener-Protocol.h>

@class IGShoppingCartBadgeAnimationController, IGShoppingCartDataController, IGUserDefaults, NSHashTable, NSString;
@protocol IGShoppingCartBadgingAnnouncer;

@interface IGShoppingCartBadgingService : NSObject <IGShoppingCartDataControllerListener>
{
    id <IGShoppingCartBadgingAnnouncer> _announcer;
    IGShoppingCartDataController *_dataController;
    IGUserDefaults *_userDefaults;
    NSHashTable *_badgeableTable;
    IGShoppingCartBadgeAnimationController *_animationController;
}

- (void).cxx_destruct;
- (void)shoppingBagDataController:(id)arg1 didHandleUserError:(id)arg2;
- (void)shoppingBagDataController:(id)arg1 didUpdateState:(id)arg2 forQuery:(id)arg3 previousState:(id)arg4;
- (void)shoppingBagDataController:(id)arg1 didUpdateBagStore:(id)arg2 withChangeset:(id)arg3;
- (void)_updatePrimaryEntryPointBadgingStateWithUpdateBlock:(CDUnknownBlockType)arg1;
- (void)markPrimaryBagEntryPointOpened;
- (void)markPrimaryBagEntryPointsNeedsBadging;
- (void)fetchTotalItemCountIfNeeded;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)stopUpdatingShoppingBagBadgeable:(id)arg1;
- (void)startUpdatingShoppingBagBadgeable:(id)arg1;
@property(readonly, nonatomic) _Bool shouldBadgePrimaryBagEntryPoints;
@property(readonly, nonatomic) unsigned long long totalBagItemCount;
- (id)initWithDataController:(id)arg1 userDefaults:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


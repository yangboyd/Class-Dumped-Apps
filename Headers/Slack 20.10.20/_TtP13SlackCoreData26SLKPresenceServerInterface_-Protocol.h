//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSSet, NSString, OS_dispatch_queue;
@protocol _TtP13SlackCoreData37SLKPresenceServerTransactionInterface_;

@protocol _TtP13SlackCoreData26SLKPresenceServerInterface_
- (id <_TtP13SlackCoreData37SLKPresenceServerTransactionInterface_>)updatePresenceChangeObserverForTransaction:(id <_TtP13SlackCoreData37SLKPresenceServerTransactionInterface_>)arg1 withUserIds:(NSSet *)arg2;
- (void)removePresenceChangeObserverForTransaction:(id <_TtP13SlackCoreData37SLKPresenceServerTransactionInterface_>)arg1;
- (id <_TtP13SlackCoreData37SLKPresenceServerTransactionInterface_>)addPresenceChangeObserverForUserIds:(NSSet *)arg1 subscriptionBehavior:(long long)arg2 identifier:(NSString *)arg3 callbackQueue:(OS_dispatch_queue *)arg4 callback:(void (^)(NSSet *))arg5;
- (_Bool)userIsAvailableWithUserIdentifier:(NSString *)arg1 alwaysActive:(_Bool)arg2;
- (void)updatePresenceForUserIdentifier:(NSString *)arg1 presence:(unsigned long long)arg2;
- (void)performBatchPresenceChangesWithBlock:(void (^)(void))arg1;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSNotificationCenter;
@protocol SLKDataRepositoryInterface, _TtP10SlackCalls27SlackCallsProviderInterface_, _TtP12SlackAccount26SLKAccountManagerInterface_, _TtP13SlackCoreData23SLKObjectCacheInterface_, _TtP15SlackFoundation23SLKPrefManagerInterface_;

@protocol _TtP10SlackCalls26SlackCallsFactoryInterface_
+ (id <_TtP10SlackCalls27SlackCallsProviderInterface_>)chimeCallsProviderWith:(id <_TtP15SlackFoundation23SLKPrefManagerInterface_>)arg1 accountManager:(id <_TtP12SlackAccount26SLKAccountManagerInterface_>)arg2 dataRepository:(id <SLKDataRepositoryInterface>)arg3 objectCache:(id <_TtP13SlackCoreData23SLKObjectCacheInterface_>)arg4 notificationCenter:(NSNotificationCenter *)arg5;
@end


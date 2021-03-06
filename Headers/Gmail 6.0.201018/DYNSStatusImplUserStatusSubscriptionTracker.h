//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol JavaUtilMap;

@interface DYNSStatusImplUserStatusSubscriptionTracker : NSObject
{
    id lock_;
    id <JavaUtilMap> subscriptionMap_;
}

- (void)dealloc;
- (id)getDndExpiryTimeTrackedUserIdsWithComGoogleCommonCollectImmutableSet:(id)arg1;
- (id)getAllDndExpiryTimeTrackedUserIds;
- (id)getTrackedUserIds;
- (int)getSubscriptionCount;
- (id)getSubscriptionsAssociatedWithUsersWithComGoogleCommonCollectImmutableSet:(id)arg1;
- (id)getSubscriptionsAssociatedWithUserWithDYNSCommonUserId:(id)arg1;
- (id)getSubscriptionWithLong:(long long)arg1;
- (id)getSubscriptions;
- (_Bool)hasSubscriptionWithDYNSCommonUserStatusSubscription:(id)arg1;
- (void)removeAllSubscriptions;
- (void)removeSubscriptionWithDYNSCommonUserStatusSubscription:(id)arg1;
- (void)addSubscriptionWithDYNSCommonUserStatusSubscription:(id)arg1;

@end


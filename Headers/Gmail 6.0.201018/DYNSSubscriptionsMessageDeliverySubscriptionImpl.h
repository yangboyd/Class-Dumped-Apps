//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DYNMessageDeliverySubscription-Protocol.h"
#import "DYNSApiSubscriptionsMessageDeliverySubscription-Protocol.h"

@class ComGoogleAppsXplatSubscribeSubscription, JavaUtilOptional, NSString;
@protocol JavaUtilConcurrentExecutor;

@interface DYNSSubscriptionsMessageDeliverySubscriptionImpl : NSObject <DYNMessageDeliverySubscription, DYNSApiSubscriptionsMessageDeliverySubscription>
{
    id <JavaUtilConcurrentExecutor> dataExecutor_;
    ComGoogleAppsXplatSubscribeSubscription *messageDeliverySubscription_;
    JavaUtilOptional *messageDeliverySnapshotObserver_;
}

+ (void)initialize;
- (void)dealloc;
- (void)stop;
- (void)startWithComGoogleAppsXplatObserveObserver:(id)arg1 withJavaUtilConcurrentExecutor:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


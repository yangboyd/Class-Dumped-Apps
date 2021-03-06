//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DYNSApiSubscriptionsWorldFilterResultsSubscription-Protocol.h"
#import "DYNWorldFilterResultsSubscription-Protocol.h"

@class ComGoogleAppsXplatSubscribeSubscription, JavaUtilOptional, NSString;
@protocol DYNSAnalyticsClearcutEventsLogger, JavaUtilConcurrentExecutor;

@interface DYNSSubscriptionsWorldFilterResultsSubscriptionImpl : NSObject <DYNWorldFilterResultsSubscription, DYNSApiSubscriptionsWorldFilterResultsSubscription>
{
    id <DYNSAnalyticsClearcutEventsLogger> clearcutEventsLogger_;
    id <JavaUtilConcurrentExecutor> dataExecutor_;
    id <JavaUtilConcurrentExecutor> mainExecutor_;
    ComGoogleAppsXplatSubscribeSubscription *worldFilterResultsSubscription_;
    JavaUtilOptional *snapshotObserver_;
}

+ (void)initialize;
- (void)dealloc;
- (void)reportGroupSelection;
- (void)changeConfigurationWithDYNSUIModelsWorldFilterConfig:(id)arg1;
- (void)stop;
- (void)startWithComGoogleAppsXplatObserveObserver:(id)arg1;
- (void)setQuery:(id)arg1 withUserIds:(id)arg2;
- (void)setQuery:(id)arg1;
- (void)changeConfiguration:(id)arg1;
- (void)startWithObserver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


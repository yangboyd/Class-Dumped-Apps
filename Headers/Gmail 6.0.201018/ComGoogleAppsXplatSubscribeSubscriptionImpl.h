//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleAppsXplatSubscribeSubscription.h"

@class ComGoogleCommonBaseOptional, JavaUtilOptional, XPTLifecycle;
@protocol ComGoogleAppsXplatObserveObservable;

@interface ComGoogleAppsXplatSubscribeSubscriptionImpl : ComGoogleAppsXplatSubscribeSubscription
{
    XPTLifecycle *lifecycle_;
    ComGoogleCommonBaseOptional *publisherServiceFactory_;
    id lock_;
    JavaUtilOptional *config_;
    int priority_;
    id <ComGoogleAppsXplatObserveObservable> contentObservable_;
}

- (void)dealloc;
- (id)changeConfigurationWithId:(id)arg1;
- (void)changeJobPriorityWithInt:(int)arg1;
- (id)getContent;
- (id)getLifecycle;

@end


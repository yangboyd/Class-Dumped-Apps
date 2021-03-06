//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsXplatObserveSettable-Protocol.h"

@class ComGoogleAppsXplatObserveObserverMap, NSString;

@interface ComGoogleAppsXplatObserveObserverMap_SettableForKey : NSObject <ComGoogleAppsXplatObserveSettable>
{
    ComGoogleAppsXplatObserveObserverMap *this$0_;
    id lock_;
    _Bool hasBeenSet_;
    id key_;
}

- (void)dealloc;
- (id)getObserverHolder;
- (_Bool)hadValue;
- (int)getObserversCount;
- (void)removeObserverWithComGoogleAppsXplatObserveObserver:(id)arg1;
- (void)addObserverWithComGoogleAppsXplatObserveObserver:(id)arg1 withJavaUtilConcurrentExecutor:(id)arg2;
- (void)setValueWithoutWaitWithId:(id)arg1;
- (id)setValueAndWaitWithId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


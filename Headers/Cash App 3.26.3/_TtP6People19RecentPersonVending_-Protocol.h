//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray;
@protocol _TtP6People27RecentPersonVendingObserver_;

@protocol _TtP6People19RecentPersonVending_
- (void)removeObserver:(id <_TtP6People27RecentPersonVendingObserver_>)arg1;
- (void)addObserver:(id <_TtP6People27RecentPersonVendingObserver_>)arg1;
- (void)refreshRecentPeopleWithCompletionHandler:(void (^)(void))arg1;
@property(nonatomic, readonly) NSArray *recentPeople;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XBXDataContext.h"

@class NSArray, NSDate, NSString;

@interface _TtC10SmartGlass32SGGamerScoreLeaderboardViewModel : XBXDataContext
{
    // Error parsing type: , name: leaderboardDataContexts
    // Error parsing type: , name: leaderboardId
    // Error parsing type: , name: leaderboardMonth
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (void)onPeopleHubListFailedWithError:(id)arg1 forPeopleType:(long long)arg2;
- (void)onPeopleHubListHydrated:(id)arg1 forPeopleType:(long long)arg2;
- (void)dealloc;
- (void)load;
@property(nonatomic, copy) NSDate *leaderboardMonth; // @synthesize leaderboardMonth;
@property(nonatomic, copy) NSString *leaderboardId; // @synthesize leaderboardId;
@property(nonatomic, copy) NSArray *leaderboardDataContexts; // @synthesize leaderboardDataContexts;

@end


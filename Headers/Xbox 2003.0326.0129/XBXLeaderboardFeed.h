//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSArray, NSDate, NSMutableArray, NSString;

@interface XBXLeaderboardFeed : NSObject <NSCoding>
{
    NSString *_type;
    NSDate *_startDate;
    NSDate *_endDate;
    NSString *_leaderboardDescription;
    NSMutableArray *_userListInternal;
}

@property(retain, nonatomic) NSMutableArray *userListInternal; // @synthesize userListInternal=_userListInternal;
@property(retain, nonatomic) NSString *leaderboardDescription; // @synthesize leaderboardDescription=_leaderboardDescription;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *userList;
- (void)addUserRanking:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end


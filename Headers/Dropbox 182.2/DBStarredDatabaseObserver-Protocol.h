//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DBStarredDatabase, NSArray;

@protocol DBStarredDatabaseObserver <NSObject>

@optional
- (void)starredDatabaseDidTerminate:(DBStarredDatabase *)arg1;
- (void)starredDatabase:(DBStarredDatabase *)arg1 didUpdateWithAddedStarred:(NSArray *)arg2 removedStarred:(NSArray *)arg3 fullRefresh:(_Bool)arg4;
@end


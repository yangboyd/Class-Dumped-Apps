//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL;
@protocol SPTFreeTierAllSongsRegistration;

@protocol SPTFreeTierAllSongsRegistry <NSObject>
- (void)unregisterFallbackHandler:(id <SPTFreeTierAllSongsRegistration>)arg1;
- (void)unregisterHandler:(id <SPTFreeTierAllSongsRegistration>)arg1;
- (id <SPTFreeTierAllSongsRegistration>)registerFallbackHandler:(id <SPTFreeTierAllSongsDataSource> (^)(NSURL *, NSString *))arg1;
- (id <SPTFreeTierAllSongsRegistration>)registerHandler:(id <SPTFreeTierAllSongsDataSource> (^)(NSURL *, NSString *))arg1 predicate:(_Bool (^)(NSString *, NSDictionary *, NSURL *))arg2;
- (void)fetchDataSourceForURL:(NSURL *)arg1 withCompletion:(void (^)(id <SPTFreeTierAllSongsDataSource>))arg2;
@end


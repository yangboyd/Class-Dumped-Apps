//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexSet, NSObject, NSString;
@protocol OS_dispatch_queue, YTEntityStore;

@protocol YTEntityStoreQueryResults <NSObject>
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, nonatomic) id <YTEntityStore> entityStore;
- (void)entitiesAtIndexes:(NSIndexSet *)arg1 callbackQueue:(NSObject<OS_dispatch_queue> *)arg2 completionBlock:(void (^)(NSDictionary *, NSError *))arg3;
- (NSString *)entityKeyAtIndex:(unsigned long long)arg1;
@end


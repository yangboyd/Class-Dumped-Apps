//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GPCPromise;

@interface PDLCacheSyncResult : NSObject
{
    unsigned long long _dataSyncingMode;
    GPCPromise *_cacheReadyPromise;
    GPCPromise *_serverSyncingPromise;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GPCPromise *serverSyncingPromise; // @synthesize serverSyncingPromise=_serverSyncingPromise;
@property(readonly, nonatomic) GPCPromise *cacheReadyPromise; // @synthesize cacheReadyPromise=_cacheReadyPromise;
@property(readonly, nonatomic) unsigned long long dataSyncingMode; // @synthesize dataSyncingMode=_dataSyncingMode;
- (id)initWithDataSyncingMode:(unsigned long long)arg1 cacheReadyPromise:(id)arg2 serverSyncingPromise:(id)arg3;

@end


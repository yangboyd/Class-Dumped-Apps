//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue, WASignalManagerIdentityKeyFetcherDelegate;

@interface WASignalManagerIdentityKeyFetcher : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;
    id <WASignalManagerIdentityKeyFetcherDelegate> _delegate;
    NSMutableDictionary *_fetches;
}

- (void).cxx_destruct;
- (void)fetchIdentityKeysForDeviceJIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)dedupeFetchForDeviceJID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithWorkQueue:(id)arg1 delegate:(id)arg2;

@end


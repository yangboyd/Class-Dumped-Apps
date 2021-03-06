//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGGiphyDataStoreReading-Protocol.h>
#import <FBSharedFramework/IGGiphyDataStoreUpdating-Protocol.h>

@class NSDictionary, NSString;
@protocol OS_dispatch_queue;

@interface IGGiphyDataStore : NSObject <IGGiphyDataStoreReading, IGGiphyDataStoreUpdating>
{
    NSObject<OS_dispatch_queue> *_updateQueue;
    NSDictionary *_giphyModelsByGiphyId;
}

- (void).cxx_destruct;
@property(retain) NSDictionary *giphyModelsByGiphyId; // @synthesize giphyModelsByGiphyId=_giphyModelsByGiphyId;
- (void)cacheGiphyModels:(id)arg1;
- (id)giphyModelForGiphyId:(id)arg1;
- (id)initWithUpdateQueue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


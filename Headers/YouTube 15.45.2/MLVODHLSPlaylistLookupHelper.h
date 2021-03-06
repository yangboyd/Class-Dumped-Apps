//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/MLHLSPlaylistLookupHelper.h>

@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MLVODHLSPlaylistLookupHelper : MLHLSPlaylistLookupHelper
{
    NSMutableDictionary *_playlistDataCache;
    NSObject<OS_dispatch_queue> *_cacheQueue;
}

- (void).cxx_destruct;
- (id)playlistDataCache;
- (void)cachePlaylistData:(id)arg1 withKey:(id)arg2;
- (void)clearCaches;
- (void)fetchMediaPlaylistDataForStream:(id)arg1 cacheKey:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)initWithStreams:(id)arg1 hlsProxyConfig:(id)arg2;

@end


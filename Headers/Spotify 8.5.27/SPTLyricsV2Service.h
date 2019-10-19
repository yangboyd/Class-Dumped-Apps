//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTDataLoaderDelegate-Protocol.h"

@class NSCache, NSString, SPTDataLoader;
@protocol SPTLyricsV2TestManager;

@interface SPTLyricsV2Service : NSObject <SPTDataLoaderDelegate>
{
    SPTDataLoader *_dataLoader;
    id <SPTLyricsV2TestManager> _testManager;
    CDUnknownBlockType _callback;
    NSCache *_lyricsModelsCache;
    NSCache *_noLyricsCache;
}

@property(readonly, nonatomic) NSCache *noLyricsCache; // @synthesize noLyricsCache=_noLyricsCache;
@property(readonly, nonatomic) NSCache *lyricsModelsCache; // @synthesize lyricsModelsCache=_lyricsModelsCache;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(readonly, nonatomic) id <SPTLyricsV2TestManager> testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
- (void).cxx_destruct;
- (id)trackIdentifierFromTrack:(id)arg1;
- (void)fetchLyricsFromServerForTrackId:(id)arg1 imageURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)errorWithCode:(long long)arg1 description:(id)arg2;
- (id)boolToString:(_Bool)arg1;
- (void)flushCallbackWithSuccess:(_Bool)arg1 result:(id)arg2 error:(id)arg3;
- (void)dataLoader:(id)arg1 didCancelRequest:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (_Bool)lyricsCachedForTrack:(id)arg1;
- (_Bool)lyricsAvailableForTrack:(id)arg1;
- (void)fetchForTrack:(id)arg1 imageURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cancelAllLoads;
- (void)dealloc;
- (id)initWithDataLoaderFactory:(id)arg1 testManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


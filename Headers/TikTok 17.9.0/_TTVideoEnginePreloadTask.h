//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TTVideoInfoFetcherDelegate-Protocol.h"

@class NSError, NSMutableArray, NSString, TTVideoEngineInfoFetcher, TTVideoEngineModel, TTVideoEnginePreloadMedia, TTVideoEnginePreloaderURLItem, TTVideoEnginePreloaderVidItem, TTVideoEnginePreloaderVideoModelItem;
@protocol _TTVideoEnginePreloadTaskDelegate;

@interface _TTVideoEnginePreloadTask : NSObject <TTVideoInfoFetcherDelegate>
{
    _Bool _onceNotify;
    id <_TTVideoEnginePreloadTaskDelegate> _delegate;
    NSString *_videoId;
    unsigned long long _targetResolution;
    long long _preSize;
    TTVideoEngineInfoFetcher *_fetcher;
    TTVideoEngineModel *_responseData;
    NSError *_responseError;
    TTVideoEnginePreloaderURLItem *_urlItem;
    TTVideoEnginePreloaderVidItem *_vidItem;
    TTVideoEnginePreloaderVideoModelItem *_videoModelItem;
    long long _priorityLevel;
    NSMutableArray *_tracks;
    TTVideoEnginePreloadMedia *_preloadMedia;
}

+ (id)preloadTask:(id)arg1 videoId:(id)arg2 preSize:(long long)arg3 vidItem:(id)arg4;
@property(retain, nonatomic) TTVideoEnginePreloadMedia *preloadMedia; // @synthesize preloadMedia=_preloadMedia;
@property(retain, nonatomic) NSMutableArray *tracks; // @synthesize tracks=_tracks;
@property(nonatomic) _Bool onceNotify; // @synthesize onceNotify=_onceNotify;
@property(nonatomic) long long priorityLevel; // @synthesize priorityLevel=_priorityLevel;
@property(retain, nonatomic) TTVideoEnginePreloaderVideoModelItem *videoModelItem; // @synthesize videoModelItem=_videoModelItem;
@property(retain, nonatomic) TTVideoEnginePreloaderVidItem *vidItem; // @synthesize vidItem=_vidItem;
@property(retain, nonatomic) TTVideoEnginePreloaderURLItem *urlItem; // @synthesize urlItem=_urlItem;
@property(retain, nonatomic) NSError *responseError; // @synthesize responseError=_responseError;
@property(retain, nonatomic) TTVideoEngineModel *responseData; // @synthesize responseData=_responseData;
@property(retain, nonatomic) TTVideoEngineInfoFetcher *fetcher; // @synthesize fetcher=_fetcher;
@property(nonatomic) long long preSize; // @synthesize preSize=_preSize;
@property(nonatomic) unsigned long long targetResolution; // @synthesize targetResolution=_targetResolution;
@property(copy, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
@property(nonatomic) __weak id <_TTVideoEnginePreloadTaskDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (void)infoFetcherFinishWithDNSError:(id)arg1;
- (void)infoFetcherDidCancel;
- (void)infoFetcherShouldRetry:(id)arg1;
- (void)infoFetcherDidFinish:(id)arg1 error:(id)arg2;
- (void)infoFetcherDidFinish:(long long)arg1;
- (void)notifyPreloadEnd:(id)arg1 error:(id)arg2;
- (_Bool)preloadCahceComplete;
- (void)removeVidPlaceholderTrack;
- (id)addTrackItemByKey:(id)arg1;
- (id)getTrackItem:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


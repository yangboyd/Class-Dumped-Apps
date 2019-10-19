//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensDataFetcherListener-Protocol.h"
#import "SCLensDataFetchingMediatorProtocol-Protocol.h"
#import "SCTokenizedLensDataUpdateRegistry-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSArray, NSMutableSet, NSString;
@protocol SCLensDataFetcher, SCLensDataFetcherListener, SCLensDataFetchingMediatorDelegate, SCLensDataPrefetcher;

@interface SCLensDataFetchingMediator : NSObject <SCLensDataFetcherListener, SCTraceEnabled, SCLensDataFetchingMediatorProtocol, SCTokenizedLensDataUpdateRegistry>
{
    id <SCLensDataFetcher> _lensDataFetcher;
    id <SCLensDataPrefetcher> _lensDataPrefetcher;
    id <SCLensDataFetcherListener> _lensThumbnailLogger;
    NSMutableSet *_tokens;
    NSMutableSet *_lensIdsWithInvalidContent;
    NSMutableSet *_lensIdsForLoadingImages;
    NSMutableSet *_lensIdsForLoadingContent;
    NSMutableSet *_lensIdsForLoadingFilterOverlays;
    NSMutableSet *_lensIdsForLoadingAssets;
    NSMutableSet *_lensIdsForLoadedAssets;
    id <SCLensDataFetchingMediatorDelegate> _delegate;
    NSArray *_downloadableLenses;
}

@property(retain, nonatomic) NSArray *downloadableLenses; // @synthesize downloadableLenses=_downloadableLenses;
@property(nonatomic) __weak id <SCLensDataFetchingMediatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)lensDataFetcher:(id)arg1 didFinishLoadingFilterOverlayImageForLens:(id)arg2 imagePath:(id)arg3 error:(id)arg4;
- (void)lensDataFetcher:(id)arg1 didFinishLoadingContentForAsset:(id)arg2 content:(id)arg3 error:(id)arg4;
- (void)lensDataFetcher:(id)arg1 didFinishLoadingContentForLens:(id)arg2 contentPath:(id)arg3 error:(id)arg4;
- (void)lensDataFetcher:(id)arg1 didFinishLoadingImageForLens:(id)arg2 image:(id)arg3 error:(id)arg4;
- (void)lensDataFetcher:(id)arg1 willStartLoadingFilterOverlayImagePathForLens:(id)arg2;
- (void)lensDataFetcher:(id)arg1 willStartLoadingAsset:(id)arg2;
- (void)lensDataFetcher:(id)arg1 willStartLoadingContentForLens:(id)arg2;
- (void)lensDataFetcher:(id)arg1 willStartLoadingImageForLens:(id)arg2;
- (void)removeFetcherListeners;
- (void)addFetcherListeners;
- (void)didUpdateContentForLens:(id)arg1 contentUpdateType:(long long)arg2;
- (void)didUpdateContentForLens:(id)arg1;
- (_Bool)isLensWithInvalidContent:(id)arg1;
- (void)reachabilityStatusChangedNotification:(id)arg1;
- (_Bool)isFetchingLens:(id)arg1;
- (void)fetchLens:(id)arg1;
- (void)fetchLensesIfNeeded;
- (void)stopUpdatingLensDataWithToken:(id)arg1;
- (id)startUpdatingLensData;
- (void)removeToken:(id)arg1;
- (void)addToken:(id)arg1;
@property(readonly, nonatomic) _Bool updating;
- (void)fetchDownloadableLenses;
- (void)dealloc;
- (id)initWitLensDataFetcher:(id)arg1 lensDataPrefetcher:(id)arg2 lensThumbnailLogger:(id)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


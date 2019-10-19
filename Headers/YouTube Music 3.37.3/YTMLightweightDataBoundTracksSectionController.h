//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTMLightweightOfflineTrackingSectionController.h"

@class NSCache, YTHotConfig, YTIMusicDataBoundAlbumReleaseTracksShelfRenderer, YTIMusicShelfRenderer, YTMMusicEntityCache;

@interface YTMLightweightDataBoundTracksSectionController : YTMLightweightOfflineTrackingSectionController
{
    YTMMusicEntityCache *_cache;
    YTHotConfig *_hotConfig;
    YTIMusicDataBoundAlbumReleaseTracksShelfRenderer *_renderer;
    YTIMusicShelfRenderer *_musicShelfRenderer;
    NSCache *_itemMoldCache;
}

- (void).cxx_destruct;
- (void)setUpShelfVEType:(id)arg1;
- (void)setUpItemMoldCache;
- (void)setUpItemMoldForIndex:(unsigned long long)arg1;
- (void)lightweightCell:(id)arg1 removeObservationForEntityReference:(id)arg2;
- (void)lightweightCell:(id)arg1 requestObservationForEntityReference:(id)arg2;
- (id)footerContentView;
- (id)headerContentView;
- (long long)numberOfItemsInSection;
- (void)removeRendererAtIndex:(unsigned long long)arg1;
- (void)insertRenderer:(id)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)indexForRenderer:(id)arg1;
- (void)willDisplayCell:(id)arg1;
- (id)rendererAtIndex:(unsigned long long)arg1;
- (id)initWithService:(id)arg1 parentResponder:(id)arg2 cellFactory:(id)arg3 sectionRenderer:(id)arg4;

@end


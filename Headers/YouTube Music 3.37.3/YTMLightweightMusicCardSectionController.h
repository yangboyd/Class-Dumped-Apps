//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTLightweightSectionController.h"

#import "YTMLightweightCellDelegateProtocol-Protocol.h"

@class NSMutableArray, NSString, YTIMusicCardShelfRenderer, YTLightweightBaseCellFactory;

@interface YTMLightweightMusicCardSectionController : YTLightweightSectionController <YTMLightweightCellDelegateProtocol>
{
    YTIMusicCardShelfRenderer *_musicCardShelfRenderer;
    YTLightweightBaseCellFactory *_cellFactory;
    NSMutableArray *_contentsArray;
}

- (void).cxx_destruct;
- (void)lightweightSwipeableCellWillBeginSwiping:(id)arg1;
- (_Bool)lightweightSwipeableCellShouldShowHint:(id)arg1;
- (_Bool)shouldLoadAnimatedThumbnailForLightweightCell:(id)arg1;
- (long long)numberOfItemsInSection;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)rendererAtIndex:(unsigned long long)arg1;
- (id)initWithService:(id)arg1 parentResponder:(id)arg2 cellFactory:(id)arg3 sectionRenderer:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


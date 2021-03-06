//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTEditStickerDataProviderImpl.h>

#import <Module_Framework/YTEditStickerDataDelegate-Protocol.h>

@class GIMMe, NSMutableArray, NSString, YTEditStickerDataSource, YTIStickerPageRenderer;

@interface YTEditStickerImageProvider : YTEditStickerDataProviderImpl <YTEditStickerDataDelegate>
{
    YTIStickerPageRenderer *_renderer;
    NSMutableArray *_stickerList;
    YTEditStickerDataSource *_dataSource;
    struct CGSize _stickerSize;
    GIMMe *_gimme;
}

- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (unsigned long long)indexOfSticker:(id)arg1 inStickersArray:(id)arg2;
- (void)finishedFetchingData;
- (void)removedSticker:(id)arg1;
- (void)updatedSticker:(id)arg1;
- (void)startedFetchingStickers:(id)arg1;
- (id)stickerForIndex:(long long)arg1;
- (long long)stickerIndex:(id)arg1;
- (unsigned long long)stickerCount;
- (void)loadStickersDataWithStickerSize:(struct CGSize)arg1;
- (id)initWithRenderer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


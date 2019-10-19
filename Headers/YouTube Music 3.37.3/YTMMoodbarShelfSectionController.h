//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTLightweightSectionController.h"

#import "YTMMoodbarMoodCellViewDelegate-Protocol.h"
#import "YTMMoodbarShelfCellDelegate-Protocol.h"

@class GPBMessage, NSMutableArray, NSString, YTIMusicMoodbarRenderer, YTMMoodbarShelfCell, YTMPlaybackPublishController;

@interface YTMMoodbarShelfSectionController : YTLightweightSectionController <YTMMoodbarMoodCellViewDelegate, YTMMoodbarShelfCellDelegate>
{
    GPBMessage *_sectionRenderer;
    YTIMusicMoodbarRenderer *_moodbarRenderer;
    YTMMoodbarShelfCell *_moodbarShelfCell;
    YTMPlaybackPublishController *_playbackPublishController;
    NSMutableArray *_moodbarItemControllers;
}

- (void).cxx_destruct;
- (id)itemControllerForMoodCell:(id)arg1;
- (id)indexPathForMoodItemRenderer:(id)arg1;
- (id)moodItemRendererAtIndexPath:(id)arg1;
- (void)setMoodbarToInactiveState:(_Bool)arg1;
- (long long)numberOfMoods;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)moodbarCell:(id)arg1 didReceivePlaybackInactiveEventFromPlaybackPublishController:(id)arg2 forPlaylistID:(id)arg3;
- (void)moodbarCell:(id)arg1 didReceivePlaybackActiveEventFromPlaybackPublishController:(id)arg2 forPlaylistID:(id)arg3;
- (void)lightweightCell:(id)arg1 removePlayerObservation:(id)arg2 forPlaybackIDMatcher:(id)arg3;
- (void)lightweightCell:(id)arg1 requestPlayerObservation:(id)arg2 forPlaybackIDMatcher:(id)arg3;
- (void)didEndDisplayingCell:(id)arg1;
- (void)willDisplayCell:(id)arg1;
- (long long)numberOfItemsInSection;
- (id)rendererAtIndex:(unsigned long long)arg1;
- (struct UIEdgeInsets)cellInsets;
- (id)initWithService:(id)arg1 parentResponder:(id)arg2 cellFactory:(id)arg3 sectionRenderer:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


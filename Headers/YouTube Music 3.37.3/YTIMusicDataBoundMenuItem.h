//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

#import "YTMMusicDataBoundApplyContainerEntityProtocol-Protocol.h"

@class NSString, YTIMusicDataBoundEndpointMold, YTIMusicEntityReference, YTIRenderer;

@interface YTIMusicDataBoundMenuItem : GPBMessage <YTMMusicDataBoundApplyContainerEntityProtocol>
{
}

+ (id)descriptor;
- (void)ytm_setAddToLibraryFeedbackEndpoint:(id)arg1 withFeedbackToken:(id)arg2;
- (void)ytm_setLikeEndpoint:(id)arg1 withVideoId:(id)arg2 likeStatus:(int)arg3;
- (void)ytm_createMusicLibraryEditMenuItemWithEntity:(id)arg1;
- (void)ytm_createFeedbackConditionalMenuItemWithEntity:(id)arg1;
- (void)ytm_createShareVideoMenuItemWithEntity:(id)arg1;
- (void)ytm_createAddToPlaylistMenuItemWithEntity:(id)arg1;
- (void)ytm_createLikeDislikeConditionalMenuItemWithEntity:(id)arg1;
- (void)ytm_createWatchPlaylistMenuItemWithEntity:(id)arg1;
- (void)ytm_createOfflinePlaylistMenuItemWithEntity:(id)arg1;
- (void)ytm_createOfflineVideoConditionalMenuItemWithEntity:(id)arg1;
- (void)ytm_createShareEntityMenuItemWithEntity:(id)arg1;
- (void)ytm_createSharePlaylistMenuItemWithEntity:(id)arg1;
- (void)ytm_createQueueAddMenuItemWithEntity:(id)arg1;
- (void)ytm_createWatchMenuItemWithEntity:(id)arg1;
- (void)ytm_createBrowseEndpointArtistWithEntity:(id)arg1;
- (void)ytm_createWatchEndpointRadioWithEntity:(id)arg1;
- (id)ytm_menuItemRenderer;
- (void)ytm_applyContainerEntityReference:(id)arg1 index:(unsigned long long)arg2 cache:(id)arg3;

// Remaining properties
@property(retain, nonatomic) YTIMusicEntityReference *containerEntityReference; // @dynamic containerEntityReference;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) YTIMusicDataBoundEndpointMold *endpointMold; // @dynamic endpointMold;
@property(retain, nonatomic) YTIMusicEntityReference *entityReference; // @dynamic entityReference;
@property(nonatomic) _Bool hasContainerEntityReference; // @dynamic hasContainerEntityReference;
@property(nonatomic) _Bool hasEndpointMold; // @dynamic hasEndpointMold;
@property(nonatomic) _Bool hasEntityReference; // @dynamic hasEntityReference;
@property(nonatomic) _Bool hasMenuItemRendererMold; // @dynamic hasMenuItemRendererMold;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) YTIRenderer *menuItemRendererMold; // @dynamic menuItemRendererMold;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCMapLoadingStateListener-Protocol.h"
#import "SCXRenderLayerDelegate-Protocol.h"

@class NSMutableArray, NSString, SCMapExploreItem, SCMapServerService, SCMapStatusStore, SCXBitmojiSpriteTextureBinder, SCXFloorSpriteTextureBinder, SCXRenderLayer, SCXRenderLayerOptions, SCXSpriteWidthInterpolatorProvider;
@protocol SCMapInstance, SCMapPeopleFriendsProvider, SCMapPersonLocationsProviding, SCXBitmojiAvatarGeneratorProtocol, SCXGameStateProvider;

@interface SCExploreMapView : UIView <SCMapLoadingStateListener, SCXRenderLayerDelegate>
{
    id <SCXBitmojiAvatarGeneratorProtocol> _bitmojiAvatarGenerator;
    id <SCXGameStateProvider> _mapGameStateProvider;
    UIView<SCMapInstance> *_mapInstanceView;
    id <SCMapPersonLocationsProviding> _mapPersonLocationsProvider;
    id <SCMapPeopleFriendsProvider> _mapPeopleFriendsProvider;
    SCMapServerService *_mapServerService;
    SCXRenderLayerOptions *_renderLayerOptions;
    SCMapStatusStore *_statusStore;
    SCXBitmojiSpriteTextureBinder *_bitmojiTextureBinder;
    NSMutableArray *_spritesOnTheMap;
    NSMutableArray *_pathsOnTheMap;
    NSMutableArray *_nonCollidedPoiIds;
    SCMapExploreItem *_exploreItem;
    SCXBitmojiSpriteTextureBinder *_bitmojiSpriteTextureBinder;
    SCXFloorSpriteTextureBinder *_floorSpriteTextureBinder;
    SCXRenderLayer *_renderLayer;
    SCXSpriteWidthInterpolatorProvider *_widthInterpolatorProvider;
}

+ (void)bindAttributes:(id)arg1;
@property(retain, nonatomic) SCXSpriteWidthInterpolatorProvider *widthInterpolatorProvider; // @synthesize widthInterpolatorProvider=_widthInterpolatorProvider;
@property(retain, nonatomic) SCXRenderLayer *renderLayer; // @synthesize renderLayer=_renderLayer;
@property(retain, nonatomic) SCXFloorSpriteTextureBinder *floorSpriteTextureBinder; // @synthesize floorSpriteTextureBinder=_floorSpriteTextureBinder;
@property(retain, nonatomic) SCXBitmojiSpriteTextureBinder *bitmojiSpriteTextureBinder; // @synthesize bitmojiSpriteTextureBinder=_bitmojiSpriteTextureBinder;
@property(readonly, nonatomic) SCMapStatusStore *statusStore; // @synthesize statusStore=_statusStore;
@property(readonly, copy, nonatomic) SCMapExploreItem *exploreItem; // @synthesize exploreItem=_exploreItem;
- (void).cxx_destruct;
- (void)mapLoadingStateDidFinishLoadingStyle:(id)arg1;
- (void)_cleanUpDisplayedItem;
- (void)_addNonCollidedPoiId:(id)arg1;
- (void)_addTravelPathToMap:(id)arg1;
- (void)_addSpriteToMap:(id)arg1;
- (void)_renderGroupedStatuses:(id)arg1 animated:(_Bool)arg2;
- (void)_renderSoloStatus:(id)arg1 animated:(_Bool)arg2;
- (void)_renderItem:(id)arg1 animated:(_Bool)arg2;
- (void)setExploreItem:(id)arg1 animated:(_Bool)arg2;
- (void)_forceRedrawStatus;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 bitmojiAvatarGenerator:(id)arg2 mapGameStateProvider:(id)arg3 mapInstanceProvider:(id)arg4 mapPersonLocationsProvider:(id)arg5 mapPeopleFriendsProvider:(id)arg6 mapServerService:(id)arg7 renderLayerOptions:(id)arg8 statusStore:(id)arg9;
- (id)initWithFrame:(struct CGRect)arg1 userSession:(id)arg2;
- (_Bool)composer_setStatusId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


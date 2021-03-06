//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSRenderTileProvider.h"

@interface GMSImageTileProvider : GMSRenderTileProvider
{
    struct reffed_ptr<gmscore::vector::ModelRendererValue<float>> _alpha;
    struct reffed_ptr<gmscore::vector::ModelRendererValue<bool>> _fadeIn;
    objc_metadata_hider_ptr_a1c2b231 _renderer;
    unsigned long long _layerID;
    _Bool _overlayMode;
    _Bool _overdrawProtected;
    unsigned int _priority;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) _Bool overdrawProtected; // @synthesize overdrawProtected=_overdrawProtected;
@property(nonatomic) unsigned int priority; // @synthesize priority=_priority;
@property(nonatomic) _Bool overlayMode; // @synthesize overlayMode=_overlayMode;
@property(nonatomic) _Bool fadeIn;
@property(nonatomic) float alpha;
- (void)willDestroyRenderer:(objc_metadata_hider_ptr_a1c2b231)arg1;
- (void)didCreateRenderer:(objc_metadata_hider_ptr_a1c2b231)arg1 entityResources:(id)arg2;
- (void)buildRenderTileFromModelTile:(id)arg1 tileCoords:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)initWithName:(id)arg1 tileService:(id)arg2 tileCoordsGenerator:(id)arg3 requestCoordinator:(id)arg4 resourceManager:(id)arg5 contributesLabels:(_Bool)arg6;

@end


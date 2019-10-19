//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCXRenderLayerOptions : NSObject
{
    _Bool _shouldMipmapTextures;
    _Bool _showEmojiPOIs;
    _Bool _drawThreeDimensionalPois;
    _Bool _showDiscoverPois;
    _Bool _enableWeather;
    _Bool _enableSlingshotGesture;
    _Bool _disableHeat;
    _Bool _disableTapToPlay;
    _Bool _showPoiOnSpriteCollision;
    _Bool _collapseCollidingPois;
    NSString *_tileSetFlavor;
    NSString *_epochOverride;
}

+ (id)defaultOptionsWithExperimentManager:(id)arg1;
@property _Bool collapseCollidingPois; // @synthesize collapseCollidingPois=_collapseCollidingPois;
@property _Bool showPoiOnSpriteCollision; // @synthesize showPoiOnSpriteCollision=_showPoiOnSpriteCollision;
@property _Bool disableTapToPlay; // @synthesize disableTapToPlay=_disableTapToPlay;
@property _Bool disableHeat; // @synthesize disableHeat=_disableHeat;
@property _Bool enableSlingshotGesture; // @synthesize enableSlingshotGesture=_enableSlingshotGesture;
@property _Bool enableWeather; // @synthesize enableWeather=_enableWeather;
@property _Bool showDiscoverPois; // @synthesize showDiscoverPois=_showDiscoverPois;
@property _Bool drawThreeDimensionalPois; // @synthesize drawThreeDimensionalPois=_drawThreeDimensionalPois;
@property _Bool showEmojiPOIs; // @synthesize showEmojiPOIs=_showEmojiPOIs;
@property _Bool shouldMipmapTextures; // @synthesize shouldMipmapTextures=_shouldMipmapTextures;
@property(retain) NSString *epochOverride; // @synthesize epochOverride=_epochOverride;
@property(retain) NSString *tileSetFlavor; // @synthesize tileSetFlavor=_tileSetFlavor;
- (void).cxx_destruct;

@end


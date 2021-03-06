//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGGLKRenderer, IGGLKTexture2D;

@interface IGPhotoBoothVHSRenderer : NSObject
{
    IGGLKRenderer *_programRenderer;
    CDStruct_1475ac9d _textureRect;
    CDStruct_1475ac9d _glitchARect;
    CDStruct_1475ac9d _glitchBRect;
    _Bool _attributesNeedUpdate;
    _Bool _exposureNeedsUpdate;
    _Bool _currentTimeNeedsUpdate;
    _Bool _offsetYNeedsUpdate;
    _Bool _offsetXNeedsUpdate;
    _Bool _lutIndexNeedsUpdate;
    _Bool _glitchOpacityNeedsUpdate;
    _Bool _noiseOpacityNeedsUpdate;
    _Bool _frontCamNeedsUpdate;
    int _frontCam;
    float _lutIndex;
    float _noiseOpacity;
    float _glitchOpacity;
    float _exposure;
    float _offsetX;
    float _offsetY;
    IGGLKTexture2D *_texture;
    double _currentTime;
}

- (void).cxx_destruct;
@property(nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
@property(retain, nonatomic) IGGLKTexture2D *texture; // @synthesize texture=_texture;
@property(nonatomic) float offsetY; // @synthesize offsetY=_offsetY;
@property(nonatomic) float offsetX; // @synthesize offsetX=_offsetX;
@property(nonatomic) float exposure; // @synthesize exposure=_exposure;
@property(nonatomic) float glitchOpacity; // @synthesize glitchOpacity=_glitchOpacity;
@property(nonatomic) float noiseOpacity; // @synthesize noiseOpacity=_noiseOpacity;
@property(nonatomic) float lutIndex; // @synthesize lutIndex=_lutIndex;
@property(nonatomic) int frontCam; // @synthesize frontCam=_frontCam;
- (void)_updateGlitchOpacity;
- (void)_updateNoiseOpacity;
- (void)_updateOffsetY;
- (void)_updateFrontCam;
- (void)_updateOffsetX;
- (void)_updateExposure;
- (void)_updateLutIndex;
- (void)_updateCurrentTime;
- (id)_textureCoordinateAttributeWithPoint:(struct CGPoint)arg1;
- (id)_positionAttributeWithPoint:(struct CGPoint)arg1;
- (void)_updateAttributes;
- (void)drawInContext:(id)arg1;
- (id)initWithSession:(id)arg1;

@end


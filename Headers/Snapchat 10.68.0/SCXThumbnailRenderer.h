//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCXThumbnailRenderer : NSObject
{
    unsigned int _program;
    unsigned int _vertexShader;
    unsigned int _fragShader;
    unsigned int _vbo;
    unsigned int _ebo;
    int _positionAttributeLocation;
    int _scaleUniformLocation;
    int _translateUniformLocation;
    int _alphaUniformLocation;
    int _thumbnailTextureLocation;
    int _borderScaleUniformLocation;
    int _unitBorderWidthUniformLocation;
    int _labelCutCircleStretchUniformLocation;
    int _labelCutCircleTranslateUniformLocation;
    int _circleRadiusUniformLocation;
    int _labelTextureLocation;
    int _shouldDrawLabelUniformLocation;
    int _shouldDrawThumbnailUniformLocation;
    int _loadingRadarRadiansUniformLocation;
    int _loadingSpinnerAlphaUniformLocation;
    int _shouldDrawBaseShadowUniformLocation;
    int _isDirectRenderUniformLocation;
    _Bool _readyToRender;
}

- (void)complete;
- (void)renderThumbs:(id)arg1 context:(id)arg2;
- (void)_renderViewState:(id)arg1 mapViewport:(id)arg2 view:(id)arg3 maxRenderWidth:(float)arg4 layerOpacity:(float)arg5;
- (void)_renderLabel:(id)arg1 mapViewport:(id)arg2 view:(id)arg3 withPOIWidth:(float)arg4 atPoint:(struct CGPoint)arg5 layerOpacity:(float)arg6;
- (void)_prepareRender:(id)arg1;
- (void)prepare;
- (id)init;

@end


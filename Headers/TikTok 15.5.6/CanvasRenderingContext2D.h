//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface CanvasRenderingContext2D : NSObject
{
    struct CGContext *_context;
    struct CGPath *_path;
    struct CGAffineTransform _originMatrix;
    double _scale;
    NSString *_fontName;
    double _fontSize;
    NSString *_direction;
    struct CGColor *_fillStyle;
    struct CGColor *_strokeStyle;
    double _shadowBlur;
    double _shadowOffsetX;
    double _shadowOffsetY;
    struct CGColor *_shadowColor;
    CDStruct_3b9f1d24 _lineDash;
    double _lineDashOffset;
    long long _textAlign;
    NSNumber *_textBaseline;
    double _globalAlpha;
    NSString *_globalCompositeOperation;
}

- (void).cxx_destruct;
- (void)restore;
- (void)save;
- (void)putImageData;
- (void)getImageData;
- (void)createImageData;
- (void)drawImage;
- (void)resetTransform;
- (void)setTransform:(double)arg1 b:(double)arg2 c:(double)arg3 d:(double)arg4 e:(double)arg5 f:(double)arg6;
- (void)transform:(double)arg1 b:(double)arg2 c:(double)arg3 d:(double)arg4 e:(double)arg5 f:(double)arg6;
- (void)translate:(double)arg1 y:(double)arg2;
- (void)scale:(double)arg1 y:(double)arg2;
- (void)rotate:(double)arg1;
- (void)isPointInStroke;
- (void)isPointInPath;
- (void)clip:(id)arg1;
- (void)clip;
- (void)scrollPathIntoView;
- (void)drawFocusIfNeeded;
- (void)stroke;
- (void)fill;
- (void)rect:(double)arg1 y:(double)arg2 width:(double)arg3 height:(double)arg4;
- (void)arcTo:(double)arg1 y1:(double)arg2 x2:(double)arg3 y2:(double)arg4 radius:(double)arg5;
- (void)arc:(double)arg1 y:(double)arg2 radius:(double)arg3 startAangle:(double)arg4 endAngle:(double)arg5;
- (void)arc:(double)arg1 y:(double)arg2 radius:(double)arg3 startAangle:(double)arg4 endAngle:(double)arg5 anticlockwise:(_Bool)arg6;
- (void)quadraticCurveTo:(double)arg1 cpy:(double)arg2 x:(double)arg3 y:(double)arg4;
- (void)bezierCurveTo:(double)arg1 cp1y:(double)arg2 cp2x:(double)arg3 cp2y:(double)arg4 x:(double)arg5 y:(double)arg6;
- (void)lineTo:(double)arg1 y:(double)arg2;
- (void)moveTo:(double)arg1 y:(double)arg2;
- (void)closePath;
- (void)beginPath;
- (void)setShadowColor:(id)arg1;
- (void)setShadowOffsetY:(double)arg1;
- (void)setShadowOffsetX:(double)arg1;
- (void)setShadowBlur:(double)arg1;
- (void)setShadow;
- (void)createPattern;
- (void)createRadialGradient:(double)arg1 y0:(double)arg2 r0:(double)arg3 x1:(double)arg4 y1:(double)arg5 r1:(double)arg6;
- (void)createLinearGradient:(double)arg1 y0:(double)arg2 x1:(double)arg3 y1:(double)arg4;
- (void)setLineDashOffset:(double)arg1;
- (void)setMiterLimit:(double)arg1;
- (void)setLineJoin:(id)arg1;
- (void)setLineDash:(id)arg1;
- (CDStruct_3b9f1d24)getLineDash;
- (void)setLineCap:(id)arg1;
- (void)setLineWidth:(double)arg1;
- (void)setStrokeStyle:(id)arg1;
- (void)setFillStyle:(id)arg1;
- (void)setGlobalAlpha:(double)arg1;
- (struct CGSize)measureText:(id)arg1;
- (void)strokeText:(id)arg1 x:(double)arg2 y:(double)arg3;
- (void)fillText:(id)arg1 x:(double)arg2 y:(double)arg3;
- (void)drawText:(id)arg1 color:(struct CGColor *)arg2 x:(double)arg3 y:(double)arg4;
- (void)setTextBaseline:(id)arg1;
- (double)textVerticalOffset:(id)arg1 textBaseLine:(id)arg2;
- (double)textHorizontalOffset:(id)arg1 textAlign:(long long)arg2;
- (void)setTextAlign:(id)arg1;
- (void)setFont:(id)arg1;
- (void)strokeRect:(double)arg1 y:(double)arg2 width:(double)arg3 height:(double)arg4;
- (void)fillRect:(double)arg1 y:(double)arg2 width:(double)arg3 height:(double)arg4;
- (void)clearRect:(double)arg1 y:(double)arg2 width:(double)arg3 height:(double)arg4;
- (void)dealloc;
- (void)setContext:(struct CGContext *)arg1;
- (void)initOrResetProperty;
- (id)init;

@end


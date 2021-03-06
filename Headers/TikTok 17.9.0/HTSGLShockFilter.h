//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSGLFilter.h"

@class NSArray;

@interface HTSGLShockFilter : HTSGLFilter
{
    long long _count;
    NSArray *_rotates;
    double _rotate;
    double _texelWidth;
    double _texelHeight;
}

@property(nonatomic) double texelHeight; // @synthesize texelHeight=_texelHeight;
@property(nonatomic) double texelWidth; // @synthesize texelWidth=_texelWidth;
@property(nonatomic) double rotate; // @synthesize rotate=_rotate;
@property(retain, nonatomic) NSArray *rotates; // @synthesize rotates=_rotates;
- (void).cxx_destruct;
- (void)uploadPojectMat;
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2;
- (void)setupFilterForSize:(struct CGSize)arg1;
- (id)init;
- (void)dealloc;

@end


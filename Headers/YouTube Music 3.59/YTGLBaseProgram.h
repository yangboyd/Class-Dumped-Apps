//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTGLProgram.h"

@interface YTGLBaseProgram : YTGLProgram
{
    int _positionAttribute;
    int _uniformPositionTransformMatrix;
    int _uniformOpacity;
}

- (void)afterDraw;
- (void)beforeDraw;
- (void)setMesh:(id)arg1;
- (void)setUniformOpacity:(float)arg1;
- (void)setUniformPositionTransform:(float *)arg1;
- (id)initWithVertexShaderSource:(id)arg1 fragmentShaderSource:(id)arg2;

@end


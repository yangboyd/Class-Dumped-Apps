//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCXRenderer-Protocol.h"

@class NSString;

@interface SCXShadedRadiusRenderer : NSObject <SCXRenderer>
{
    unsigned int _program;
    unsigned int _vertexShader;
    unsigned int _fragShader;
    unsigned int _vbo;
    unsigned int _ebo;
    int _scaleUniformLocation;
    int _translateUniformLocation;
    int _positionAttributeLocation;
    int _alphaUniformLocation;
    int _innerCircleRadiusUniformLocation;
    int _outerCircleRadiusUniformLocation;
    int _shadowRadiusUniformLocation;
    _Bool _readyToRender;
}

- (void)complete;
- (void)render:(id)arg1;
- (void)_renderCircle:(id)arg1 mapViewport:(id)arg2 view:(id)arg3;
- (void)prepare;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


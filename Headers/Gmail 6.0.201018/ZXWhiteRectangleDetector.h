//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ZXBitMatrix;

@interface ZXWhiteRectangleDetector : NSObject
{
    int _height;
    int _width;
    int _leftInit;
    int _rightInit;
    int _downInit;
    int _upInit;
    ZXBitMatrix *_image;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) int upInit; // @synthesize upInit=_upInit;
@property(readonly, nonatomic) int downInit; // @synthesize downInit=_downInit;
@property(readonly, nonatomic) int rightInit; // @synthesize rightInit=_rightInit;
@property(readonly, nonatomic) int leftInit; // @synthesize leftInit=_leftInit;
@property(readonly, nonatomic) int width; // @synthesize width=_width;
@property(readonly, nonatomic) int height; // @synthesize height=_height;
@property(readonly, nonatomic) ZXBitMatrix *image; // @synthesize image=_image;
- (_Bool)containsBlackPoint:(int)arg1 b:(int)arg2 fixed:(int)arg3 horizontal:(_Bool)arg4;
- (id)centerEdges:(id)arg1 z:(id)arg2 x:(id)arg3 t:(id)arg4;
- (id)blackPointOnSegment:(float)arg1 aY:(float)arg2 bX:(float)arg3 bY:(float)arg4;
- (id)detectWithError:(id *)arg1;
- (id)initWithImage:(id)arg1 initSize:(int)arg2 x:(int)arg3 y:(int)arg4 error:(id *)arg5;
- (id)initWithImage:(id)arg1 error:(id *)arg2;

@end


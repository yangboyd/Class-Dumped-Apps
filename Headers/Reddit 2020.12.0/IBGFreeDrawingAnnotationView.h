//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Instabug/IBGAnnotationView.h>

#import <Instabug/IBGAnnotationDrawable-Protocol.h>

@class NSMutableArray, NSString, UIBezierPath, UIColor;

@interface IBGFreeDrawingAnnotationView : IBGAnnotationView <IBGAnnotationDrawable>
{
    struct CGPoint minPoint;
    struct CGPoint maxPoint;
    _Bool _isTouched;
    _Bool _isDetectingShape;
    _Bool _needsFrameMapping;
    NSMutableArray *_points;
    UIBezierPath *_path;
    double _freeDrawingLineWidth;
    UIColor *_annotatingColor;
    struct CGPoint _lastPoint;
}

@property(nonatomic) _Bool needsFrameMapping; // @synthesize needsFrameMapping=_needsFrameMapping;
@property(retain, nonatomic) UIColor *annotatingColor; // @synthesize annotatingColor=_annotatingColor;
@property(nonatomic) double freeDrawingLineWidth; // @synthesize freeDrawingLineWidth=_freeDrawingLineWidth;
@property(nonatomic) _Bool isDetectingShape; // @synthesize isDetectingShape=_isDetectingShape;
@property(retain, nonatomic) UIBezierPath *path; // @synthesize path=_path;
@property(nonatomic) struct CGPoint lastPoint; // @synthesize lastPoint=_lastPoint;
@property(readonly, nonatomic) _Bool isTouched; // @synthesize isTouched=_isTouched;
@property(retain, nonatomic) NSMutableArray *points; // @synthesize points=_points;
- (void).cxx_destruct;
- (_Bool)containsPoint:(struct CGPoint)arg1;
- (id)drawingImage;
- (void)saveMaxPoint:(struct CGPoint)arg1;
- (void)saveMinPoint:(struct CGPoint)arg1;
- (void)pathMapping;
- (void)mapPathWithScale:(double)arg1;
- (_Bool)isPathContainsPoint:(struct CGPoint)arg1;
- (id)quadCurvedPathWithPoints:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)handlePanGesture:(id)arg1;
- (void)touches:(struct CGPoint)arg1 withTouchState:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1 zPosition:(double)arg2 originator:(id)arg3 annotatingColor:(id)arg4 angle:(double)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


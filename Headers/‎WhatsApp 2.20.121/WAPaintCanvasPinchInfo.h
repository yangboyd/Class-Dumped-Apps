//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WAPaintBrushRenderer, WAPaintCanvasTextItem, WAPaintPositionSample;

@interface WAPaintCanvasPinchInfo : NSObject
{
    _Bool _flaggedForDelete;
    _Bool _verticallyConstrained;
    _Bool _horizontallyConstrained;
    _Bool _angleConstrained;
    unsigned int _index;
    long long _brushType;
    // Error parsing type: , name: _initialP0
    // Error parsing type: , name: _initialP1
    // Error parsing type: , name: _previousP0
    // Error parsing type: , name: _previousP1
    WAPaintPositionSample *_initialSample;
    WAPaintPositionSample *_baselineSample;
    WAPaintPositionSample *_currentSample;
    WAPaintPositionSample *_previousSample;
    double _previousTimestamp;
    WAPaintBrushRenderer *_renderer;
    WAPaintCanvasTextItem *_textItem;
    WAPaintCanvasTextItem *_initialTextItem;
    // Error parsing type: , name: _horizontalConstraintInitialTouchOffset
    // Error parsing type: , name: _verticalConstraintInitialTouchOffset
    // Error parsing type: , name: _accumulatedPrimaryTouchOffset
    // Error parsing type: , name: _accumulatedSecondaryTouchOffset
    double _angleConstraintInitialOffset;
    double _accumulatedAngleOffset;
}

- (void).cxx_destruct;
@property(nonatomic) double accumulatedAngleOffset; // @synthesize accumulatedAngleOffset=_accumulatedAngleOffset;
@property(nonatomic) double angleConstraintInitialOffset; // @synthesize angleConstraintInitialOffset=_angleConstraintInitialOffset;
@property(nonatomic) _Bool angleConstrained; // @synthesize angleConstrained=_angleConstrained;
// Error parsing type for property accumulatedSecondaryTouchOffset:
// Property attributes: T,N,V_accumulatedSecondaryTouchOffset

// Error parsing type for property accumulatedPrimaryTouchOffset:
// Property attributes: T,N,V_accumulatedPrimaryTouchOffset

// Error parsing type for property verticalConstraintInitialTouchOffset:
// Property attributes: T,N,V_verticalConstraintInitialTouchOffset

// Error parsing type for property horizontalConstraintInitialTouchOffset:
// Property attributes: T,N,V_horizontalConstraintInitialTouchOffset

@property(nonatomic) _Bool horizontallyConstrained; // @synthesize horizontallyConstrained=_horizontallyConstrained;
@property(nonatomic) _Bool verticallyConstrained; // @synthesize verticallyConstrained=_verticallyConstrained;
@property(copy, nonatomic) WAPaintCanvasTextItem *initialTextItem; // @synthesize initialTextItem=_initialTextItem;
@property(retain, nonatomic) WAPaintCanvasTextItem *textItem; // @synthesize textItem=_textItem;
@property(nonatomic) _Bool flaggedForDelete; // @synthesize flaggedForDelete=_flaggedForDelete;
@property(nonatomic) unsigned int index; // @synthesize index=_index;
@property(retain, nonatomic) WAPaintBrushRenderer *renderer; // @synthesize renderer=_renderer;
@property(nonatomic) double previousTimestamp; // @synthesize previousTimestamp=_previousTimestamp;
@property(copy, nonatomic) WAPaintPositionSample *previousSample; // @synthesize previousSample=_previousSample;
@property(copy, nonatomic) WAPaintPositionSample *currentSample; // @synthesize currentSample=_currentSample;
@property(copy, nonatomic) WAPaintPositionSample *baselineSample; // @synthesize baselineSample=_baselineSample;
@property(copy, nonatomic) WAPaintPositionSample *initialSample; // @synthesize initialSample=_initialSample;
// Error parsing type for property previousP1:
// Property attributes: T,N,V_previousP1

// Error parsing type for property previousP0:
// Property attributes: T,N,V_previousP0

// Error parsing type for property initialP1:
// Property attributes: T,N,V_initialP1

// Error parsing type for property initialP0:
// Property attributes: T,N,V_initialP0

@property(nonatomic) long long brushType; // @synthesize brushType=_brushType;
- (void)resetBaseline;
@property(readonly, nonatomic) _Bool allowsAngleConstraint;
- (id)init;

@end


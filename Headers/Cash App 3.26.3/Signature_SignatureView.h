//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface Signature_SignatureView : UIView
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: strokeSimplifierFactory
    // Error parsing type: , name: isEditable
    // Error parsing type: , name: strokeWidth
    // Error parsing type: , name: dotDiameter
    // Error parsing type: , name: strokeColor
    // Error parsing type: , name: hitTargetInsets
    // Error parsing type: , name: displayEdgeInsets
    // Error parsing type: , name: displayEdgeInsetsCornerRadius
    // Error parsing type: , name: completedStrokesLayer
    // Error parsing type: , name: completedStrokeLayerInfo
    // Error parsing type: , name: currentStrokeLayer
    // Error parsing type: , name: currentStrokeLayerInfo
    // Error parsing type: , name: signatureModelBoundsOverride
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long accessibilityTraits;
@property(nonatomic) _Bool isAccessibilityElement;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(nonatomic) _Bool multipleTouchEnabled;
- (_Bool)isMultipleTouchEnabled;
@property(nonatomic) struct CGRect bounds;
@property(nonatomic) struct CGRect frame;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class NSArray, NSString, SCCaptionGestureManager;
@protocol SCStylableCaptionDelegate;

@interface SCStylableCaption : UILabel
{
    double _bufferScaleWidth;
    double _bufferScaleHeight;
    _Bool _useTouchCenterAsPivot;
    _Bool _addBufferToSize;
    id <SCStylableCaptionDelegate> _delegate;
    SCCaptionGestureManager *_gestureManager;
    double _scale;
    double _rotation;
    NSArray *_shadows;
    NSString *_fontName;
    NSString *_fontUrl;
    struct CGPoint _origin;
    struct CGAffineTransform _rotationTransform;
    struct CGAffineTransform _scaleTransform;
}

@property(retain, nonatomic) NSString *fontUrl; // @synthesize fontUrl=_fontUrl;
@property(retain, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
@property(nonatomic) _Bool addBufferToSize; // @synthesize addBufferToSize=_addBufferToSize;
@property(retain, nonatomic) NSArray *shadows; // @synthesize shadows=_shadows;
@property(nonatomic, getter=isUseTouchCenterAsPivot) _Bool useTouchCenterAsPivot; // @synthesize useTouchCenterAsPivot=_useTouchCenterAsPivot;
@property(nonatomic) struct CGAffineTransform scaleTransform; // @synthesize scaleTransform=_scaleTransform;
@property(nonatomic) struct CGAffineTransform rotationTransform; // @synthesize rotationTransform=_rotationTransform;
@property(nonatomic) double rotation; // @synthesize rotation=_rotation;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) struct CGPoint origin; // @synthesize origin=_origin;
@property(retain, nonatomic) SCCaptionGestureManager *gestureManager; // @synthesize gestureManager=_gestureManager;
@property(nonatomic) __weak id <SCStylableCaptionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)applyBlockToShadowLayers:(CDUnknownBlockType)arg1;
- (void)_resetMultipleShadows;
- (id)createCaptionLayer;
- (void)_createShadowLayerWithShadow:(id)arg1;
- (void)positionCaptionAtOrigin:(struct CGPoint)arg1;
- (void)resizeCaptionWithFontSize:(double)arg1;
- (void)resizeCaption;
- (void)rotating:(id)arg1;
- (void)pinching:(id)arg1;
- (void)panning:(id)arg1;
- (void)tapped:(id)arg1;
@property(nonatomic) struct CGPoint translation;
- (void)editingTransitionWithScale:(double)arg1 andRotation:(double)arg2;
@property(readonly, nonatomic) double maximumScale;
@property(readonly, nonatomic) double minimumScale;
- (void)setHidden:(_Bool)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end


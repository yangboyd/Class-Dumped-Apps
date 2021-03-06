//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/UIGestureRecognizerDelegate-Protocol.h>

@class NSArray, NSHashTable, NSMutableSet, NSString, TOKImmediatePanGestureRecognizer, UIPinchGestureRecognizer, UIRotationGestureRecognizer, UIView;
@protocol TOKOverlayGestureManagerDelegate, TOKOverlayGestureManagerManagedView;

@interface TOKOverlayGestureManager : NSObject <UIGestureRecognizerDelegate>
{
    TOKImmediatePanGestureRecognizer *_dragPanGestureRecognizer;
    UIPinchGestureRecognizer *_transformPinchGestureRecognizer;
    UIRotationGestureRecognizer *_transformRotationGestureRecognizer;
    NSMutableSet *_activeTransformGestureRecognizers;
    struct CGPoint _initialDragDelta;
    struct CGPoint _initialDragCenter;
    struct CGPoint _initialPinchRotationLocation;
    struct CGAffineTransform _initialPinchRotationTransform;
    double _lastTouchTime;
    _Bool _enabled;
    _Bool _rotationEnabled;
    id <TOKOverlayGestureManagerDelegate> _delegate;
    NSHashTable *_views;
    UIView<TOKOverlayGestureManagerManagedView> *_activeView;
    NSArray *_snapLines;
}

+ (void)resetGestureRecognizer:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *snapLines; // @synthesize snapLines=_snapLines;
@property(readonly, nonatomic) UIView<TOKOverlayGestureManagerManagedView> *activeView; // @synthesize activeView=_activeView;
@property(nonatomic) _Bool rotationEnabled; // @synthesize rotationEnabled=_rotationEnabled;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) NSHashTable *views; // @synthesize views=_views;
@property(nonatomic) __weak id <TOKOverlayGestureManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGRect)boundingBoxForView:(id)arg1 gesturePosition:(struct CGPoint)arg2 gestureTransform:(struct CGAffineTransform)arg3;
- (double)currentValueForView:(id)arg1 snapLine:(id)arg2 gesturePosition:(struct CGPoint)arg3 gestureTransform:(struct CGAffineTransform)arg4;
- (struct CGPoint)snapView:(id)arg1 forGesturePosition:(struct CGPoint)arg2 toLine:(id)arg3;
- (_Bool)shouldSnapStickerView:(id)arg1 toLine:(id)arg2 gesturePosition:(struct CGPoint)arg3 gestureTransform:(struct CGAffineTransform)arg4 rotationVelocity:(double)arg5;
- (struct CGAffineTransform)rotationSnappingIfNeededForTransform:(struct CGAffineTransform)arg1 rotationVelocity:(double)arg2;
- (struct CGPoint)positionalSnappingIfNeededForPosition:(struct CGPoint)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)handleTransformPinchRotationGesture:(id)arg1;
- (void)handleDragPanGesture:(id)arg1;
- (void)handleTapGesture:(id)arg1;
- (id)viewNearestGesture:(id)arg1;
- (void)gestureRecognizerDidEnd:(id)arg1;
- (void)gestureRecognizerDidBegin:(id)arg1;
- (void)maybeSetActiveView:(id)arg1;
- (void)setUpGestureRecognizers;
- (void)removeView:(id)arg1;
- (void)addView:(id)arg1;
- (void)removeGestures;
- (void)attachGesturesToView:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


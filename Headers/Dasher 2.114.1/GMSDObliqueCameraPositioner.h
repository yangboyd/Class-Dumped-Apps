//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NavigationFramework/CameraPositioner-Protocol.h>

@class NSString;

@interface GMSDObliqueCameraPositioner : NSObject <CameraPositioner>
{
    int _prevMode;
    double _curSpeed;
    struct GMSDObliqueCameraSettings _normalSettings;
    struct GMSDObliqueCameraSettings _approachSettings;
    struct GMSDObliqueCameraSettings _eyeLevelSettings;
    struct GMSDObliqueCameraSettings _farSettings;
    struct GMSDObliqueCameraSettings _inspectSettings;
    int _chevronMargin;
}

- (float)lookAheadForBottomMargin:(double)arg1 mapHeight:(double)arg2 navigating:(_Bool)arg3 yOffset:(double)arg4;
- (void)setPrevMode:(int)arg1;
- (int)viewModeForPosition:(const struct CameraPosition *)arg1 velocity:(double)arg2 stepLocation:(struct GMSPoint2D)arg3 viewport:(struct CGRect)arg4 viewCamera:(const reffed_ptr_329922e5 *)arg5;
- (_Bool)shouldUseFarModeForPosition:(const struct CameraPosition *)arg1 speed:(double)arg2 stepLocation:(struct GMSPoint2D)arg3 viewport:(struct CGRect)arg4 viewCamera:(const reffed_ptr_329922e5 *)arg5;
- (_Bool)shouldUseApproachModeForPosition:(const struct CameraPosition *)arg1 stepLocation:(struct GMSPoint2D)arg2 viewport:(struct CGRect)arg3 viewCamera:(const reffed_ptr_329922e5 *)arg4;
- (double)viewingAngleForZoom:(float)arg1;
- (struct CameraPosition)cameraPositionForViewMode:(int)arg1 target:(struct Point2D)arg2 bearingInRadians:(double)arg3 lookAhead:(float)arg4;
- (struct CameraPosition)updatePosition:(const struct CameraPosition *)arg1 forInspectStep:(id)arg2 inViewport:(struct CGRect)arg3 camera:(const reffed_ptr_329922e5 *)arg4 eyeLevel:(_Bool)arg5;
- (struct CameraPosition)updatePosition:(const struct CameraPosition *)arg1 forFollowLocation:(id)arg2 chevronLocation:(id)arg3 step:(id)arg4 zoomOverride:(float)arg5 bearingOverride:(double)arg6 useHeading:(_Bool)arg7 bottomMargin:(double)arg8 mapMode:(struct GMSMapCameraMode)arg9 navGuidanceState:(id)arg10 waypoints:(id)arg11 viewport:(struct CGRect)arg12 viewCamera:(const reffed_ptr_329922e5 *)arg13;
@property(readonly, nonatomic) struct GMSDObliqueCameraSettings inspectStepSettings;
@property(readonly, nonatomic) _Bool wantsCameraSmoothingAndZoomTransitions;
- (id)initWithChevronMargin:(int)arg1 normalCameraSettings:(struct GMSDObliqueCameraSettings)arg2 approachCameraSettings:(struct GMSDObliqueCameraSettings)arg3 farCameraSettings:(struct GMSDObliqueCameraSettings)arg4 eyeLevelCameraSettings:(struct GMSDObliqueCameraSettings)arg5 inspectCameraSettings:(struct GMSDObliqueCameraSettings)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


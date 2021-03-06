//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NavigationFramework/NSObject-Protocol.h>

@class GMSDLocation, GMSDStep, GMSNavGuidanceState, NSArray;

@protocol CameraPositioner <NSObject>
@property(readonly, nonatomic) _Bool wantsCameraSmoothingAndZoomTransitions;
- (struct CameraPosition)updatePosition:(const struct CameraPosition *)arg1 forInspectStep:(GMSDStep *)arg2 inViewport:(struct CGRect)arg3 camera:(const reffed_ptr_329922e5 *)arg4 eyeLevel:(_Bool)arg5;
- (struct CameraPosition)updatePosition:(const struct CameraPosition *)arg1 forFollowLocation:(GMSDLocation *)arg2 chevronLocation:(GMSDLocation *)arg3 step:(GMSDStep *)arg4 zoomOverride:(float)arg5 bearingOverride:(double)arg6 useHeading:(_Bool)arg7 bottomMargin:(double)arg8 mapMode:(struct GMSMapCameraMode)arg9 navGuidanceState:(GMSNavGuidanceState *)arg10 waypoints:(NSArray *)arg11 viewport:(struct CGRect)arg12 viewCamera:(const reffed_ptr_329922e5 *)arg13;
@end


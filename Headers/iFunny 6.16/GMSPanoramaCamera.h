//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GMSPanoramaCamera : NSObject
{
    struct CameraPosition {
        float max_fov_;
        float vertical_fov_;
        float pitch_;
        float yaw_;
        float zoom_factor_;
    } _camera;
}

+ (id)cameraWithHeading:(double)arg1 pitch:(double)arg2 zoom:(float)arg3 FOV:(double)arg4;
+ (id)cameraWithOrientation:(CDStruct_34734122)arg1 zoom:(float)arg2;
+ (id)cameraWithHeading:(double)arg1 pitch:(double)arg2 zoom:(float)arg3;
+ (id)cameraWithOrientation:(CDStruct_34734122)arg1 zoom:(float)arg2 FOV:(double)arg3;
- (id).cxx_construct;
- (id)cameraWithUpdate:(id)arg1;
@property(nonatomic) struct CameraPosition camera;
- (id)initWithCamera:(const struct CameraPosition *)arg1;
@property(readonly, nonatomic) float zoom;
@property(readonly, nonatomic) CDStruct_34734122 orientation;
@property(readonly, nonatomic) double FOV;
- (id)initWithOrientation:(CDStruct_34734122)arg1 zoom:(float)arg2 FOV:(double)arg3;
- (id)init;

@end


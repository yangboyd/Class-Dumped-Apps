//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface A9VSSYRCameraModeMetricsLogger : NSObject
{
}

+ (id)sharedLogger;
- (void)logSYRCameraModeYourRoomsIconClickedWithIngressType:(id)arg1 deviceOrientation:(id)arg2;
- (void)logSYRCameraModeYourRoomsIconDisplayedWithIngressType:(id)arg1 deviceOrientation:(id)arg2;
- (void)logSYRCameraModeNetworkErrorWithIngressType:(id)arg1 deviceOrientation:(id)arg2;
- (void)logSYRCameraModeFailedToLoadRoomsWithIngressType:(id)arg1 deviceOrientation:(id)arg2;
- (void)logSYRCameraModeNoSavedRoomsWithIngressType:(id)arg1 deviceOrientation:(id)arg2;
- (void)logSYRCameraModeAllRoomsDeletedWithIngressType:(id)arg1 deviceOrientation:(id)arg2;
- (void)logSYRCameraModeRoomSelectedWithPositionID:(id)arg1 ingressType:(id)arg2 deviceOrientation:(id)arg3;
- (void)logSYRCameraModeFetchRoomsTimerWithEntityCount:(id)arg1;
- (void)logSYRCameraModeYourRoomsWithIngressType:(id)arg1 deviceOrientation:(id)arg2;

@end


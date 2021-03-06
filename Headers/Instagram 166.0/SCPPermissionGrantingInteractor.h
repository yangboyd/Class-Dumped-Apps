//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SCPPermissionsHandling;

@interface SCPPermissionGrantingInteractor : NSObject
{
    id <SCPPermissionsHandling> _permissionsHandler;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SCPPermissionsHandling> permissionsHandler; // @synthesize permissionsHandler=_permissionsHandler;
- (void)requestCameraPermissions:(CDUnknownBlockType)arg1;
- (_Bool)cameraPermissionWasDenied;
- (_Bool)requiresCameraPermission;
- (id)initWithPermissionsHandler:(id)arg1;

@end


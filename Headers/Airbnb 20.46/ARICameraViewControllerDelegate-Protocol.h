//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ARICameraViewController, NSData, NSString;

@protocol ARICameraViewControllerDelegate <NSObject>
- (void)cameraViewControllerDidFinishWithNoPermission:(ARICameraViewController *)arg1;
- (void)cameraViewController:(ARICameraViewController *)arg1 didCancelWithType:(long long)arg2;
- (void)cameraViewController:(ARICameraViewController *)arg1 didTakePhotoWithData:(NSData *)arg2 type:(long long)arg3 url:(NSString *)arg4 useAlbum:(_Bool)arg5;
@end


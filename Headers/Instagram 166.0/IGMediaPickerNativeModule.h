//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGCaptureControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGMediaLibraryViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/NativeIGMediaPickerReactModuleSpec-Protocol.h>
#import <InstagramAppCoreFramework/RCTIGUserSessionModule-Protocol.h>

@class IGUserSession, NSString, RCTBridge, UIViewController;
@protocol OS_dispatch_queue, RCTTurboModuleRegistry;

@interface IGMediaPickerNativeModule : NSObject <NativeIGMediaPickerReactModuleSpec, IGCaptureControllerDelegate, IGMediaLibraryViewControllerDelegate, RCTIGUserSessionModule>
{
    UIViewController *_rootViewController;
    RCTBridge *_bridge;
    IGUserSession *_userSession;
}

+ (const struct RCTMethodInfo *)__rct_export__54376;
+ (void)load;
+ (id)moduleName;
- (void).cxx_destruct;
@property(nonatomic) __weak IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) __weak RCTBridge *bridge; // @synthesize bridge=_bridge;
- (shared_ptr_3725e3cd)getTurboModule:(const struct InitParams *)arg1;
- (void)_dispatchPictureSelectedEvent:(id)arg1;
- (void)captureControllerDidCancelCapture:(id)arg1;
- (void)captureController:(id)arg1 didConfirmVideoComposition:(id)arg2 mediaMetadata:(id)arg3;
- (void)captureController:(id)arg1 didUpdateVideoComposition:(id)arg2;
- (void)captureControllerDidEndFilmingClip:(id)arg1;
- (void)captureControllerWillBeginFilmingClip:(id)arg1;
- (void)captureController:(id)arg1 didTakePhotoWithBuffer:(id)arg2 mediaMetadata:(id)arg3 deviceOrientation:(long long)arg4;
- (void)captureController:(id)arg1 willTakePhotoWithPreviewBuffer:(id)arg2 mediaMetadata:(id)arg3;
- (void)captureController:(id)arg1 didChangeToCameraMode:(long long)arg2;
- (void)mediaLibraryViewController:(id)arg1 didFinishWithCompositionDraft:(id)arg2;
- (void)mediaLibraryViewController:(id)arg1 didFinishWithMediaDraft:(id)arg2;
- (void)mediaLibraryViewController:(id)arg1 didProduceComposition:(id)arg2;
- (void)mediaLibraryViewControllerDidCancel:(id)arg1;
- (void)_dispatchEventWithImage:(id)arg1;
- (id)_reactViewControllerForRootTag:(id)arg1;
- (void)_openCamera;
- (void)_presentCamera;
- (void)_presentPhotoLibrary;
- (void)_removePhoto;
- (void)openNativePhotoPicker:(double)arg1 showRemovePhoto:(_Bool)arg2;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) __weak id <RCTTurboModuleRegistry> turboModuleRegistry;

@end


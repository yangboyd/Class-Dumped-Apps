//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGTextPickerViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/NativeIGShoppingPickerModuleSpec-Protocol.h>
#import <InstagramAppCoreFramework/RCTIGUserSessionModule-Protocol.h>

@class IGUserSession, NSString, RCTBridge;
@protocol OS_dispatch_queue, RCTTurboModuleRegistry;

@interface IGShoppingPickerModule : NSObject <IGTextPickerViewControllerDelegate, NativeIGShoppingPickerModuleSpec, RCTIGUserSessionModule>
{
    IGUserSession *_userSession;
    RCTBridge *_bridge;
}

+ (const struct RCTMethodInfo *)__rct_export__440;
+ (void)load;
+ (id)moduleName;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak RCTBridge *bridge; // @synthesize bridge=_bridge;
@property(nonatomic) __weak IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void)textPickerViewController:(id)arg1 didSelectItem:(id)arg2 atIndex:(long long)arg3;
- (shared_ptr_3725e3cd)getTurboModule:(const struct InitParams *)arg1;
- (void)openPicker:(id)arg1 values:(id)arg2 selectedIndex:(double)arg3;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) __weak id <RCTTurboModuleRegistry> turboModuleRegistry;

@end


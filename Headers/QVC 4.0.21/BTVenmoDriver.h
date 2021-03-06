//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BraintreeVenmo/BTAppSwitchHandler-Protocol.h>

@class BTAPIClient, NSBundle, NSString, UIDevice;
@protocol BTAppSwitchDelegate;

@interface BTVenmoDriver : NSObject <BTAppSwitchHandler>
{
    _Bool _shouldVault;
    id <BTAppSwitchDelegate> _appSwitchDelegate;
    CDUnknownBlockType _appSwitchCompletionBlock;
    id _application;
    NSBundle *_bundle;
    UIDevice *_device;
    NSString *_returnURLScheme;
    BTAPIClient *_apiClient;
}

+ (_Bool)canHandleAppSwitchReturnURL:(id)arg1 sourceApplication:(id)arg2;
+ (void)handleAppSwitchReturnURL:(id)arg1;
+ (void)load;
@property(nonatomic) _Bool shouldVault; // @synthesize shouldVault=_shouldVault;
@property(retain, nonatomic) BTAPIClient *apiClient; // @synthesize apiClient=_apiClient;
@property(copy, nonatomic) NSString *returnURLScheme; // @synthesize returnURLScheme=_returnURLScheme;
@property(retain, nonatomic) UIDevice *device; // @synthesize device=_device;
@property(retain, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
@property(retain, nonatomic) id application; // @synthesize application=_application;
@property(copy, nonatomic) CDUnknownBlockType appSwitchCompletionBlock; // @synthesize appSwitchCompletionBlock=_appSwitchCompletionBlock;
@property(nonatomic) __weak id <BTAppSwitchDelegate> appSwitchDelegate; // @synthesize appSwitchDelegate=_appSwitchDelegate;
- (void).cxx_destruct;
- (void)informDelegateAppContextDidReturn;
- (void)informDelegateAppContextWillSwitch;
- (void)informDelegateWillProcessAppSwitchReturn;
- (void)informDelegateDidPerformAppSwitch;
- (void)informDelegateWillPerformAppSwitch;
- (_Bool)verifyAppSwitchWithConfiguration:(id)arg1 error:(id *)arg2;
- (void)openVenmoAppPageInAppStore;
- (void)handleOpenURL:(id)arg1;
- (_Bool)isiOSAppAvailableForAppSwitch;
- (void)vaultVenmoAccountNonce:(id)arg1;
- (void)invokedOpenURLSuccessfully:(_Bool)arg1 shouldVault:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)authorizeAccountWithProfileID:(id)arg1 vault:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)authorizeAccountAndVault:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)authorizeAccountWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithAPIClient:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTPermissionsDelegate-Protocol.h>
#import <Module_Framework/YTResponder-Protocol.h>

@class MDXLocalNetworkPermissions, NSString;
@protocol YTResponder;

@interface MDXPermissionsController : NSObject <YTPermissionsDelegate, YTResponder>
{
    CDUnknownBlockType _micCompletionBlock;
    MDXLocalNetworkPermissions *_localNetworkPermissions;
    id <YTResponder> _parentResponder;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void)willOpenSettingsForPermissions:(id)arg1;
- (void)permissionsUpdated:(id)arg1 forType:(long long)arg2 status:(long long)arg3;
- (void)dismissModal;
- (void)showMicPermissionSettingsDialog;
- (void)checkForMicPermissionsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)showLocalNetworkPermissionsRequiredPageWithCompletion:(CDUnknownBlockType)arg1;
- (void)checkForLocalNetworkPermissionsWithCompletionBlock:(CDUnknownBlockType)arg1 permissionsCheckTimeout:(double)arg2;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


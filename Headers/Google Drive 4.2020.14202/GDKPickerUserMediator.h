//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDKPickerVCDelegate-Protocol.h"
#import "GDKUserMediator-Protocol.h"

@class GDKPickerUserServices, GDKPickerVC, NSString;
@protocol GDKPickerUserMediatorDelegate, SSOAuthorization, SSOIdentity;

@interface GDKPickerUserMediator : NSObject <GDKPickerVCDelegate, GDKUserMediator>
{
    _Bool _uploading;
    GDKPickerVC *_pickerVC;
    GDKPickerUserServices *_userServices;
    id <GDKPickerUserMediatorDelegate> _delegate;
    id <SSOAuthorization> _ssoAuthorization;
    unsigned long long _pickerMode;
}

@property(nonatomic) unsigned long long pickerMode; // @synthesize pickerMode=_pickerMode;
@property(retain, nonatomic) id <SSOAuthorization> ssoAuthorization; // @synthesize ssoAuthorization=_ssoAuthorization;
@property(nonatomic) _Bool uploading; // @synthesize uploading=_uploading;
@property(nonatomic) __weak id <GDKPickerUserMediatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) GDKPickerUserServices *userServices; // @synthesize userServices=_userServices;
@property(retain, nonatomic) GDKPickerVC *pickerVC; // @synthesize pickerVC=_pickerVC;
- (void).cxx_destruct;
- (void)handleSelectionOfFile:(id)arg1 error:(id)arg2;
- (void)pickerVC:(id)arg1 folderSelected:(id)arg2 error:(id)arg3;
- (void)pickerVC:(id)arg1 fileSelected:(id)arg2 error:(id)arg3;
- (void)shutdownWithCompletionQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)rootViewController;
@property(readonly, nonatomic) id <SSOIdentity> ssoIdentity;
- (id)initWithParams:(id)arg1 ssoAuthorization:(id)arg2 uploading:(_Bool)arg3 documentTypes:(id)arg4 fileFields:(unsigned long long)arg5 pickerRootConfig:(CDUnknownBlockType)arg6;
- (id)initWithParams:(id)arg1 ssoAuthorization:(id)arg2 uploading:(_Bool)arg3 documentTypes:(id)arg4 fileFields:(unsigned long long)arg5 displayParams:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool displayAccountToastAfterActivation;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


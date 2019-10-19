//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GIDAuthBrowserOpener-Protocol.h"

@class NSString;
@protocol GIDBrowserOpener;

@interface GIDASCAccountChooserBrowserOpener : NSObject <GIDAuthBrowserOpener>
{
    id <GIDBrowserOpener> _browserOpener;
}

- (void).cxx_destruct;
- (id)wrappedBrowserOpener;
- (void)openURL:(id)arg1 auth:(_Bool)arg2 identity:(id)arg3 SSOService:(id)arg4 view:(id)arg5 viewController:(id)arg6 animated:(_Bool)arg7 userInterfaceStyle:(unsigned long long)arg8 completionHandler:(CDUnknownBlockType)arg9;
- (void)openURL:(id)arg1 auth:(_Bool)arg2 identity:(id)arg3 SSOService:(id)arg4 view:(id)arg5 viewController:(id)arg6 animated:(_Bool)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (id)initWithBrowserOpener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WADeepLinkWithStandardAppSwitcher.h"

@class NSString;

@interface WAProductDeepLink : WADeepLinkWithStandardAppSwitcher
{
    NSString *_phoneNumberString;
    NSString *_productID;
}

- (void).cxx_destruct;
- (id)openLinkButtonText;
- (void)logDeepLinkEvent;
- (void)openCatalogURLWithJID:(id)arg1 rootVC:(id)arg2;
- (id)urlForAppScheme:(id)arg1;
- (void)openURLWithRootVC:(id)arg1;
- (_Bool)parseURL:(id)arg1 context:(id)arg2;

@end


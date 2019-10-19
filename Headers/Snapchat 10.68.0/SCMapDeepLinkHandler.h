//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCMapDeepLinkHandling-Protocol.h"

@class NSString, SCUserSession;
@protocol NavigationDelegate;

@interface SCMapDeepLinkHandler : NSObject <SCMapDeepLinkHandling>
{
    id <NavigationDelegate> _navigationDelegate;
    SCUserSession *_userSession;
}

- (void).cxx_destruct;
- (long long)handleURL:(id)arg1 presentingViewController:(id)arg2 sourceType:(long long)arg3;
- (id)initWithNavigationDelegate:(id)arg1 userSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


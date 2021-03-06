//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WADeepLink : NSObject
{
    unsigned long long _targetApp;
}

+ (unsigned long long)targetAppForURL:(id)arg1;
@property(readonly, nonatomic) unsigned long long targetApp; // @synthesize targetApp=_targetApp;
- (_Bool)consumerAppCanOpenURL;
- (_Bool)smbAppCanOpenURL;
- (_Bool)parseURL:(id)arg1 sourceApplication:(id)arg2;
- (void)openURLWithRootVC:(id)arg1;
- (id)urlForAppScheme:(id)arg1;
- (_Bool)otherAppCanOpenURL;
- (void)openAppSwitcherWithRootVC:(id)arg1;
- (void)processURLWithRootVC:(id)arg1;
- (_Bool)handleDeepLinkWithRootVC:(id)arg1;
- (id)initWithURL:(id)arg1 sourceApplication:(id)arg2;

@end


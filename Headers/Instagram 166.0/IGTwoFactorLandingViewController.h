//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

@class IGTwoFactorSetupLogger, IGTwoFactorStatusInfo, IGUserSession, UIBarButtonItem;

@interface IGTwoFactorLandingViewController : IGViewController
{
    IGUserSession *_userSession;
    IGTwoFactorStatusInfo *_statusInfo;
    UIBarButtonItem *_refreshBarButtonItem;
    IGTwoFactorSetupLogger *_setupLogger;
    long long _entryPoint;
}

- (void).cxx_destruct;
- (id)_entryPoint;
- (void)_fetchAccountSecurityInfo;
- (void)_configView;
- (void)_updateDataWithDictionary:(id)arg1;
- (long long)preferredTabBarBehavior;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 entryPoint:(long long)arg2;

@end


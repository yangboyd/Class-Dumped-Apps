//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GBTGrowthKitServiceImplDeps-Protocol.h"

@class GOOAccountScopedProvider, GOOProvider, NSString;
@protocol GBTAccountsService, GBTAccountsUIService, GBTApplicationSettingsService, GBTUrlService, SSOService;

@interface GBTGrowthKitServiceImplDepsImpl : NSObject <GBTGrowthKitServiceImplDeps>
{
    GOOProvider *_accountsServiceProvider;
    GOOProvider *_accountsUIServiceProvider;
    GOOProvider *_applicationSettingsServiceProvider;
    GOOAccountScopedProvider *_feedbackServiceProvider;
    GOOProvider *_SSOServiceProvider;
    GOOProvider *_urlServiceProvider;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GOOProvider *urlServiceProvider; // @synthesize urlServiceProvider=_urlServiceProvider;
@property(readonly, nonatomic) GOOProvider *SSOServiceProvider; // @synthesize SSOServiceProvider=_SSOServiceProvider;
@property(readonly, nonatomic) GOOAccountScopedProvider *feedbackServiceProvider; // @synthesize feedbackServiceProvider=_feedbackServiceProvider;
@property(readonly, nonatomic) GOOProvider *applicationSettingsServiceProvider; // @synthesize applicationSettingsServiceProvider=_applicationSettingsServiceProvider;
@property(readonly, nonatomic) GOOProvider *accountsUIServiceProvider; // @synthesize accountsUIServiceProvider=_accountsUIServiceProvider;
@property(readonly, nonatomic) GOOProvider *accountsServiceProvider; // @synthesize accountsServiceProvider=_accountsServiceProvider;
@property(readonly, nonatomic) id <GBTUrlService> urlService;
@property(readonly, nonatomic) id <SSOService> SSOService;
- (id)feedbackServiceWithAccountID:(id)arg1;
@property(readonly, nonatomic) id <GBTApplicationSettingsService> applicationSettingsService;
@property(readonly, nonatomic) id <GBTAccountsUIService> accountsUIService;
@property(readonly, nonatomic) id <GBTAccountsService> accountsService;
- (id)initWithAccountsServiceProvider:(id)arg1 accountsUIServiceProvider:(id)arg2 applicationSettingsServiceProvider:(id)arg3 feedbackServiceProvider:(id)arg4 SSOServiceProvider:(id)arg5 urlServiceProvider:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


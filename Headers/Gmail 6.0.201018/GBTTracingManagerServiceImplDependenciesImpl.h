//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GBTTracingManagerServiceImplDependencies-Protocol.h"

@class GOOProvider, NSString;
@protocol GBTAccountsService, GBTApplicationSettingsService, GBTSettingsManagerService, GBTThemeManagerService;

@interface GBTTracingManagerServiceImplDependenciesImpl : NSObject <GBTTracingManagerServiceImplDependencies>
{
    GOOProvider *_accountsServiceProvider;
    GOOProvider *_applicationSettingsServiceProvider;
    GOOProvider *_settingsManagerServiceProvider;
    GOOProvider *_themeManagerServiceProvider;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GOOProvider *themeManagerServiceProvider; // @synthesize themeManagerServiceProvider=_themeManagerServiceProvider;
@property(readonly, nonatomic) GOOProvider *settingsManagerServiceProvider; // @synthesize settingsManagerServiceProvider=_settingsManagerServiceProvider;
@property(readonly, nonatomic) GOOProvider *applicationSettingsServiceProvider; // @synthesize applicationSettingsServiceProvider=_applicationSettingsServiceProvider;
@property(readonly, nonatomic) GOOProvider *accountsServiceProvider; // @synthesize accountsServiceProvider=_accountsServiceProvider;
@property(readonly, nonatomic) id <GBTThemeManagerService> themeManagerService;
@property(readonly, nonatomic) id <GBTSettingsManagerService> settingsManagerService;
@property(readonly, nonatomic) id <GBTApplicationSettingsService> applicationSettingsService;
@property(readonly, nonatomic) id <GBTAccountsService> accountsService;
- (id)initWithAccountsServiceProvider:(id)arg1 applicationSettingsServiceProvider:(id)arg2 settingsManagerServiceProvider:(id)arg3 themeManagerServiceProvider:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


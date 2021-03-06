//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class Account, AccountManager, AnalyticsManager, AppSettings, ExperimentManager, RedditService, _TtC6Reddit12StyleManager, _TtC6Reddit23IdentityProviderService, _TtC6Reddit24AnonymousBrowsingManager;
@protocol ViewContext, _TtP6Reddit13ErrorReporter_;

@protocol AccountContext <NSObject>
@property(nonatomic, readonly) id <_TtP6Reddit13ErrorReporter_> errorReporter;
@property(nonatomic, readonly) _TtC6Reddit12StyleManager *styleManager;
@property(nonatomic, readonly) AppSettings *appSettings;
@property(nonatomic, readonly) ExperimentManager *experimentManager;
@property(nonatomic, readonly) _TtC6Reddit24AnonymousBrowsingManager *anonymousBrowsingManager;
@property(nonatomic, readonly) AnalyticsManager *analyticsManager;
@property(nonatomic, readonly) _TtC6Reddit23IdentityProviderService *identityProviderService;
@property(nonatomic, readonly) id <ViewContext> viewContext;
@property(nonatomic, readonly) AccountManager *accountManager;
@property(nonatomic, readonly) RedditService *redditService;
@property(nonatomic, readonly) Account *account;
@end


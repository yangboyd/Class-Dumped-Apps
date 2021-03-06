//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTLoginLogger, SPTLoginSessionScopeServicesLoader, SPTLoginStateController, SPTMetaViewController;

@interface SPTLoginMainViewLoader : NSObject
{
    id <SPTMetaViewController> _metaViewController;
    id <SPTLoginSessionScopeServicesLoader> _sessionScopeServicesLoader;
    id <SPTLoginStateController> _loginStateController;
    id <SPTLoginLogger> _logger;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTLoginLogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SPTLoginStateController> loginStateController; // @synthesize loginStateController=_loginStateController;
@property(readonly, nonatomic) id <SPTLoginSessionScopeServicesLoader> sessionScopeServicesLoader; // @synthesize sessionScopeServicesLoader=_sessionScopeServicesLoader;
@property(readonly, nonatomic) id <SPTMetaViewController> metaViewController; // @synthesize metaViewController=_metaViewController;
- (void)presentMainScreenWithCompletion:(CDUnknownBlockType)arg1;
- (void)loadSessionServicesAndPresentMainScreenWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithMetaViewController:(id)arg1 sessionScopeServicesLoader:(id)arg2 loginStateController:(id)arg3 logger:(id)arg4;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, YTAccountsListService, YTGaiaIdentityService;

@interface YTIdentityRetriever : NSObject
{
    YTGaiaIdentityService *_gaiaIdentityService;
    YTAccountsListService *_accountsListService;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (id)accountsListService;
- (id)requestAllIdentitiesForGoogleIdentity:(id)arg1;
- (void)fetchFullIdentityArrayForGoogleAccounts:(id)arg1 successBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)retrieveAllIdentitiesWithSuccessBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (id)retrieveIdentityForID:(id)arg1;
- (id)init;

@end


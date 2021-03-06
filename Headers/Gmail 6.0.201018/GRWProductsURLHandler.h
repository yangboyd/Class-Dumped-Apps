//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GRWCanRequestTokenAuthProtocol-Protocol.h"

@class GRWProductsDataSource, NSString;
@protocol GRWUserAccountsTokenRequester, SSOService;

@interface GRWProductsURLHandler : NSObject <GRWCanRequestTokenAuthProtocol>
{
    id <SSOService> _authService;
    id <GRWUserAccountsTokenRequester> _tokenRequester;
    long long _signedInState;
    NSString *_signedInHashUserID;
    GRWProductsDataSource *_productsDataSource;
    CDUnknownBlockType _openURLOverrideBlock;
}

+ (void)requestTokenAuthThenOpenURLForIdentity:(id)arg1 targetURL:(id)arg2 dataSource:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType openURLOverrideBlock; // @synthesize openURLOverrideBlock=_openURLOverrideBlock;
@property(readonly, nonatomic) GRWProductsDataSource *productsDataSource; // @synthesize productsDataSource=_productsDataSource;
@property(copy, nonatomic) NSString *signedInHashUserID; // @synthesize signedInHashUserID=_signedInHashUserID;
@property(nonatomic) long long signedInState; // @synthesize signedInState=_signedInState;
@property(readonly, nonatomic) id <GRWUserAccountsTokenRequester> tokenRequester; // @synthesize tokenRequester=_tokenRequester;
@property(readonly, nonatomic) id <SSOService> authService; // @synthesize authService=_authService;
- (_Bool)openURL:(id)arg1;
- (void)enrichURL:(id)arg1 withSSOTokenForHashedUserID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)openURL:(id)arg1 useInternalSafariViewController:(_Bool)arg2 browser:(id)arg3 retargetURL:(_Bool)arg4;
- (void)openURL:(id)arg1 inApp:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)canAddAuthentication:(id)arg1;
- (id)initWithProductsDataSource:(id)arg1 authService:(id)arg2 tokenRequester:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


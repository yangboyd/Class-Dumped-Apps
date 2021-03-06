//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CHMAccount-Protocol.h"

@class CHMAccountState, NSString;
@protocol GIKSharedLibraryService, GIPGaiaAccountID, GTMFetcherAuthorizationProtocol;

@interface CHMIdentityKitAccount : NSObject <CHMAccount>
{
    CHMAccountState *_state;
    id <GIPGaiaAccountID> _gaiaAccountID;
    id <GIKSharedLibraryService> _sharedLibraryService;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <GIKSharedLibraryService> sharedLibraryService; // @synthesize sharedLibraryService=_sharedLibraryService;
@property(readonly, nonatomic) id <GIPGaiaAccountID> gaiaAccountID; // @synthesize gaiaAccountID=_gaiaAccountID;
@property(readonly, nonatomic) CHMAccountState *state; // @synthesize state=_state;
@property(readonly, copy) NSString *description;
- (void)fetchAuthTokenWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSString *email;
- (id)authorizationService;
@property(readonly, nonatomic) id <GTMFetcherAuthorizationProtocol> authorization;
@property(readonly, nonatomic) NSString *accountID;
- (id)initWithSharedLibraryService:(id)arg1 gaiaAccountID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


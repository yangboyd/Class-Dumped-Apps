//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface XALAuthManager : NSObject
{
    _Bool _isAuthenticating;
    NSString *_xuid;
    long long _ageGroup;
    NSString *_gamertag;
    NSString *_uniqueModernGamertag;
    NSString *_webAccountId;
    struct XTaskQueueObject *_queue;
    struct XalUser *_userHandle;
    struct XalUser *_deviceHandle;
    NSMutableDictionary *_operations;
}

@property(retain, nonatomic) NSMutableDictionary *operations; // @synthesize operations=_operations;
@property(nonatomic) _Bool isAuthenticating; // @synthesize isAuthenticating=_isAuthenticating;
@property(nonatomic) struct XalUser *deviceHandle; // @synthesize deviceHandle=_deviceHandle;
@property(nonatomic) struct XalUser *userHandle; // @synthesize userHandle=_userHandle;
@property(nonatomic) struct XTaskQueueObject *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) NSString *webAccountId; // @synthesize webAccountId=_webAccountId;
@property(copy, nonatomic) NSString *uniqueModernGamertag; // @synthesize uniqueModernGamertag=_uniqueModernGamertag;
@property(copy, nonatomic) NSString *gamertag; // @synthesize gamertag=_gamertag;
@property(nonatomic) long long ageGroup; // @synthesize ageGroup=_ageGroup;
@property(copy, nonatomic) NSString *xuid; // @synthesize xuid=_xuid;
- (void).cxx_destruct;
- (const char *)stringForDenyReason:(int)arg1;
- (id)errorForDenyReason:(int)arg1;
- (void)completeOperationsForKey:(id)arg1 work:(CDUnknownBlockType)arg2;
- (_Bool)configureOperationsForKeyIfNeeded:(id)arg1 value:(id)arg2;
- (void)configureSignInSuccessForUserHandle:(struct XalUser *)arg1;
- (void)performAsyncTokenOperationOnBlock:(CDUnknownBlockType)arg1 handleOperationCompletion:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
- (void)performAsyncAuthOperationOnBlock:(CDUnknownBlockType)arg1 handleOperationCompletion:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getTokenAndSignatureForUser:(struct XalUser *)arg1 request:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)isDeniedFromPrivilege:(long long)arg1;
- (void)refreshUserInformation;
- (void)resolveTokenIssueForURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getMSATicketForScope:(id)arg1 parameters:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)getAnonymousTokenAndSignature:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)getTokenAndSignature:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)signOut:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)signIn:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)canSignOut;
@property(readonly, nonatomic) _Bool isSignedIn;
- (id)initWithQueue:(struct XTaskQueueObject *)arg1;

@end


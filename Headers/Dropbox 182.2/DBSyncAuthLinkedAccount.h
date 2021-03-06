//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/DBAuthLinkedAccountProtocol-Protocol.h>

@class DBAccount, DBObserverBlockMap, NSString;
@protocol DBAuthAccountInfoProtocol, DBObserverHandleProtocol;

@interface DBSyncAuthLinkedAccount : NSObject <DBAuthLinkedAccountProtocol>
{
    DBObserverBlockMap *_accountInfoObservers;
    id <DBObserverHandleProtocol> _accountObserverHandle;
    NSString *_userID;
    id <DBAuthAccountInfoProtocol> _accountInfo;
    NSString *_accessToken;
    NSString *_cacheId;
    NSString *_accessTokenSecret;
    DBAccount *_account;
}

+ (id)db_accountInfoFromAccount:(id)arg1;
@property(readonly, nonatomic) DBAccount *account; // @synthesize account=_account;
@property(readonly, copy, nonatomic) NSString *accessTokenSecret; // @synthesize accessTokenSecret=_accessTokenSecret;
@property(readonly, copy, nonatomic) NSString *cacheId; // @synthesize cacheId=_cacheId;
@property(readonly, copy, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
@property(readonly, nonatomic) id <DBAuthAccountInfoProtocol> accountInfo; // @synthesize accountInfo=_accountInfo;
@property(readonly, copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)db_updateAccountInfo:(id)arg1;
- (id)addAccountInfoUpdateObserver:(CDUnknownBlockType)arg1;
- (void)notifyAccountUpdateWithInfo:(id)arg1;
- (id)initWithAccount:(id)arg1;
- (void)dealloc;

@end


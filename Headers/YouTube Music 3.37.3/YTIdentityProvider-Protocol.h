//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTVisitorDataProvider-Protocol.h"

@class NSString, YTIdentity;
@protocol YTUserChangedObserver;

@protocol YTIdentityProvider <YTVisitorDataProvider>
- (void)allAvailableIdentitiesWithSuccessBlock:(void (^)(NSArray *))arg1 errorBlock:(void (^)(NSError *))arg2;
- (YTIdentity *)identityForID:(NSString *)arg1;
- (YTIdentity *)activeIdentity;
- (void)removeUserChangedObserver:(id <YTUserChangedObserver>)arg1;
- (void)addUserChangedObserver:(id <YTUserChangedObserver>)arg1;
- (_Bool)isSignedIn;
@end


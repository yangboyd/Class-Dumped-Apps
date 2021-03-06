//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol OGLAccount, OGLAccountRestrictionsSource, OGLExpressSignInViewControllerDelegate;

@protocol OGLExpressSignInProtocol <NSObject>
@property(nonatomic) _Bool continueWithoutAccount;
@property(retain, nonatomic) id <OGLAccount> expressAccount;
@property(nonatomic) __weak id <OGLExpressSignInViewControllerDelegate> signInDelegate;

@optional
@property(retain, nonatomic) id <OGLAccountRestrictionsSource> accountRestrictionsSource;
@end


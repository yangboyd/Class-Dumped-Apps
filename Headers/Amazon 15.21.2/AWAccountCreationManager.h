//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AWAccountCreationManager : NSObject
{
}

+ (id)accountCreationManager;
- (void)createAccountViaMapWithSuccessBlock:(CDUnknownBlockType)arg1 alwaysPopParentOnDismiss:(_Bool)arg2;
- (void)createAccountWithNavigationController:(id)arg1 successBlock:(CDUnknownBlockType)arg2 alwaysPopParentOnDismiss:(_Bool)arg3;
- (void)createAccountWithSuccessBlock:(CDUnknownBlockType)arg1 alwaysPopParentOnDismiss:(_Bool)arg2;

@end


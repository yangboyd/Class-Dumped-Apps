//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class MDXChooseIdentityViewController, NSError, SSOIdentity;

@protocol MDXChooseIdentityViewControllerDelegate <NSObject>
- (void)chooseIdentityViewControllerDidDismissSignIn:(MDXChooseIdentityViewController *)arg1 dismissalType:(long long)arg2;
- (void)chooseIdentityViewController:(MDXChooseIdentityViewController *)arg1 didCompleteStepWithIdentity:(SSOIdentity *)arg2 error:(NSError *)arg3;
@end


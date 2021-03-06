//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Braintree3DSecure/NSObject-Protocol.h>

@class BTThreeDSecureAuthenticationViewController, BTThreeDSecureCardNonce, NSError, NSURLRequest;

@protocol BTThreeDSecureAuthenticationViewControllerDelegate <NSObject>
- (void)threeDSecureViewControllerDidFinish:(BTThreeDSecureAuthenticationViewController *)arg1;
- (void)threeDSecureViewController:(BTThreeDSecureAuthenticationViewController *)arg1 didFailWithError:(NSError *)arg2;
- (void)threeDSecureViewController:(BTThreeDSecureAuthenticationViewController *)arg1 didAuthenticateCard:(BTThreeDSecureCardNonce *)arg2 completion:(void (^)(long long))arg3;

@optional
- (void)threeDSecureViewController:(BTThreeDSecureAuthenticationViewController *)arg1 didPresentErrorToUserForURLRequest:(NSURLRequest *)arg2;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL, UIWindow;
@protocol SSOSafariSignInHandlerDelegate;

@protocol SSOSafariSignInHandler <NSObject>
@property(nonatomic) __weak id <SSOSafariSignInHandlerDelegate> delegate;
- (_Bool)dismissSafariViewControllerWithCompletion:(void (^)(void))arg1;
- (_Bool)dismissAuthSession;
- (void)signInWithURL:(NSURL *)arg1 useAuthSession:(_Bool)arg2 presentationAnchor:(UIWindow *)arg3 presentBlock:(void (^)(UIViewController *))arg4 completionHandler:(void (^)(NSURL *, NSError *))arg5;
@end


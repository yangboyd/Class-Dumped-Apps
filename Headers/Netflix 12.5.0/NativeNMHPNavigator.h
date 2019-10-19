//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NativeNMHPViewController;

@interface NativeNMHPNavigator : NSObject
{
    NativeNMHPViewController *_controller;
    CDUnknownBlockType _tokenActivationCompletionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType tokenActivationCompletionBlock; // @synthesize tokenActivationCompletionBlock=_tokenActivationCompletionBlock;
@property(nonatomic) __weak NativeNMHPViewController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (void)switchToWebNMHP;
- (void)activationCompleted:(id)arg1;
- (void)warnUser;
- (void)tokenActivateWithCompletion:(CDUnknownBlockType)arg1;
- (void)handoffToWebviewWithFlow:(id)arg1 mode:(id)arg2;
- (void)signUserOut;
- (void)goToHelp;
- (void)goToSignInClearStack:(_Bool)arg1;
- (id)initWithController:(id)arg1;

@end


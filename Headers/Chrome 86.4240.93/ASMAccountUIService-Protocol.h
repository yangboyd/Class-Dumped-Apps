//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChromeInternal/NSObject-Protocol.h>

@class ASMAccountUIParams, UINavigationController, UIViewController;
@protocol ASMSession;

@protocol ASMAccountUIService <NSObject>
- (id <ASMSession>)presentScreenFromViewController:(UIViewController *)arg1 animated:(_Bool)arg2 params:(ASMAccountUIParams *)arg3;
- (id <ASMSession>)pushScreenToNavigationController:(UINavigationController *)arg1 animated:(_Bool)arg2 params:(ASMAccountUIParams *)arg3;
@end


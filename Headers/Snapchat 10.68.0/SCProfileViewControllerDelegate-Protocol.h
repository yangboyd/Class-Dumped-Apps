//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCUnifiedProfileViewController;

@protocol SCProfileViewControllerDelegate <NSObject>
- (void)dismissProfileViewController:(SCUnifiedProfileViewController *)arg1;

@optional
- (void)profileViewWillDisappear:(SCUnifiedProfileViewController *)arg1;
- (void)profileViewDidAppear:(SCUnifiedProfileViewController *)arg1;
- (void)profileViewWillAppear:(SCUnifiedProfileViewController *)arg1;
- (void)profileViewDidLoad:(SCUnifiedProfileViewController *)arg1;
- (void)dismissProfileViewController:(SCUnifiedProfileViewController *)arg1 animated:(_Bool)arg2 completionBlock:(void (^)(void))arg3;
@end


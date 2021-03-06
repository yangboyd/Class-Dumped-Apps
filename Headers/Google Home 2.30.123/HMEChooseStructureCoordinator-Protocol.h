//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HMEPendingStructureMO, NSString, UIViewController, UIWindow;
@protocol HMEChooseStructureCoordinatorDelegate, HMESetupNavigationControllerProtocol, SSOIdentity;

@protocol HMEChooseStructureCoordinator <NSObject>
- (void)startChooseStructureWithPresentingViewController:(UIViewController *)arg1 currentStructureID:(NSString *)arg2 options:(long long)arg3;
- (void)startChooseStructureInNavigationController:(UIViewController<HMESetupNavigationControllerProtocol> *)arg1 currentStructureID:(NSString *)arg2 options:(long long)arg3;
- (void)startCreateStructureWithPresentingViewController:(UIViewController *)arg1;
- (void)startChoosePendingStructure:(HMEPendingStructureMO *)arg1 inWindow:(UIWindow *)arg2;
- (void)startChooseStructureInWindow:(UIWindow *)arg1 options:(long long)arg2;
@property(nonatomic) __weak id <HMEChooseStructureCoordinatorDelegate> delegate;
@property(nonatomic, readonly) id <SSOIdentity> identity;
@end


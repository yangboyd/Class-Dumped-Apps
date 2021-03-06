//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SMASHNavigationStackDelegate-Protocol.h"

@class NSString, UINavigationController;

@interface MShopSMASHNavigationStackDelegateImpl : NSObject <SMASHNavigationStackDelegate>
{
    _Bool _smashMigrationWeblabEnabled;
    UINavigationController *_navigationController;
}

+ (void)initialize;
@property(nonatomic) _Bool smashMigrationWeblabEnabled; // @synthesize smashMigrationWeblabEnabled=_smashMigrationWeblabEnabled;
@property(retain, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
- (void).cxx_destruct;
- (_Bool)SMASHMigrationWeblabEnabled;
- (void)runCompletionBlockOnSuccess:(CDUnknownBlockType)arg1;
- (void)handleNavError:(id)arg1;
- (void)handleStackDeletionSuccess:(id)arg1 withViewControllers:(id)arg2 navOrigin:(id)arg3 originalNavLocations:(id)arg4;
- (id)getNavigationOriginPlaceHolder;
- (id)getNavLocationsForCurrentStack;
- (void)pruneBlankViewControllers;
- (unsigned long long)totalLogicalPagesCount;
- (id)getNavigationOrigin:(id)arg1;
- (unsigned long long)viewControllersCountInStack;
- (_Bool)isInModalState;
- (void)setViewControllers:(id)arg1;
- (id)visibleViewController;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)popViewControllerAnimated:(_Bool)arg1;
- (void)popToViewController:(id)arg1 animated:(_Bool)arg2;
- (id)viewControllers;
- (id)topViewController;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (id)navigationOriginURL:(id)arg1;
- (id)routingRuleForRequest:(id)arg1 pageTypeOnly:(_Bool)arg2;
- (id)handle:(id)arg1 withObligatoryHandlersOnly:(_Bool)arg2;
- (id)routingRequestWithRuleType:(id)arg1 smashNavigationRequest:(id)arg2 obligatoryHandlersOnly:(_Bool)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GSCNavigationService-Protocol.h"
#import "GSCRootNavigationControllerProvider-Protocol.h"

@class HUBNavigationManager, NSString;

@interface HUBNavigationServiceImpl : NSObject <GSCNavigationService, GSCRootNavigationControllerProvider>
{
    HUBNavigationManager *_navigationManager;
}

- (void).cxx_destruct;
- (void)resetWithRootViewController:(id)arg1;
- (void)popToRootViewControllerWithOptions:(id)arg1;
- (void)popToRootViewController;
- (id)closeTopViewControllerWithOptions:(id)arg1;
- (id)closeTopViewController;
- (_Bool)navigateToViewController:(id)arg1 withOptions:(id)arg2;
- (_Bool)navigateToViewController:(id)arg1;
- (id)navigationController;
- (id)initWithNavigationListenerServices:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


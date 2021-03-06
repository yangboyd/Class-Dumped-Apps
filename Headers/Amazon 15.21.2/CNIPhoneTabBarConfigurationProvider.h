//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ANPTabBarConfigurationProvider-Protocol.h"
#import "ANPTabBarEventDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString;

@interface CNIPhoneTabBarConfigurationProvider : NSObject <ANPTabBarEventDelegate, ANPTabBarConfigurationProvider>
{
    _Bool _useGlobalNavigationStack;
    NSArray *_tabBarItems;
    CDUnknownBlockType _homeViewController;
    CDUnknownBlockType _showDebugMenu;
    NSMutableArray *_lastReloadTime;
}

@property(retain, nonatomic) NSMutableArray *lastReloadTime; // @synthesize lastReloadTime=_lastReloadTime;
@property(copy, nonatomic) CDUnknownBlockType showDebugMenu; // @synthesize showDebugMenu=_showDebugMenu;
@property(nonatomic) _Bool useGlobalNavigationStack; // @synthesize useGlobalNavigationStack=_useGlobalNavigationStack;
@property(copy, nonatomic) CDUnknownBlockType homeViewController; // @synthesize homeViewController=_homeViewController;
@property(readonly, nonatomic) NSArray *tabBarItems; // @synthesize tabBarItems=_tabBarItems;
- (void).cxx_destruct;
- (void)onTabChange:(unsigned long long)arg1 viewController:(id)arg2;
- (void)handleTabBarLongPressGesture:(id)arg1 selectedTabIndex:(unsigned long long)arg2 viewController:(id)arg3;
- (_Bool)isTabBarLongPressGestureRecognizerNeeded;
- (id)tabBarEventDelegate;
- (id)tabBarTintColor;
- (long long)topNavConfigForHomeViewController:(unsigned long long)arg1;
- (long long)homeViewControllerScreenType:(unsigned long long)arg1;
- (id)homeViewControllerForTab:(unsigned long long)arg1;
- (id)tabBarItemArray;
- (id)initWithHomeViewController:(CDUnknownBlockType)arg1 useGlobalNavigationStack:(_Bool)arg2 showDebugMenu:(CDUnknownBlockType)arg3;
- (id)initWithHomeViewController:(CDUnknownBlockType)arg1 showDebugMenu:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


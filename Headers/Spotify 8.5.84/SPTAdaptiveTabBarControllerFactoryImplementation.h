//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTTabBarControllerFactory-Protocol.h"

@class NSString, SPTTheme;
@protocol SPTMetaViewController, SPTNavigationConfiguration, SPTNavigationRouter, SPTUBILogger;

@interface SPTAdaptiveTabBarControllerFactoryImplementation : NSObject <SPTTabBarControllerFactory>
{
    NSString *_friendlyName;
    SPTTheme *_theme;
    id <SPTNavigationConfiguration> _navigationConfiguration;
    id <SPTMetaViewController> _metaViewController;
    id <SPTNavigationRouter> _navigationRouter;
    id <SPTUBILogger> _ubiLogger;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTUBILogger> ubiLogger; // @synthesize ubiLogger=_ubiLogger;
@property(nonatomic) __weak id <SPTNavigationRouter> navigationRouter; // @synthesize navigationRouter=_navigationRouter;
@property(nonatomic) __weak id <SPTMetaViewController> metaViewController; // @synthesize metaViewController=_metaViewController;
@property(readonly, nonatomic) id <SPTNavigationConfiguration> navigationConfiguration; // @synthesize navigationConfiguration=_navigationConfiguration;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, copy, nonatomic) NSString *friendlyName; // @synthesize friendlyName=_friendlyName;
- (id)createSideBarControllerWithTabBarController:(id)arg1 logCenter:(id)arg2 nowPlayingSideBar:(id)arg3;
- (id)createTabBarContainerWithTabBarController:(id)arg1 logCenter:(id)arg2;
- (id)createTabBarControllerWithLogCenter:(id)arg1;
- (id)initWithFriendlyName:(id)arg1 theme:(id)arg2 navigationConfiguration:(id)arg3 metaViewController:(id)arg4 navigationRouter:(id)arg5 ubiLogger:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


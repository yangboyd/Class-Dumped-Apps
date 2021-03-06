//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDKAppSwitchingLinkOpener-Protocol.h"
#import "GDKGrowthKitAppsListVCFactory-Protocol.h"
#import "GDKGrowthKitFABFactory-Protocol.h"

@class NSString;
@protocol GDKGrowthKitLinkOpening;

@interface GDKGrowthKitAppSwitching : NSObject <GDKAppSwitchingLinkOpener, GDKGrowthKitFABFactory, GDKGrowthKitAppsListVCFactory>
{
    _Bool _appBarCompatibility;
    id <GDKGrowthKitLinkOpening> _growthKitLinkOpening;
}

+ (id)appBarCompatibleAppsListFactory;
+ (id)defaultAppsListFactory;
+ (id)defaultFABFactory;
+ (id)defaultLinkOpener;
- (void).cxx_destruct;
@property(retain, nonatomic) id <GDKGrowthKitLinkOpening> growthKitLinkOpening; // @synthesize growthKitLinkOpening=_growthKitLinkOpening;
@property(nonatomic) _Bool appBarCompatibility; // @synthesize appBarCompatibility=_appBarCompatibility;
- (id)floatingActionButtonforURL:(id)arg1;
- (void)openURL:(id)arg1 openInOverrideOption:(long long)arg2 hashedUserID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)openURL:(id)arg1 hashedUserID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)appsListViewController;
@property(readonly, nonatomic) NSString *googleAppSettingsButtonTitleString;
- (id)init;
- (id)initWithGrowthKitLinkOpening:(id)arg1;

@end


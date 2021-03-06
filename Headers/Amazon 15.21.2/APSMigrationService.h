//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class APSManifestProvider, APSPermissionStorage, APSSystemPermissions;

@interface APSMigrationService : NSObject
{
    APSManifestProvider *_provider;
    APSSystemPermissions *_systemPermissions;
    APSPermissionStorage *_storage;
    id _weblabService;
}

@property(retain, nonatomic) id weblabService; // @synthesize weblabService=_weblabService;
@property(retain, nonatomic) APSPermissionStorage *storage; // @synthesize storage=_storage;
@property(retain, nonatomic) APSSystemPermissions *systemPermissions; // @synthesize systemPermissions=_systemPermissions;
@property(retain, nonatomic) APSManifestProvider *provider; // @synthesize provider=_provider;
- (void).cxx_destruct;
- (_Bool)isUsingPermissionServiceV2:(id)arg1 withFeatureManifest:(id)arg2;
- (void)runMigrationFromLocationService:(id)arg1 withFeatureManifest:(id)arg2;
- (_Bool)shouldRunMigration:(id)arg1 withRequestManifest:(id)arg2;
- (void)runMigration:(id)arg1 withFeatureManifest:(id)arg2;
- (id)initWithPermissionService:(id)arg1 withWeblabService:(id)arg2;
- (id)initWithPermissionService:(id)arg1;

@end


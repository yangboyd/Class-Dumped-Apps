//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BNCSystemObserver : NSObject
{
}

+ (id)getScreenHeight;
+ (id)getScreenWidth;
+ (id)getOSVersion;
+ (id)getOS;
+ (_Bool)isSimulator;
+ (id)getModel;
+ (id)getBrand;
+ (id)getTeamIdentifier;
+ (id)getBundleID;
+ (id)getAppVersion;
+ (id)getDefaultUriScheme;
+ (_Bool)adTrackingSafe;
+ (id)getVendorId;
+ (id)getAdId;
+ (id)getUniqueHardwareId:(_Bool *)arg1 isDebug:(_Bool)arg2 andType:(id *)arg3;

@end


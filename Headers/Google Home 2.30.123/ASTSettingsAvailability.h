//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ASTSettingsMenuService, NSMutableDictionary;

@interface ASTSettingsAvailability : NSObject
{
    NSMutableDictionary *_availableDeviceTypesDictionary;
    ASTSettingsMenuService *_settingsService;
}

+ (id)availabilitySectionHeaderItem;
+ (id)iconNameForDevice:(int)arg1;
+ (id)deviceTypeNameForDevice:(int)arg1;
+ (id)streamItemForAvailableDeviceTypes:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) ASTSettingsMenuService *settingsService; // @synthesize settingsService=_settingsService;
- (id)availabilityStreamItemForSettingsType:(long long)arg1;
- (_Bool)settingsType:(long long)arg1 isAvailableOnOneOfDeviceTypes:(id)arg2;
- (id)init;

@end


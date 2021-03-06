//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString;

@interface ABKDevice : NSObject
{
    NSString *_model;
    NSString *_operatingSystemVersion;
    NSString *_locale;
    NSString *_resolution;
    NSString *_carrier;
    NSString *_identifierForVendor;
    NSString *_identifierForAdvertising;
    NSString *_timezone;
    NSNumber *_isPushEnabled;
    NSString *_pushAuthStatus;
    NSNumber *_isAdvertisingTrackingEnabled;
    NSDictionary *_pushDisplayOptions;
}

+ (_Bool)hasUNUserNotificationCenter;
+ (id)device;
@property(copy) NSDictionary *pushDisplayOptions; // @synthesize pushDisplayOptions=_pushDisplayOptions;
@property(copy) NSNumber *isAdvertisingTrackingEnabled; // @synthesize isAdvertisingTrackingEnabled=_isAdvertisingTrackingEnabled;
@property(copy) NSString *pushAuthStatus; // @synthesize pushAuthStatus=_pushAuthStatus;
@property(copy) NSNumber *isPushEnabled; // @synthesize isPushEnabled=_isPushEnabled;
@property(copy) NSString *timezone; // @synthesize timezone=_timezone;
@property(copy) NSString *identifierForAdvertising; // @synthesize identifierForAdvertising=_identifierForAdvertising;
@property(copy) NSString *identifierForVendor; // @synthesize identifierForVendor=_identifierForVendor;
@property(copy) NSString *carrier; // @synthesize carrier=_carrier;
@property(copy) NSString *resolution; // @synthesize resolution=_resolution;
@property(copy) NSString *locale; // @synthesize locale=_locale;
@property(copy) NSString *operatingSystemVersion; // @synthesize operatingSystemVersion=_operatingSystemVersion;
@property(copy) NSString *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (id)getDeviceModelDetail;
- (void)mergeWithDevice:(id)arg1;
- (id)description;
- (id)getPushDisplayOptionsFromStorage;
- (id)getPushAuthStatusFromStorage;
- (_Bool)isRemoteNotificationEnabled;
- (id)getDeviceCarrier;
- (id)proxyForJson:(unsigned long long)arg1;
- (id)getDeviceResolution;
- (void)saveDifferenceFromDevice:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)init;

@end


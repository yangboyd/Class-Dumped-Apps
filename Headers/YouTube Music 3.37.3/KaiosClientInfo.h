//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface KaiosClientInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *appVersion; // @dynamic appVersion;
@property(copy, nonatomic) NSString *coreAppVersion; // @dynamic coreAppVersion;
@property(copy, nonatomic) NSString *deviceModel; // @dynamic deviceModel;
@property(nonatomic) _Bool hasAppVersion; // @dynamic hasAppVersion;
@property(nonatomic) _Bool hasCoreAppVersion; // @dynamic hasCoreAppVersion;
@property(nonatomic) _Bool hasDeviceModel; // @dynamic hasDeviceModel;
@property(nonatomic) _Bool hasLocale; // @dynamic hasLocale;
@property(nonatomic) _Bool hasMccMnc; // @dynamic hasMccMnc;
@property(copy, nonatomic) NSString *locale; // @dynamic locale;
@property(copy, nonatomic) NSString *mccMnc; // @dynamic mccMnc;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface STDSDeviceInformationParameter : NSObject
{
    NSString *_identifier;
    CDUnknownBlockType _permissionCheck;
    CDUnknownBlockType _valueCheck;
}

+ (id)defaultTimeZone;
+ (id)preferredLanguages;
+ (id)availableLocaleIdentifiers;
+ (id)systemLocale;
+ (id)systemFontSize;
+ (id)smallSystemFontSize;
+ (id)buttonFontSize;
+ (id)labelFontSize;
+ (id)systemFont;
+ (id)fontNamesForFamilyName;
+ (id)familyNames;
+ (id)userInterfaceIdiom;
+ (id)identiferForVendor;
+ (id)longitude;
+ (id)latitude;
+ (id)IPAddress;
+ (id)deviceName;
+ (id)screenResolution;
+ (id)advertisingID;
+ (id)timeZone;
+ (id)locale;
+ (id)OSVersion;
+ (id)OSName;
+ (id)deviceModel;
+ (id)platform;
+ (id)allParameters;
- (void).cxx_destruct;
- (void)collectIgnoringRestrictions:(_Bool)arg1 withHandler:(CDUnknownBlockType)arg2;
- (_Bool)_isRestricted;
- (_Bool)_hasPermissions;
- (id)initWithIdentifier:(id)arg1 permissionCheck:(CDUnknownBlockType)arg2 valueCheck:(CDUnknownBlockType)arg3;

@end


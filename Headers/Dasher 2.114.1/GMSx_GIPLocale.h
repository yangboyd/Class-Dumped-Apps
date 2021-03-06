//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface GMSx_GIPLocale : NSObject
{
    NSDictionary *_appleLanguageToGoogleLanguage;
    NSString *_language;
    NSString *_locale;
    NSString *_countryCode;
}

+ (id)countryCodeForLocale:(id)arg1;
+ (id)countryCodeForRegion:(id)arg1;
+ (id)countryCodeForLanguage:(id)arg1;
+ (id)legalDocsLanguageForPreferences:(id)arg1;
+ (id)currentLocaleCountryCode;
+ (id)defaultAppleToGoogleMapping;
+ (id)legalDocsLanguages;
+ (void)setCurrentLocale:(id)arg1;
+ (id)currentLocale;
+ (id)googleLocale;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(retain, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
- (id)currentGoogleCountryCode;
- (id)currentGoogleLocale;
- (id)currentGoogleLanguage;
- (id)googleLocaleWithGoogleLanguage:(id)arg1 appleLocale:(id)arg2;
- (void)recalculateLocale;
- (id)googleLanguageWithAppleLanguages:(id)arg1;
- (id)initWithLanguageMappings:(id)arg1;
- (id)init;

@end


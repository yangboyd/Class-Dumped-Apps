//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _TtC13LocaleService24LocaleServiceObjCAdapter : NSObject
{
    // Error parsing type: , name: localeService
}

+ (id)shared;
- (void).cxx_destruct;
- (id)init;
- (id)localizedCountryNameWithRegionCode:(id)arg1;
@property(nonatomic, readonly) _Bool hasKoreaIP;
@property(nonatomic, readonly) _Bool isChina;
@property(nonatomic, readonly) _Bool hasChinaIP;
@property(nonatomic, readonly) _Bool hasChinaRegion;
@property(nonatomic) _Bool shouldSimulateChinaIP;
@property(nonatomic, readonly) NSString *currentCountryFromIP;
@property(nonatomic, copy) NSString *currentCountryOverride;
@property(nonatomic, readonly) NSString *currentCountryFromLocale;

@end


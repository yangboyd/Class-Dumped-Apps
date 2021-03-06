//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface HMEChromecastMediaService : NSObject <NSCopying>
{
    _Bool _isRequired;
    _Bool _isDefault;
    _Bool _isInstalled;
    _Bool _installBeforeSetupComplete;
    _Bool _isEntitlementEnabled;
    _Bool _isEntitled;
    _Bool _isRequiredService;
    _Bool _isFeaturedService;
    NSString *_title;
    NSString *_packageName;
    NSString *_bannerUrl;
    NSString *_iconUrl;
    NSNumber *_installSize;
    NSString *_developerName;
    NSString *_promoDescription;
    NSString *_castAppId;
    NSString *_appId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isFeaturedService; // @synthesize isFeaturedService=_isFeaturedService;
@property(nonatomic) _Bool isRequiredService; // @synthesize isRequiredService=_isRequiredService;
@property(nonatomic) _Bool isEntitled; // @synthesize isEntitled=_isEntitled;
@property(nonatomic) _Bool isEntitlementEnabled; // @synthesize isEntitlementEnabled=_isEntitlementEnabled;
@property(nonatomic) _Bool installBeforeSetupComplete; // @synthesize installBeforeSetupComplete=_installBeforeSetupComplete;
@property(nonatomic) _Bool isInstalled; // @synthesize isInstalled=_isInstalled;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(copy, nonatomic) NSString *castAppId; // @synthesize castAppId=_castAppId;
@property(copy, nonatomic) NSString *promoDescription; // @synthesize promoDescription=_promoDescription;
@property(nonatomic) _Bool isDefault; // @synthesize isDefault=_isDefault;
@property(nonatomic) _Bool isRequired; // @synthesize isRequired=_isRequired;
@property(copy, nonatomic) NSString *developerName; // @synthesize developerName=_developerName;
@property(copy, nonatomic) NSNumber *installSize; // @synthesize installSize=_installSize;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(copy, nonatomic) NSString *bannerUrl; // @synthesize bannerUrl=_bannerUrl;
@property(copy, nonatomic) NSString *packageName; // @synthesize packageName=_packageName;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SMIMarketInfoModelProtocol-Protocol.h"

@class NSArray, NSString;

@interface _SMIPluginMarketModel : NSObject <SMIMarketInfoModelProtocol>
{
    _Bool _internationalShopping;
    NSString *_name;
    NSString *_obfuscatedId;
    NSString *_configDomain;
    NSString *_designator;
    NSString *_primaryLocale;
    NSArray *_supportedLocales;
    NSArray *_aisSupportedLocales;
}

@property(retain, nonatomic) NSArray *aisSupportedLocales; // @synthesize aisSupportedLocales=_aisSupportedLocales;
@property(retain, nonatomic) NSArray *supportedLocales; // @synthesize supportedLocales=_supportedLocales;
@property(retain, nonatomic) NSString *primaryLocale; // @synthesize primaryLocale=_primaryLocale;
@property(retain, nonatomic) NSString *designator; // @synthesize designator=_designator;
@property(retain, nonatomic) NSString *configDomain; // @synthesize configDomain=_configDomain;
@property(nonatomic) _Bool internationalShopping; // @synthesize internationalShopping=_internationalShopping;
@property(retain, nonatomic) NSString *obfuscatedId; // @synthesize obfuscatedId=_obfuscatedId;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


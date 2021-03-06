//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface NLWirelessRegConfig : NSObject
{
    NSString *_RegDomain;
    long long _OpLocation;
    NSMutableArray *_SupportedRegDomains;
}

+ (id)createUsing:(const struct WirelessRegConfig *)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *SupportedRegDomains; // @synthesize SupportedRegDomains=_SupportedRegDomains;
@property(nonatomic) long long OpLocation; // @synthesize OpLocation=_OpLocation;
@property(retain, nonatomic) NSString *RegDomain; // @synthesize RegDomain=_RegDomain;
- (int)getSupportedRegDomain:(id *)arg1;
- (int)getOpLocation:(long long *)arg1;
- (int)getRegDomain:(id *)arg1;
- (int)toWirelessOperatingLocation:(long long)arg1;
- (struct WirelessRegConfig)toWirelessRegConfig;
- (id)initWith:(const struct WirelessRegConfig *)arg1;
- (id)initWithSupportedRegDomains:(id)arg1 opLocation:(long long)arg2 RegDomain:(id)arg3;
- (id)initWithRegDomain:(id)arg1 opLocation:(long long)arg2;

@end


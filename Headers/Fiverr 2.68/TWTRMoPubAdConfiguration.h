//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MPNativeAdRequestTargeting, MPStaticNativeAdRendererSettings, NSString;

@interface TWTRMoPubAdConfiguration : NSObject
{
    NSString *_adUnitID;
    NSString *_keywords;
    MPNativeAdRequestTargeting *_adRequestTargeting;
    MPStaticNativeAdRendererSettings *_adRendererSettings;
}

+ (void)initialize;
@property(readonly, nonatomic) MPStaticNativeAdRendererSettings *adRendererSettings; // @synthesize adRendererSettings=_adRendererSettings;
@property(readonly, nonatomic) MPNativeAdRequestTargeting *adRequestTargeting; // @synthesize adRequestTargeting=_adRequestTargeting;
@property(readonly, copy, nonatomic) NSString *keywords; // @synthesize keywords=_keywords;
@property(readonly, copy, nonatomic) NSString *adUnitID; // @synthesize adUnitID=_adUnitID;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (_Bool)isEqualToConfig:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)keywordsWithAttribution;
- (id)adRendererConfiguration;
- (void)setupMoPubClassesIfPossible;
- (id)initWithAdUnitID:(id)arg1 keywords:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AWEFilterCacheKeys : NSObject
{
    NSString *_businessName;
    NSString *_appliedFilterIDKey;
    NSString *_effectConfigurationPrefix;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *effectConfigurationPrefix; // @synthesize effectConfigurationPrefix=_effectConfigurationPrefix;
@property(copy, nonatomic) NSString *appliedFilterIDKey; // @synthesize appliedFilterIDKey=_appliedFilterIDKey;
@property(copy, nonatomic) NSString *businessName; // @synthesize businessName=_businessName;
@property(readonly, copy, nonatomic) NSString *selectedTimeStampKey;
- (id)p_cacheKey:(id)arg1 withPrefix:(id)arg2;
- (id)initWithBusinessName:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface MSAFeatureFlags : NSObject
{
    NSDictionary *_defaultCollection;
    NSMutableDictionary *_debugOverrideCollection;
}

+ (id)stringifyFeaturesEnum:(int)arg1;
+ (id)instance;
- (void).cxx_destruct;
- (void)resetFlags;
- (void)setValue:(_Bool)arg1 forFeature:(int)arg2;
- (id)initializeDefaultCollection;
- (_Bool)isFeatureEnabled:(int)arg1;
- (id)initInternal;
- (id)init;

@end


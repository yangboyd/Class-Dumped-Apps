//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AriaObjC/NSObject-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSString;

@protocol ACTIStatsCounter <NSObject>
- (void)reset;
- (unsigned long long)currentCount;
- (NSMutableDictionary *)getCurrentStatsProperties;
- (NSMutableDictionary *)getStatsPropertiesAndReset;
- (NSDictionary *)getStartAndStopAccumulatedStatsPropertiesAndReset;
- (void)updateStats:(NSDictionary *)arg1;
- (void)setStatsCount:(NSString *)arg1 priority:(int)arg2;
- (id)initWithName:(NSString *)arg1;
@end


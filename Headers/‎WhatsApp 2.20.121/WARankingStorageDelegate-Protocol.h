//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSData, NSSet, NSString, WAStorage;

@protocol WARankingStorageDelegate
- (NSString *)debugStringForKey:(NSData *)arg1;
- (NSData *)rankingStorage:(WAStorage *)arg1 needsNewKeyForMetricSetWithKey:(NSData *)arg2;
- (NSSet *)rankingStorage:(WAStorage *)arg1 needsLinksForMetricSetWithKey:(NSData *)arg2;
@end


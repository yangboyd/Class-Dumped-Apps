//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BDImageCacheConfig, NSData, NSString;

@protocol BDDiskCache <NSObject>
+ (void)setExtendedObject:(id)arg1 toData:(NSData *)arg2;
+ (id)getExtendedObjectFromData:(NSData *)arg1;
@property(readonly, nonatomic) NSString *path;
@property(readonly, nonatomic) _Bool trimDiskInBG;
- (unsigned long long)totalSize;
- (unsigned long long)totalCount;
- (NSString *)cachePathForKey:(NSString *)arg1;
- (void)removeExpiredData;
- (void)removeAllDataWithBlock:(void (^)(void))arg1;
- (void)removeAllData;
- (void)removeDataForKey:(NSString *)arg1 withBlock:(void (^)(NSString *))arg2;
- (void)removeDataForKey:(NSString *)arg1;
- (void)setData:(NSData *)arg1 forKey:(NSString *)arg2 withBlock:(void (^)(void))arg3;
- (void)setData:(NSData *)arg1 forKey:(NSString *)arg2;
- (void)dataForKey:(NSString *)arg1 withBlock:(void (^)(NSString *, NSData *))arg2;
- (NSData *)dataForKey:(NSString *)arg1;
- (void)containsDataForKey:(NSString *)arg1 withBlock:(void (^)(NSString *, _Bool))arg2;
- (_Bool)containsDataForKey:(NSString *)arg1;
- (void)setConfig:(BDImageCacheConfig *)arg1;
- (id)initWithCachePath:(NSString *)arg1;
@end


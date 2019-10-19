//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSObject, NSString;
@protocol OS_dispatch_queue, SPTProductStateObserver;

@protocol SPTProductState <NSObject>
@property(nonatomic) __weak NSDictionary *overrides;
@property(nonatomic) __weak NSDictionary *originalValues;
@property(readonly, nonatomic) __weak NSDictionary *values;
- (void)writeStringToBackend:(NSString *)arg1 forKey:(NSString *)arg2;
- (NSString *)objectForKeyedSubscript:(NSString *)arg1;
- (NSString *)stringForKey:(NSString *)arg1;
- (void)removeObserver:(id <SPTProductStateObserver>)arg1;
- (void)addObserver:(id <SPTProductStateObserver>)arg1 on:(NSObject<OS_dispatch_queue> *)arg2;
@end


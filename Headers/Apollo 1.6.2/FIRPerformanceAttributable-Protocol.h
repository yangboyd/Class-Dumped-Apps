//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol FIRPerformanceAttributable <NSObject>
@property(readonly, nonatomic) NSDictionary *attributes;
- (void)removeAttribute:(NSString *)arg1;
- (NSString *)valueForAttribute:(NSString *)arg1;
- (void)setValue:(NSString *)arg1 forAttribute:(NSString *)arg2;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol MMKLogging <NSObject>
@property(nonatomic) unsigned long long logLevel;
- (void)logFatal:(NSString *)arg1;
- (void)logError:(NSString *)arg1;
- (void)logWarn:(NSString *)arg1;
- (void)logInfo:(NSString *)arg1;
- (void)logDebug:(NSString *)arg1;
- (void)logTrace:(NSString *)arg1;
@end


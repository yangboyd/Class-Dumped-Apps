//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ZDKCoreLogger : NSObject
{
}

+ (void)verbose:(id)arg1;
+ (void)debug:(id)arg1;
+ (void)info:(id)arg1;
+ (void)warn:(id)arg1;
+ (void)error:(id)arg1;
+ (void)logWithLevel:(long long)arg1 loggingBlock:(CDUnknownBlockType)arg2;
+ (void)setEnabled:(_Bool)arg1;
+ (_Bool)enabled;
+ (void)setLogLevel:(long long)arg1;
+ (long long)logLevel;
- (id)init;

@end


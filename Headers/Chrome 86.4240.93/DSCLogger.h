//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DSCLogger : NSObject
{
}

+ (id)sharedInstance;
- (BOOL)tagForLevel:(long long)arg1;
- (void)assertWithCondition:(const char *)arg1 file:(const char *)arg2 line:(int)arg3 function:(const char *)arg4 stack:(id)arg5 message:(id)arg6;
- (void)logWithFile:(const char *)arg1 line:(int)arg2 function:(const char *)arg3 level:(long long)arg4 message:(id)arg5;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@class NSString, XPTTrace, XPTTraceId;
@protocol ComGoogleCommonUtilConcurrentListenableFuture;

@protocol XPTTraceSampler <JavaObject>
- (_Bool)isTracing;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)cancel;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)stopWithXPTTraceId:(XPTTraceId *)arg1;
- (XPTTraceId *)startAtWithNSString:(NSString *)arg1 withInt:(int)arg2 withDouble:(double)arg3 withDouble:(double)arg4;
- (XPTTrace *)startTraceAtWithNSString:(NSString *)arg1 withInt:(int)arg2 withDouble:(double)arg3 withDouble:(double)arg4;
- (XPTTraceId *)startWithNSString:(NSString *)arg1 withInt:(int)arg2;
- (XPTTrace *)startTraceWithNSString:(NSString *)arg1 withInt:(int)arg2;
@end


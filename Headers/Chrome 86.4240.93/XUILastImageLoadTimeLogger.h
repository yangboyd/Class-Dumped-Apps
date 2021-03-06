//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol OS_dispatch_queue, XUILastImageLoadTimeLoggerDelegate;

@interface XUILastImageLoadTimeLogger : NSObject
{
    NSMutableSet *_visibleImages;
    NSMutableSet *_loadedImages;
    _Bool _hasLogged;
    long long _requestID;
    NSObject<OS_dispatch_queue> *_loggingDispatchQueue;
    id <XUILastImageLoadTimeLoggerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <XUILastImageLoadTimeLoggerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)tryLogEvent;
- (void)logImageEventWithType:(unsigned long long)arg1 sender:(id)arg2;
- (void)resetWithRequestID:(long long)arg1;
- (id)init;

@end


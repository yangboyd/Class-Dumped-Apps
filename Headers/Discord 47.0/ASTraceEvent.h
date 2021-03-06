//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface ASTraceEvent : NSObject
{
    NSArray *_backtrace;
    NSString *_message;
    double _timestamp;
    NSString *_objectDescription;
    NSString *_threadDescription;
}

@property(readonly, nonatomic) NSString *threadDescription; // @synthesize threadDescription=_threadDescription;
@property(readonly, nonatomic) NSString *objectDescription; // @synthesize objectDescription=_objectDescription;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, nonatomic) NSArray *backtrace; // @synthesize backtrace=_backtrace;
- (void).cxx_destruct;
- (id)description;
- (id)initWithBacktrace:(id)arg1 format:(id)arg2 arguments:(char *)arg3;

@end


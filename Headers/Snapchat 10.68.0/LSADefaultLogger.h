//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "LSALogger-Protocol.h"

@class NSString;

@interface LSADefaultLogger : NSObject <LSALogger>
{
    struct Logger *_implementation;
}

- (int)logAsynchronous:(_Bool)arg1 flag:(unsigned int)arg2 file:(const char *)arg3 function:(const char *)arg4 line:(unsigned int)arg5 format:(const char *)arg6 args:(char *)arg7;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


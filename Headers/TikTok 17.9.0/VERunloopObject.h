//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IESMMObject.h"

@class NSObject;
@protocol OS_dispatch_semaphore;

@interface VERunloopObject : IESMMObject
{
    int __blockCount;
    NSObject<OS_dispatch_semaphore> *_sem;
}

@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *sem; // @synthesize sem=_sem;
- (void).cxx_destruct;
- (void)runSync:(CDUnknownBlockType)arg1;
- (void)runAsync:(CDUnknownBlockType)arg1;
- (id)initWithGCDName:(id)arg1;

@end


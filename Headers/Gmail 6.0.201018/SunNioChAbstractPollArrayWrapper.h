//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SunNioChAllocatedNativeObject;

@interface SunNioChAbstractPollArrayWrapper : NSObject
{
    SunNioChAllocatedNativeObject *pollArray_;
    int totalChannels_;
    long long pollArrayAddress_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)putDescriptorWithInt:(int)arg1 withInt:(int)arg2;
- (void)putReventOpsWithInt:(int)arg1 withInt:(int)arg2;
- (void)putEventOpsWithInt:(int)arg1 withInt:(int)arg2;
- (int)getDescriptorWithInt:(int)arg1;
- (int)getReventOpsWithInt:(int)arg1;
- (int)getEventOpsWithInt:(int)arg1;
- (id)init;

@end


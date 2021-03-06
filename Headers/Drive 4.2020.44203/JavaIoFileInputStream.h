//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaIoInputStream.h"

@class DalvikSystemCloseGuard, JavaIoFileDescriptor, JavaNioChannelsFileChannel, NSString;

@interface JavaIoFileInputStream : JavaIoInputStream
{
    JavaIoFileDescriptor *fd_;
    NSString *path_;
    JavaNioChannelsFileChannel *channel_;
    id closeLock_;
    // Error parsing type: AB, name: closed_
    _Bool isFdOwner_;
    DalvikSystemCloseGuard *guard_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)java_finalize;
- (id)getChannel;
- (id)getFD;
- (void)close;
- (int)available;
- (long long)skipWithLong:(long long)arg1;
- (int)readWithByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (int)readWithByteArray:(id)arg1;
- (int)read;
- (id)initWithJavaIoFileDescriptor:(id)arg1 withBoolean:(_Bool)arg2;
- (id)initWithJavaIoFileDescriptor:(id)arg1;
- (id)initWithJavaIoFile:(id)arg1;
- (id)initWithNSString:(id)arg1;

@end


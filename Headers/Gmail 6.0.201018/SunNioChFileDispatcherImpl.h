//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SunNioChFileDispatcher.h"

@interface SunNioChFileDispatcherImpl : SunNioChFileDispatcher
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)closeIntFDWithInt:(int)arg1;
+ (void)preClose0WithJavaIoFileDescriptor:(id)arg1;
+ (void)close0WithJavaIoFileDescriptor:(id)arg1;
+ (void)release0WithJavaIoFileDescriptor:(id)arg1 withLong:(long long)arg2 withLong:(long long)arg3;
+ (int)lock0WithJavaIoFileDescriptor:(id)arg1 withBoolean:(_Bool)arg2 withLong:(long long)arg3 withLong:(long long)arg4 withBoolean:(_Bool)arg5;
+ (long long)size0WithJavaIoFileDescriptor:(id)arg1;
+ (int)truncate0WithJavaIoFileDescriptor:(id)arg1 withLong:(long long)arg2;
+ (int)force0WithJavaIoFileDescriptor:(id)arg1 withBoolean:(_Bool)arg2;
+ (long long)writev0WithJavaIoFileDescriptor:(id)arg1 withLong:(long long)arg2 withInt:(int)arg3;
+ (int)pwrite0WithJavaIoFileDescriptor:(id)arg1 withLong:(long long)arg2 withInt:(int)arg3 withLong:(long long)arg4;
+ (int)write0WithJavaIoFileDescriptor:(id)arg1 withLong:(long long)arg2 withInt:(int)arg3;
+ (long long)readv0WithJavaIoFileDescriptor:(id)arg1 withLong:(long long)arg2 withInt:(int)arg3;
+ (int)pread0WithJavaIoFileDescriptor:(id)arg1 withLong:(long long)arg2 withInt:(int)arg3 withLong:(long long)arg4;
+ (int)read0WithJavaIoFileDescriptor:(id)arg1 withLong:(long long)arg2 withInt:(int)arg3;
- (_Bool)transferToDirectlyNeedsPositionLock;
- (_Bool)canTransferToDirectlyWithJavaNioChannelsSelectableChannel:(id)arg1;
- (id)duplicateForMappingWithJavaIoFileDescriptor:(id)arg1;
- (void)preCloseWithJavaIoFileDescriptor:(id)arg1;
- (void)closeWithJavaIoFileDescriptor:(id)arg1;
- (void)release__WithJavaIoFileDescriptor:(id)arg1 withLong:(long long)arg2 withLong:(long long)arg3;
- (int)lockWithJavaIoFileDescriptor:(id)arg1 withBoolean:(_Bool)arg2 withLong:(long long)arg3 withLong:(long long)arg4 withBoolean:(_Bool)arg5;
- (long long)sizeWithJavaIoFileDescriptor:(id)arg1;
- (int)truncateWithJavaIoFileDescriptor:(id)arg1 withLong:(long long)arg2;
- (int)forceWithJavaIoFileDescriptor:(id)arg1 withBoolean:(_Bool)arg2;
- (long long)writevWithJavaIoFileDescriptor:(id)arg1 withLong:(long long)arg2 withInt:(int)arg3;
- (int)pwriteWithJavaIoFileDescriptor:(id)arg1 withLong:(long long)arg2 withInt:(int)arg3 withLong:(long long)arg4;
- (int)writeWithJavaIoFileDescriptor:(id)arg1 withLong:(long long)arg2 withInt:(int)arg3;
- (long long)readvWithJavaIoFileDescriptor:(id)arg1 withLong:(long long)arg2 withInt:(int)arg3;
- (int)preadWithJavaIoFileDescriptor:(id)arg1 withLong:(long long)arg2 withInt:(int)arg3 withLong:(long long)arg4;
- (int)readWithJavaIoFileDescriptor:(id)arg1 withLong:(long long)arg2 withInt:(int)arg3;
- (id)initPackagePrivate;
- (id)initPackagePrivateWithBoolean:(_Bool)arg1;

@end


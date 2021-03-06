//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaIoCloseable-Protocol.h"
#import "JavaIoDataInput-Protocol.h"
#import "JavaIoDataOutput-Protocol.h"

@class DalvikSystemCloseGuard, IOSByteArray, JavaIoFileDescriptor, JavaNioChannelsFileChannel, NSString;

@interface JavaIoRandomAccessFile : NSObject <JavaIoDataOutput, JavaIoDataInput, JavaIoCloseable>
{
    DalvikSystemCloseGuard *guard_;
    IOSByteArray *scratch_;
    int flushAfterWrite_;
    int mode_;
    JavaIoFileDescriptor *fd_;
    JavaNioChannelsFileChannel *channel_;
    _Bool rw_;
    NSString *path_;
    id closeLock_;
    // Error parsing type: AB, name: closed_
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)java_finalize;
- (void)writeUTFWithNSString:(id)arg1;
- (void)writeCharsWithNSString:(id)arg1;
- (void)writeBytesWithNSString:(id)arg1;
- (void)writeDoubleWithDouble:(double)arg1;
- (void)writeFloatWithFloat:(float)arg1;
- (void)writeLongWithLong:(long long)arg1;
- (void)writeIntWithInt:(int)arg1;
- (void)writeCharWithInt:(int)arg1;
- (void)writeShortWithInt:(int)arg1;
- (void)writeByteWithInt:(int)arg1;
- (void)writeBooleanWithBoolean:(_Bool)arg1;
- (id)readUTF;
- (id)readLine;
- (double)readDouble;
- (float)readFloat;
- (long long)readLong;
- (int)readInt;
- (unsigned short)readChar;
- (int)readUnsignedShort;
- (short)readShort;
- (int)readUnsignedByte;
- (BOOL)readByte;
- (_Bool)readBoolean;
- (void)close;
- (void)setLengthWithLong:(long long)arg1;
- (long long)length;
- (void)seekWithLong:(long long)arg1;
- (long long)getFilePointer;
- (void)writeWithByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (void)writeWithByteArray:(id)arg1;
- (void)writeBytesWithByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (void)writeWithInt:(int)arg1;
- (int)skipBytesWithInt:(int)arg1;
- (void)readFullyWithByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (void)readFullyWithByteArray:(id)arg1;
- (int)readWithByteArray:(id)arg1;
- (int)readWithByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (int)readBytesWithByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (int)read;
- (id)getChannel;
- (id)getFD;
- (void)maybeSync;
- (id)initWithJavaIoFile:(id)arg1 withNSString:(id)arg2;
- (id)initWithNSString:(id)arg1 withNSString:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaIoDataOutput-Protocol.h"
#import "JavaLangAutoCloseable-Protocol.h"
#import "JavaObject-Protocol.h"

@class IOSByteArray;

@protocol JavaIoObjectOutput <JavaIoDataOutput, JavaLangAutoCloseable, JavaObject>
- (void)writeObjectWithId:(id)arg1;
- (void)writeWithInt:(int)arg1;
- (void)writeWithByteArray:(IOSByteArray *)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (void)writeWithByteArray:(IOSByteArray *)arg1;
- (void)flush;
- (void)close;
@end


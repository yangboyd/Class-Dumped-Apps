//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IOSLongArray;

@interface JavaUtilStreamAbstractSpinedBuffer : NSObject
{
    int initialChunkPower_;
    int elementIndex_;
    int spineIndex_;
    IOSLongArray *priorElementCount_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)clear;
- (int)chunkSizeWithInt:(int)arg1;
- (long long)count;
- (_Bool)isEmpty;
- (id)initPackagePrivateWithInt:(int)arg1;
- (id)initPackagePrivate;

@end


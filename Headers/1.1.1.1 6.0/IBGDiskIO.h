//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IBGDiskIO : NSObject
{
}

+ (id)defaultIO;
- (id)sizeTokens;
- (_Bool)isFileAtPathLargerThan50MB:(id)arg1;
- (id)fileSizeAtPath:(id)arg1;
- (id)imageFromFileInPath:(id)arg1;
- (id)readFileAtPath:(id)arg1 error:(id *)arg2;
- (void)forceWriteData:(id)arg1 toFile:(id)arg2;
- (void)writeData:(id)arg1 toFile:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;

@end


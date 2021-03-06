//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileManager, NSInputStream, NSOutputStream, NSURL;

@interface DSCCacheFile : NSObject
{
    NSURL *_fileURL;
    NSURL *_tempFileURL;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    NSFileManager *_fileManager;
}

+ (id)cacheFileWithURL:(id)arg1;
- (void).cxx_destruct;
- (void)closeAndRevert;
- (void)closeAndDelete;
- (void)close;
- (id)openForRead;
- (id)openForWrite;
@property(readonly, nonatomic) _Bool exists;
@property(readonly, nonatomic) unsigned long long fileSize;
@property(readonly, nonatomic) NSURL *fileURL;
- (id)initWithURL:(id)arg1;

@end


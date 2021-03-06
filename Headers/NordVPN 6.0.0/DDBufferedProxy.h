//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSProxy.h>

@class DDFileLogger, NSOutputStream;

@interface DDBufferedProxy : NSProxy
{
    DDFileLogger *_fileLogger;
    NSOutputStream *_buffer;
    unsigned long long _maxBufferSizeBytes;
    unsigned long long _currentBufferSizeBytes;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long currentBufferSizeBytes; // @synthesize currentBufferSizeBytes=_currentBufferSizeBytes;
@property(nonatomic) unsigned long long maxBufferSizeBytes; // @synthesize maxBufferSizeBytes=_maxBufferSizeBytes;
@property(retain, nonatomic) NSOutputStream *buffer; // @synthesize buffer=_buffer;
@property(retain, nonatomic) DDFileLogger *fileLogger; // @synthesize fileLogger=_fileLogger;
- (void)forwardInvocation:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)unwrapFromBuffer;
- (id)wrapWithBuffer;
- (void)flush;
- (void)logMessage:(id)arg1;
- (void)lt_sendBufferedDataToFileLogger;
- (void)flushBuffer;
- (void)dealloc;
- (id)initWithFileLogger:(id)arg1;

@end


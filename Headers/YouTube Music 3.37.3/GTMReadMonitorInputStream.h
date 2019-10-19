//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSInputStream.h>

#import "NSStreamDelegate-Protocol.h"

@class NSArray, NSString, NSThread;

@interface GTMReadMonitorInputStream : NSInputStream <NSStreamDelegate>
{
    NSInputStream *_inputStream;
    NSThread *_thread;
    NSArray *_runLoopModes;
    id _readDelegate;
    SEL _readSelector;
}

+ (id)inputStreamWithStream:(id)arg1;
+ (void)forwardInvocation:(id)arg1;
+ (id)methodSignatureForSelector:(SEL)arg1;
@property(retain) NSArray *runLoopModes; // @synthesize runLoopModes=_runLoopModes;
@property SEL readSelector; // @synthesize readSelector=_readSelector;
@property __weak id readDelegate; // @synthesize readDelegate=_readDelegate;
- (void).cxx_destruct;
- (id)streamError;
- (unsigned long long)streamStatus;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;
- (id)propertyForKey:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)close;
- (void)open;
- (_Bool)hasBytesAvailable;
- (_Bool)getBuffer:(char **)arg1 length:(unsigned long long *)arg2;
- (void)invokeReadSelectorWithBuffer:(id)arg1;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (id)init;
- (id)initWithStream:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


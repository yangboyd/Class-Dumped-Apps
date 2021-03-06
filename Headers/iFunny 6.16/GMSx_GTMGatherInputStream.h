//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSInputStream.h>

#import <Funny/NSStreamDelegate-Protocol.h>

@class NSArray, NSString;
@protocol NSStreamDelegate;

@interface GMSx_GTMGatherInputStream : NSInputStream <NSStreamDelegate>
{
    NSArray *_dataArray;
    unsigned long long _arrayIndex;
    long long _dataOffset;
    unsigned long long _streamStatus;
    id <NSStreamDelegate> _delegate;
}

+ (id)streamWithArray:(id)arg1;
- (void).cxx_destruct;
- (void)setAbsoluteOffset:(long long)arg1;
- (long long)absoluteOffset;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (_Bool)hasBytesAvailable;
- (_Bool)getBuffer:(char **)arg1 length:(unsigned long long *)arg2;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
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
- (id)initWithArray:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


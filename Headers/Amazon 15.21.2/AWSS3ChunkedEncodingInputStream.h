//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSInputStream.h>

#import "NSStreamDelegate-Protocol.h"

@class NSData, NSDate, NSMutableData, NSString;
@protocol NSStreamDelegate;

@interface AWSS3ChunkedEncodingInputStream : NSInputStream <NSStreamDelegate>
{
    _Bool _endOfStream;
    id <NSStreamDelegate> _delegate;
    long long _totalLengthOfChunkSignatureSent;
    NSInputStream *_stream;
    NSMutableData *_chunkData;
    unsigned long long _location;
    NSDate *_date;
    NSString *_scope;
    NSString *_priorSha256;
    NSData *_kSigning;
}

+ (unsigned long long)computeContentLengthForChunkedData:(unsigned long long)arg1;
+ (unsigned long long)oneChunkedDataSize:(unsigned long long)arg1;
@property(retain, nonatomic) NSData *kSigning; // @synthesize kSigning=_kSigning;
@property(retain, nonatomic) NSString *priorSha256; // @synthesize priorSha256=_priorSha256;
@property(retain, nonatomic) NSString *scope; // @synthesize scope=_scope;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) _Bool endOfStream; // @synthesize endOfStream=_endOfStream;
@property(nonatomic) unsigned long long location; // @synthesize location=_location;
@property(retain, nonatomic) NSMutableData *chunkData; // @synthesize chunkData=_chunkData;
@property(retain, nonatomic) NSInputStream *stream; // @synthesize stream=_stream;
@property long long totalLengthOfChunkSignatureSent; // @synthesize totalLengthOfChunkSignatureSent=_totalLengthOfChunkSignatureSent;
- (id)delegate;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)streamError;
- (unsigned long long)streamStatus;
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;
- (id)propertyForKey:(id)arg1;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)close;
- (void)open;
- (_Bool)getBuffer:(char **)arg1 length:(unsigned long long *)arg2;
- (_Bool)hasBytesAvailable;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (id)dataToHexString:(id)arg1;
- (id)getSignedChunk:(id)arg1;
- (_Bool)nextChunk;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (id)initWithInputStream:(id)arg1 date:(id)arg2 scope:(id)arg3 kSigning:(id)arg4 headerSignature:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


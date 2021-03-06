//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Core/NSCopying-Protocol.h>

@interface WAMediaCipherSidecarConfig : NSObject <NSCopying>
{
    unsigned long long _currentChunk;
}

+ (id)fixedLengthConfigForLength:(unsigned long long)arg1;
+ (id)configForScanLengths:(id)arg1;
@property(readonly, nonatomic) unsigned long long currentChunk; // @synthesize currentChunk=_currentChunk;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)moveToNextChunk;
- (_Bool)hasNextChunk;
@property(readonly, nonatomic) unsigned long long currentChunkLength;
- (id)initWithCurrentChunk:(unsigned long long)arg1;

@end


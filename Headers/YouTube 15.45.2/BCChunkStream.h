//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSMutableData;
@protocol BCChunkStreamDelegate;

@interface BCChunkStream : NSObject
{
    unsigned long long _chunkOffset;
    struct _NSRange _chunkRange;
    NSMutableData *_chunkData;
    id <BCChunkStreamDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *chunkData; // @synthesize chunkData=_chunkData;
@property(nonatomic) __weak id <BCChunkStreamDelegate> delegate; // @synthesize delegate=_delegate;
- (struct _NSRange)readChunkRange;
- (void)write:(id)arg1;
- (void)reset;
- (id)init;

@end


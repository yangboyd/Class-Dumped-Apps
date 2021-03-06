//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface GMSx_GTMMIMEDocument : NSObject
{
    NSMutableArray *_parts;
    unsigned long long _length;
    NSString *_boundary;
    unsigned int _randomSeed;
}

+ (id)headersWithData:(id)arg1;
+ (unsigned long long)findBytesWithNeedle:(const char *)arg1 needleLength:(unsigned long long)arg2 haystack:(const char *)arg3 haystackLength:(unsigned long long)arg4 foundOffset:(unsigned long long *)arg5;
+ (void)searchData:(id)arg1 targetBytes:(const void *)arg2 targetLength:(unsigned long long)arg3 foundOffsets:(id *)arg4 foundBlockNumbers:(id *)arg5;
+ (void)searchData:(id)arg1 targetBytes:(const void *)arg2 targetLength:(unsigned long long)arg3 foundOffsets:(id *)arg4;
+ (id)MIMEPartsWithBoundary:(id)arg1 data:(id)arg2;
+ (id)dataWithHeaders:(id)arg1;
+ (id)MIMEDocument;
- (void).cxx_destruct;
- (void)generateDispatchData:(id *)arg1 length:(unsigned long long *)arg2 boundary:(id *)arg3;
- (void)generateInputStream:(id *)arg1 length:(unsigned long long *)arg2 boundary:(id *)arg3;
- (void)generateDataArray:(id)arg1 length:(unsigned long long *)arg2 boundary:(id *)arg3;
@property(copy, nonatomic) NSString *boundary;
- (unsigned int)random;
- (void)seedRandomWith:(unsigned int)arg1;
- (void)addPartWithHeaders:(id)arg1 body:(id)arg2;
- (id)description;
- (id)init;

@end


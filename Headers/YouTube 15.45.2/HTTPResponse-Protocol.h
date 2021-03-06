//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSData, NSDictionary;

@protocol HTTPResponse
- (_Bool)isDone;
- (NSData *)readDataOfLength:(unsigned long long)arg1;
- (void)setOffset:(unsigned long long)arg1;
- (unsigned long long)offset;
- (unsigned long long)contentLength;

@optional
- (void)connectionDidClose;
- (_Bool)isChunked;
- (NSDictionary *)httpHeaders;
- (long long)status;
- (_Bool)delayResponseHeaders;
@end


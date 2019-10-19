//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface MLDataScanner : NSObject
{
    NSData *_data;
    long long _position;
}

@property(nonatomic) long long position; // @synthesize position=_position;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *unreadData;
@property(readonly, nonatomic) unsigned char peek;
@property(readonly, nonatomic, getter=isAtEnd) _Bool atEnd;
- (_Bool)skipBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (_Bool)skipData:(id)arg1;
- (_Bool)scanUpToNewLineOrEndIntoData:(id *)arg1;
- (_Bool)scanUpToByte:(unsigned char)arg1 intoData:(id *)arg2;
- (_Bool)scanUpToAnyByteInData:(id)arg1 scanAllTerminalBytes:(_Bool)arg2 includeTerminator:(_Bool)arg3 intoData:(id *)arg4;
- (id)initWithData:(id)arg1;
- (_Bool)scanHLSSegmentIntoDuration:(double *)arg1 URLData:(id *)arg2 error:(id *)arg3;

@end


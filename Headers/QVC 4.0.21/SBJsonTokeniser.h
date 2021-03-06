//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SBJsonUTF8Stream;

@interface SBJsonTokeniser : NSObject
{
    NSString *_error;
    SBJsonUTF8Stream *_stream;
}

- (void).cxx_destruct;
@property(retain) SBJsonUTF8Stream *stream; // @synthesize stream=_stream;
@property(copy) NSString *error; // @synthesize error=_error;
- (int)getToken:(id *)arg1;
- (int)getNumberToken:(id *)arg1;
- (int)getStringToken:(id *)arg1;
- (_Bool)decodeHexQuad:(unsigned short *)arg1;
- (_Bool)decodeEscape:(unsigned short)arg1 into:(unsigned short *)arg2;
- (int)match:(const char *)arg1 length:(unsigned long long)arg2 retval:(int)arg3;
- (void)appendData:(id)arg1;
- (id)init;

@end


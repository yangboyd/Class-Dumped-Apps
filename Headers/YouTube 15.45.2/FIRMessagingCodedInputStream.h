//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface FIRMessagingCodedInputStream : NSObject
{
    NSData *_buffer;
    CDStruct_9d607ac6 _state;
}

- (void).cxx_destruct;
@property(nonatomic) CDStruct_9d607ac6 state; // @synthesize state=_state;
@property(retain, nonatomic) NSData *buffer; // @synthesize buffer=_buffer;
- (id)readDataWithLength:(unsigned int)arg1;
- (_Bool)readLength:(int *)arg1;
- (_Bool)readTag:(char *)arg1;
@property(readonly, nonatomic) unsigned long long offset;
- (id)initWithData:(id)arg1;

@end


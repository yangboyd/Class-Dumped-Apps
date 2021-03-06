//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/IGDrawMapBufferBase.h>

#import <InstagramAppCoreFramework/IGDrawMappedBuffer-Protocol.h>

@class IGContext, NSString;

@interface IGDrawMapBufferExtended : IGDrawMapBufferBase <IGDrawMappedBuffer>
{
    void *_data;
}

@property(readonly, nonatomic) void *data; // @synthesize data=_data;
@property(readonly, nonatomic) unsigned long long offset;
@property(nonatomic) void *head;
@property(readonly, nonatomic) unsigned long long available;
- (void)flushStart:(unsigned long long)arg1 amount:(unsigned long long)arg2;
- (id)initWithContext:(id)arg1 size:(unsigned long long)arg2;

// Remaining properties
@property(readonly, nonatomic) IGContext *context;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned int name;
@property(readonly, nonatomic) unsigned long long size;
@property(readonly) Class superclass;

@end


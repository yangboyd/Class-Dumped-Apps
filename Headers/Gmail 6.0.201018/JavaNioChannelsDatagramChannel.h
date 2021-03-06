//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaNioChannelsSpiAbstractSelectableChannel.h"

#import "JavaNioChannelsByteChannel-Protocol.h"
#import "JavaNioChannelsGatheringByteChannel-Protocol.h"
#import "JavaNioChannelsMulticastChannel-Protocol.h"
#import "JavaNioChannelsScatteringByteChannel-Protocol.h"

@class NSString;

@interface JavaNioChannelsDatagramChannel : JavaNioChannelsSpiAbstractSelectableChannel <JavaNioChannelsByteChannel, JavaNioChannelsScatteringByteChannel, JavaNioChannelsGatheringByteChannel, JavaNioChannelsMulticastChannel>
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)openWithJavaNetProtocolFamily:(id)arg1;
+ (id)open;
- (id)getLocalAddress;
- (long long)writeWithJavaNioByteBufferArray:(id)arg1;
- (long long)writeWithJavaNioByteBufferArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (int)writeWithJavaNioByteBuffer:(id)arg1;
- (long long)readWithJavaNioByteBufferArray:(id)arg1;
- (long long)readWithJavaNioByteBufferArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (int)readWithJavaNioByteBuffer:(id)arg1;
- (int)sendWithJavaNioByteBuffer:(id)arg1 withJavaNetSocketAddress:(id)arg2;
- (id)receiveWithJavaNioByteBuffer:(id)arg1;
- (id)getRemoteAddress;
- (id)disconnect;
- (id)connectWithJavaNetSocketAddress:(id)arg1;
- (_Bool)isConnected;
- (id)socket;
- (id)setOptionWithJavaNetSocketOption:(id)arg1 withId:(id)arg2;
- (id)bindWithJavaNetSocketAddress:(id)arg1;
- (int)validOps;
- (id)initWithJavaNioChannelsSpiSelectorProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


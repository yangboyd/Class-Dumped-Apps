//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GCDAsyncSocketDelegate-Protocol.h"
#import "NXSSocket-Protocol.h"

@class GCDAsyncSocket, NSString, NXSConnectionDescriptor;
@protocol NXSSocketDelegate;

@interface NXSBSDSocket : NSObject <GCDAsyncSocketDelegate, NXSSocket>
{
    id <NXSSocketDelegate> delegate;
    GCDAsyncSocket *_socket;
    NXSConnectionDescriptor *_descriptor;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NXSConnectionDescriptor *descriptor; // @synthesize descriptor=_descriptor;
@property(retain, nonatomic) GCDAsyncSocket *socket; // @synthesize socket=_socket;
@property(nonatomic) __weak id <NXSSocketDelegate> delegate; // @synthesize delegate;
- (double)socket:(id)arg1 shouldTimeoutReadWithTag:(long long)arg2 elapsed:(double)arg3 bytesDone:(unsigned long long)arg4;
- (void)socketDidDisconnect:(id)arg1 withError:(id)arg2;
- (void)socket:(id)arg1 didReadData:(id)arg2 withTag:(long long)arg3;
- (void)socketDidSecure:(id)arg1;
- (void)socket:(id)arg1 didConnectToHost:(id)arg2 port:(unsigned short)arg3;
- (void)writeData:(id)arg1 timeout:(double)arg2;
- (void)readDataToLength:(unsigned long long)arg1 timeout:(double)arg2 field:(unsigned long long)arg3;
- (void)disconnect;
- (void)connectWithDescriptor:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


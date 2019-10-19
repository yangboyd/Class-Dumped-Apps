//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface IDA4APacketQueue : NSObject
{
    unsigned long long _totalEnqueuedPacketLength;
    NSMutableArray *_packetQueue;
    NSMutableArray *_urgentPacketQueue;
}

@property(readonly) NSMutableArray *urgentPacketQueue; // @synthesize urgentPacketQueue=_urgentPacketQueue;
@property(readonly) NSMutableArray *packetQueue; // @synthesize packetQueue=_packetQueue;
@property unsigned long long totalEnqueuedPacketLength; // @synthesize totalEnqueuedPacketLength=_totalEnqueuedPacketLength;
- (void).cxx_destruct;
- (id)queueForDequeueingPacket;
- (id)queueForEnqueueingPacket:(_Bool)arg1;
- (id)description;
- (id)dequeue;
- (void)enqueue:(id)arg1;
- (id)init;

@end


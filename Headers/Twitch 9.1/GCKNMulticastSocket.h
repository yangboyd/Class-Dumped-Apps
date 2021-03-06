//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCKNUDPSocket.h"

__attribute__((visibility("hidden")))
@interface GCKNMulticastSocket : GCKNUDPSocket
{
    unsigned short _port;
    unsigned char _ttl;
    _Bool _loopbackEnabled;
}

@property(nonatomic) _Bool loopbackEnabled; // @synthesize loopbackEnabled=_loopbackEnabled;
- (_Bool)leaveMulticastGroup:(id)arg1 onNetworkInterface:(id)arg2 error:(id *)arg3;
- (_Bool)leaveMulticastGroup:(id)arg1 error:(id *)arg2;
- (_Bool)joinMulticastGroup:(id)arg1 onNetworkInterface:(id)arg2 error:(id *)arg3;
- (_Bool)joinMulticastGroup:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) unsigned char TTL;
- (id)initWithAddressType:(long long)arg1 localPort:(unsigned short)arg2 TTL:(unsigned char)arg3;

@end


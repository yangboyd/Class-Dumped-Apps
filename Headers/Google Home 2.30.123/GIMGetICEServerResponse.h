//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GIMICEConfiguration, GIMICEServer, GIMResponseHeader;

@interface GIMGetICEServerResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasHeader; // @dynamic hasHeader;
@property(nonatomic) _Bool hasIceConfig; // @dynamic hasIceConfig;
@property(nonatomic) _Bool hasServer; // @dynamic hasServer;
@property(retain, nonatomic) GIMResponseHeader *header; // @dynamic header;
@property(retain, nonatomic) GIMICEConfiguration *iceConfig; // @dynamic iceConfig;
@property(nonatomic) int iceTransportPolicy; // @dynamic iceTransportPolicy;
@property(retain, nonatomic) GIMICEServer *server; // @dynamic server;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GIMId, GIMResponseHeader, NSData;

@interface GIMGetPairingDataResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasHeader; // @dynamic hasHeader;
@property(nonatomic) _Bool hasTempId; // @dynamic hasTempId;
@property(retain, nonatomic) GIMResponseHeader *header; // @dynamic header;
@property(copy, nonatomic) NSData *pairingPayload; // @dynamic pairingPayload;
@property(retain, nonatomic) GIMId *tempId; // @dynamic tempId;

@end


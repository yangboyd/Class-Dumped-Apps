//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class MSPNamedFeature, MSPSrpFeatureData, MSPTextToSpeech, RPCStatus;

@interface MSPGetRenderedCardsStreamingResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool finalResponse; // @dynamic finalResponse;
@property(nonatomic) _Bool hasFinalResponse; // @dynamic hasFinalResponse;
@property(nonatomic) _Bool hasStatus; // @dynamic hasStatus;
@property(retain, nonatomic) MSPNamedFeature *namedFeature; // @dynamic namedFeature;
@property(readonly, nonatomic) int responseOneofOneOfCase; // @dynamic responseOneofOneOfCase;
@property(retain, nonatomic) MSPSrpFeatureData *srpFeatureData; // @dynamic srpFeatureData;
@property(retain, nonatomic) RPCStatus *status; // @dynamic status;
@property(retain, nonatomic) MSPTextToSpeech *textToSpeech; // @dynamic textToSpeech;

@end


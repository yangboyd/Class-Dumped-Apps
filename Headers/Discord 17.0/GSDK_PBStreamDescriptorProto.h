//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GSDK_PBGeneratedMessage.h"

@class GSDK_PBStreamOptions, NSString;

@interface GSDK_PBStreamDescriptorProto : GSDK_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSString *clientMessageType; // @dynamic clientMessageType;
@property(nonatomic) _Bool hasClientMessageType; // @dynamic hasClientMessageType;
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(nonatomic) _Bool hasOptions; // @dynamic hasOptions;
@property(nonatomic) _Bool hasServerMessageType; // @dynamic hasServerMessageType;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) GSDK_PBStreamOptions *options; // @dynamic options;
@property(retain, nonatomic) NSString *serverMessageType; // @dynamic serverMessageType;

@end


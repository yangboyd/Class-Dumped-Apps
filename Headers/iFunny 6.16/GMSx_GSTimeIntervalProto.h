//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/GMSx_GPBMessage.h>

@class GMSx_GSTimeEndpointProto;

@interface GMSx_GSTimeIntervalProto : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GMSx_GSTimeEndpointProto *begin; // @dynamic begin;
@property(retain, nonatomic) GMSx_GSTimeEndpointProto *end; // @dynamic end;
@property(nonatomic) _Bool hasBegin; // @dynamic hasBegin;
@property(nonatomic) _Bool hasEnd; // @dynamic hasEnd;
@property(nonatomic) _Bool hasInverted; // @dynamic hasInverted;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(nonatomic) _Bool inverted; // @dynamic inverted;
@property(nonatomic) int type; // @dynamic type;

@end


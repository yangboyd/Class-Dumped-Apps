//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class DrishtiTimeHistogram, NSString;

@interface DrishtiStreamProfile : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool backEdge; // @dynamic backEdge;
@property(nonatomic) _Bool hasBackEdge; // @dynamic hasBackEdge;
@property(nonatomic) _Bool hasLatency; // @dynamic hasLatency;
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(retain, nonatomic) DrishtiTimeHistogram *latency; // @dynamic latency;
@property(copy, nonatomic) NSString *name; // @dynamic name;

@end


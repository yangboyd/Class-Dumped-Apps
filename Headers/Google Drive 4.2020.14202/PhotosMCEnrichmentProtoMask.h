//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class PhotosMCBreakEnrichmentMask, PhotosMCLocationEnrichmentMask, PhotosMCMapEnrichmentMask, PhotosMCNarrativeEnrichmentMask;

@interface PhotosMCEnrichmentProtoMask : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) PhotosMCBreakEnrichmentMask *breakEnrichment; // @dynamic breakEnrichment;
@property(nonatomic) _Bool hasBreakEnrichment; // @dynamic hasBreakEnrichment;
@property(nonatomic) _Bool hasLocationEnrichment; // @dynamic hasLocationEnrichment;
@property(nonatomic) _Bool hasMapEnrichment; // @dynamic hasMapEnrichment;
@property(nonatomic) _Bool hasNarrativeEnrichment; // @dynamic hasNarrativeEnrichment;
@property(retain, nonatomic) PhotosMCLocationEnrichmentMask *locationEnrichment; // @dynamic locationEnrichment;
@property(retain, nonatomic) PhotosMCMapEnrichmentMask *mapEnrichment; // @dynamic mapEnrichment;
@property(retain, nonatomic) PhotosMCNarrativeEnrichmentMask *narrativeEnrichment; // @dynamic narrativeEnrichment;

@end


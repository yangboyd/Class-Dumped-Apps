//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class ComGoogleAppsDynamiteV1BackendDataLocationConfig_AllowedLocation, ComGoogleAppsDynamiteV1BackendDataLocationUpdateLog_Source;

@protocol ComGoogleAppsDynamiteV1BackendDataLocationUpdateLogOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (ComGoogleAppsDynamiteV1BackendDataLocationConfig_AllowedLocation *)getDesiredLocation;
- (_Bool)hasDesiredLocation;
- (ComGoogleAppsDynamiteV1BackendDataLocationConfig_AllowedLocation *)getOriginalLocation;
- (_Bool)hasOriginalLocation;
- (ComGoogleAppsDynamiteV1BackendDataLocationUpdateLog_Source *)getChangeSource;
- (_Bool)hasChangeSource;
@end


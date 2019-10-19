//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTParser-Protocol.h"

@class MLHLSAttributeListParser, NSError, NSMutableArray, NSScanner, NSString;

@interface MLHLSMasterPlaylistParser : NSObject <YTParser>
{
    NSScanner *_scanner;
    NSString *_lastStreamInf;
    NSMutableArray *_mediaTags;
    NSMutableArray *_remotePlaylists;
    _Bool _hasIndependentSegments;
    NSError *_error;
    MLHLSAttributeListParser *_attributeListParser;
}

- (void).cxx_destruct;
- (id)qualityLabelForItag:(int)arg1;
- (int)estimateAudioBitrateForItag:(int)arg1;
- (id)remotePlaylistFromURLString:(id)arg1 streamInf:(id)arg2;
- (void)parseURL;
- (void)parseMediaTag;
- (void)parseStreamInfTag;
- (void)parseLine;
- (void)reset;
- (id)parseFromString:(id)arg1 error:(id *)arg2;
- (id)parse:(id)arg1 error:(id *)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


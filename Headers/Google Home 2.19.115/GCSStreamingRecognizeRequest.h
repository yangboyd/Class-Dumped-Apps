//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GCSStreamingRecognitionConfig, NSData, NSString;

@interface GCSStreamingRecognizeRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *audioContent; // @dynamic audioContent;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) GCSStreamingRecognitionConfig *streamingConfig; // @dynamic streamingConfig;
@property(readonly, nonatomic) int streamingRequestOneOfCase; // @dynamic streamingRequestOneOfCase;

@end


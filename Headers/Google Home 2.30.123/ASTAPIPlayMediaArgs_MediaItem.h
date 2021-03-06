//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ASTAPIProtobuf, ASTCTMediaItemMetadata, ASTCTProvider, GPBInt32Array, NSMutableArray, NSString;

@interface ASTAPIPlayMediaArgs_MediaItem : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasIntroAudioChannel; // @dynamic hasIntroAudioChannel;
@property(nonatomic) _Bool hasItu1770LoudnessDb; // @dynamic hasItu1770LoudnessDb;
@property(nonatomic) _Bool hasMediaId; // @dynamic hasMediaId;
@property(nonatomic) _Bool hasMetadata; // @dynamic hasMetadata;
@property(nonatomic) _Bool hasOnDeviceMediaItemUri; // @dynamic hasOnDeviceMediaItemUri;
@property(nonatomic) _Bool hasProvider; // @dynamic hasProvider;
@property(nonatomic) _Bool hasSearchQuery; // @dynamic hasSearchQuery;
@property(nonatomic) _Bool hasStartOffsetMs; // @dynamic hasStartOffsetMs;
@property(nonatomic) _Bool hasUri; // @dynamic hasUri;
@property(nonatomic) int introAudioChannel; // @dynamic introAudioChannel;
@property(retain, nonatomic) GPBInt32Array *introAudioChannelsArray; // @dynamic introAudioChannelsArray;
@property(readonly, nonatomic) unsigned long long introAudioChannelsArray_Count; // @dynamic introAudioChannelsArray_Count;
@property(retain, nonatomic) NSMutableArray *introUriArray; // @dynamic introUriArray;
@property(readonly, nonatomic) unsigned long long introUriArray_Count; // @dynamic introUriArray_Count;
@property(nonatomic) float itu1770LoudnessDb; // @dynamic itu1770LoudnessDb;
@property(copy, nonatomic) NSString *mediaId; // @dynamic mediaId;
@property(retain, nonatomic) ASTCTMediaItemMetadata *metadata; // @dynamic metadata;
@property(retain, nonatomic) ASTAPIProtobuf *onDeviceMediaItemUri; // @dynamic onDeviceMediaItemUri;
@property(retain, nonatomic) NSMutableArray *outroUriArray; // @dynamic outroUriArray;
@property(readonly, nonatomic) unsigned long long outroUriArray_Count; // @dynamic outroUriArray_Count;
@property(retain, nonatomic) ASTCTProvider *provider; // @dynamic provider;
@property(copy, nonatomic) NSString *searchQuery; // @dynamic searchQuery;
@property(nonatomic) long long startOffsetMs; // @dynamic startOffsetMs;
@property(copy, nonatomic) NSString *uri; // @dynamic uri;

@end


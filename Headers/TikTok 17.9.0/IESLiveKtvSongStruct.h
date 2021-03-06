//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class IESLiveKtvSongStruct_AudioInfo, NSMutableArray, NSString;

@interface IESLiveKtvSongStruct : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) IESLiveKtvSongStruct_AudioInfo *accompanimentTrack; // @dynamic accompanimentTrack;
@property(copy, nonatomic) NSString *author; // @dynamic author;
@property(copy, nonatomic) NSString *coverURL; // @dynamic coverURL;
@property(nonatomic) long long duration; // @dynamic duration;
@property(retain, nonatomic) IESLiveKtvSongStruct_AudioInfo *fullTrack; // @dynamic fullTrack;
@property(nonatomic) _Bool hasAccompanimentTrack; // @dynamic hasAccompanimentTrack;
@property(nonatomic) _Bool hasFullTrack; // @dynamic hasFullTrack;
@property(nonatomic) long long id_p; // @dynamic id_p;
@property(nonatomic) long long lyricType; // @dynamic lyricType;
@property(retain, nonatomic) NSMutableArray *lyricURLListArray; // @dynamic lyricURLListArray;
@property(readonly, nonatomic) unsigned long long lyricURLListArray_Count; // @dynamic lyricURLListArray_Count;
@property(copy, nonatomic) NSString *midiURL; // @dynamic midiURL;
@property(copy, nonatomic) NSString *newCoverURL; // @dynamic newCoverURL;
@property(nonatomic) double previewStartTime; // @dynamic previewStartTime;
@property(nonatomic) long long songPattern; // @dynamic songPattern;
@property(copy, nonatomic) NSString *songURL; // @dynamic songURL;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end


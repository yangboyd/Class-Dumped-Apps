//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class VideoEditorState;

@interface VideoEditorEvent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasVideoEditorEventType; // @dynamic hasVideoEditorEventType;
@property(nonatomic) _Bool hasVideoEditorState; // @dynamic hasVideoEditorState;
@property(nonatomic) int videoEditorEventType; // @dynamic videoEditorEventType;
@property(retain, nonatomic) VideoEditorState *videoEditorState; // @dynamic videoEditorState;

@end


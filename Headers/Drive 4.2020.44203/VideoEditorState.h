//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class VideoEditorState_StartVideoEditor, VideoEditorState_VideoLoaderStatus, VideoEditorState_VideoRendererStatus;

@interface VideoEditorState : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasStartVideoEditor; // @dynamic hasStartVideoEditor;
@property(nonatomic) _Bool hasVideoLoaderStatus; // @dynamic hasVideoLoaderStatus;
@property(nonatomic) _Bool hasVideoRenderStatus; // @dynamic hasVideoRenderStatus;
@property(retain, nonatomic) VideoEditorState_StartVideoEditor *startVideoEditor; // @dynamic startVideoEditor;
@property(retain, nonatomic) VideoEditorState_VideoLoaderStatus *videoLoaderStatus; // @dynamic videoLoaderStatus;
@property(retain, nonatomic) VideoEditorState_VideoRendererStatus *videoRenderStatus; // @dynamic videoRenderStatus;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTICroppedSquareThumbnailRenderer, YTIStackRadioThumbnailRenderer, YTIThumbnailSequenceRenderer;

@interface YTIMusicRadioThumbnailSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTICroppedSquareThumbnailRenderer *croppedSquareThumbnailRenderer; // @dynamic croppedSquareThumbnailRenderer;
@property(readonly, nonatomic) int rendererOneOfCase; // @dynamic rendererOneOfCase;
@property(retain, nonatomic) YTIStackRadioThumbnailRenderer *stackRadioThumbnailRenderer; // @dynamic stackRadioThumbnailRenderer;
@property(retain, nonatomic) YTIThumbnailSequenceRenderer *thumbnailSequenceRenderer; // @dynamic thumbnailSequenceRenderer;

@end


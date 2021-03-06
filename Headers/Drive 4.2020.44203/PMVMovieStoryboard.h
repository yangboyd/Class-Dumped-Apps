//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class NSMutableArray, PMVEffectBank, PMVEffectProto;

@interface PMVMovieStoryboard : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *audioClipsArray; // @dynamic audioClipsArray;
@property(readonly, nonatomic) unsigned long long audioClipsArray_Count; // @dynamic audioClipsArray_Count;
@property(nonatomic) _Bool hasMinimumSupportedRendererVersion; // @dynamic hasMinimumSupportedRendererVersion;
@property(nonatomic) _Bool hasOutputHeight; // @dynamic hasOutputHeight;
@property(nonatomic) _Bool hasOutputWidth; // @dynamic hasOutputWidth;
@property(nonatomic) _Bool hasOverallVisualEffect; // @dynamic hasOverallVisualEffect;
@property(nonatomic) _Bool hasVisualEffects; // @dynamic hasVisualEffects;
@property(nonatomic) int minimumSupportedRendererVersion; // @dynamic minimumSupportedRendererVersion;
@property(nonatomic) int outputHeight; // @dynamic outputHeight;
@property(nonatomic) int outputWidth; // @dynamic outputWidth;
@property(retain, nonatomic) PMVEffectProto *overallVisualEffect; // @dynamic overallVisualEffect;
@property(retain, nonatomic) NSMutableArray *overallVisualEffectParamsArray; // @dynamic overallVisualEffectParamsArray;
@property(readonly, nonatomic) unsigned long long overallVisualEffectParamsArray_Count; // @dynamic overallVisualEffectParamsArray_Count;
@property(retain, nonatomic) NSMutableArray *visualClipsArray; // @dynamic visualClipsArray;
@property(readonly, nonatomic) unsigned long long visualClipsArray_Count; // @dynamic visualClipsArray_Count;
@property(retain, nonatomic) PMVEffectBank *visualEffects; // @dynamic visualEffects;

@end


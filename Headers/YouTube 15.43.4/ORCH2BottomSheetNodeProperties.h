//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class ORCH2RenderingModeHeightProperties, ORCH2RenderingModeStateProperties;

@interface ORCH2BottomSheetNodeProperties : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasRenderingMode; // @dynamic hasRenderingMode;
@property(nonatomic) _Bool hasUserDraggable; // @dynamic hasUserDraggable;
@property(retain, nonatomic) ORCH2RenderingModeHeightProperties *heightModeProperties; // @dynamic heightModeProperties;
@property(readonly, nonatomic) int propertiesOneOfCase; // @dynamic propertiesOneOfCase;
@property(nonatomic) int renderingMode; // @dynamic renderingMode;
@property(retain, nonatomic) ORCH2RenderingModeStateProperties *stateModeProperties; // @dynamic stateModeProperties;
@property(nonatomic) _Bool userDraggable; // @dynamic userDraggable;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTIAddToPlaylistCreateActionSupportedRenderers, YTIAddToPlaylistCreateNameSupportedRenderers, YTIAddToPlaylistCreatePrivacySupportedRenderers, YTIAddToPlaylistOpenCreateSupportedRenderers, YTICommand;

@interface YTIAddToPlaylistCreateRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIAddToPlaylistCreateActionSupportedRenderers *createAction; // @dynamic createAction;
@property(nonatomic) _Bool hasCreateAction; // @dynamic hasCreateAction;
@property(nonatomic) _Bool hasNameInput; // @dynamic hasNameInput;
@property(nonatomic) _Bool hasOpenCreateLink; // @dynamic hasOpenCreateLink;
@property(nonatomic) _Bool hasPrivacyInput; // @dynamic hasPrivacyInput;
@property(nonatomic) _Bool hasServiceEndpoint; // @dynamic hasServiceEndpoint;
@property(retain, nonatomic) YTIAddToPlaylistCreateNameSupportedRenderers *nameInput; // @dynamic nameInput;
@property(retain, nonatomic) YTIAddToPlaylistOpenCreateSupportedRenderers *openCreateLink; // @dynamic openCreateLink;
@property(retain, nonatomic) YTIAddToPlaylistCreatePrivacySupportedRenderers *privacyInput; // @dynamic privacyInput;
@property(retain, nonatomic) YTICommand *serviceEndpoint; // @dynamic serviceEndpoint;

@end


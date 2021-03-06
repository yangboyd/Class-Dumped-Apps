//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IESEffectModel, NSDictionary, NSString;

@interface IESLiveAnchorRoomConfigContext : NSObject
{
    _Bool _hasPlaybackAuth;
    _Bool _hasAudienceRecoredAuth;
    _Bool _revertLive;
    IESEffectModel *_entryCakeSticker;
    NSString *_liveAdditionalPrompt;
    NSDictionary *_sourceParams;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *sourceParams; // @synthesize sourceParams=_sourceParams;
@property(copy, nonatomic) NSString *liveAdditionalPrompt; // @synthesize liveAdditionalPrompt=_liveAdditionalPrompt;
@property(nonatomic, getter=isRevertLive) _Bool revertLive; // @synthesize revertLive=_revertLive;
@property(nonatomic) _Bool hasAudienceRecoredAuth; // @synthesize hasAudienceRecoredAuth=_hasAudienceRecoredAuth;
@property(nonatomic) _Bool hasPlaybackAuth; // @synthesize hasPlaybackAuth=_hasPlaybackAuth;
@property(retain, nonatomic) IESEffectModel *entryCakeSticker; // @synthesize entryCakeSticker=_entryCakeSticker;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ACCMusicModuleConfig-Protocol.h"

@class NSString;

@interface ACCMusicModuleConfigTikTok : NSObject <ACCMusicModuleConfig>
{
}

- (struct MusicServiceURL)musicURL;
- (_Bool)forbidUploadAnything;
- (_Bool)allowMusicInRouter;
- (_Bool)shouldUseCommerceMusic;
- (_Bool)needUseMusicRecommend;
- (_Bool)needPrefetchHotMusicList;
- (_Bool)allowSearchMusic;
- (_Bool)forbidUploadAIFrames;
- (_Bool)recordSelectMusicShouldHideCellMoreButton;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseServiceContainer.h"

#import "ACCKidsEditContainerProtocol-Protocol.h"
#import "ACCKidsRecorderContainerProtocol-Protocol.h"

@class NSString;

@interface TikTokKidsStudioBaseServiceContainer : AWEBaseServiceContainer <ACCKidsEditContainerProtocol, ACCKidsRecorderContainerProtocol>
{
}

+ (id)sharedContainer;
- (id)provideACCNetServiceProtocolWithArguments:(id)arg1;
- (id)provideACCVideoEditMusicConfigWithArguments:(id)arg1;
- (id)provideACCInfoStickerComponentConfigProtocolWithArguments:(id)arg1;
- (id)provideACCVideoEditTipsComponentConfigWithArguments:(id)arg1;
- (id)provideACCEditServicesAssemblerProtocolWithArguments:(id)arg1;
- (id)provideACCEditComponentFactoryProtocolWithArguments:(id)arg1;
- (id)provideACCKidsEditTemplateWithArguments:(id)arg1;
- (id)provideTikTokStudioGalleryConfigProtocolWithArguments:(id)arg1;
- (id)provideSingletonTikTokStudioUserCenterServiceProtocolWithArguments:(id)arg1;
- (id)provideACCSelectMusicProtocolWithArguments:(id)arg1;
- (id)provideACCMusicModuleConfigWithArguments:(id)arg1;
- (id)provideTikTokStudioPublishServiceConfigProtocolWithArguments:(id)arg1;
- (id)provideACCRecordSwitchModeTabConfigWithArguments:(id)arg1;
- (id)provideACCRecordUploadButtonComponentConfigWithArguments:(id)arg1;
- (id)provideACCStickerComponentConfigProtocolWithArguments:(id)arg1;
- (id)provideTikTokStudioRecorderServiceProtocolWithArguments:(id)arg1;
- (id)provideACCServiceAssemblerWithArguments:(id)arg1;
- (id)provideACCRecorderComponentFactoryProtocolWithArguments:(id)arg1;
- (id)provideACCKidsRecorderTemplateWithArguments:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


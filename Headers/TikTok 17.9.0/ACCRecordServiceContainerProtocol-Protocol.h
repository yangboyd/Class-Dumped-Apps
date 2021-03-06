//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray;
@protocol ACCBeautyComponentConfigProtocol, ACCCaptureComponentConfigProtocol, ACCFilterComponentConfigProtocol, ACCRecordSwitchModeTabConfig, ACCRecorderComponentFactoryProtocol, ACCServiceAssembler, ACCStickerComponentConfigProtocol, ACCVideoRecorderTemplate;

@protocol ACCRecordServiceContainerProtocol <NSObject>
- (id <ACCServiceAssembler>)provideACCServiceAssemblerWithArguments:(NSArray *)arg1;
- (id <ACCRecorderComponentFactoryProtocol>)provideACCRecorderComponentFactoryProtocolWithArguments:(NSArray *)arg1;
- (id <ACCRecordSwitchModeTabConfig>)provideACCRecordSwitchModeTabConfigWithArguments:(NSArray *)arg1;
- (id <ACCCaptureComponentConfigProtocol>)provideACCCaptureComponentConfigProtocolWithArguments:(NSArray *)arg1;
- (id <ACCFilterComponentConfigProtocol>)provideACCFilterComponentConfigProtocolWithArguments:(NSArray *)arg1;
- (id <ACCBeautyComponentConfigProtocol>)provideACCBeautyComponentConfigProtocolWithArguments:(NSArray *)arg1;
- (id <ACCStickerComponentConfigProtocol>)provideACCStickerComponentConfigProtocolWithArguments:(NSArray *)arg1;
- (id <ACCVideoRecorderTemplate>)provideACCVideoRecorderTemplateWithArguments:(NSArray *)arg1;
@end


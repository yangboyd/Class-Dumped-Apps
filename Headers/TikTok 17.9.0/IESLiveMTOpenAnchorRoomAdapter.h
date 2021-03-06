//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IESLiveMTHotsoonRoomAPI, NSDictionary;
@protocol IESLiveCreateRoomPreCheckService, IESLiveFullLinkMonitor, IESLiveGuideShopFactory, IESLiveMonitor, IESLiveToastFactory, IESLiveUserService, IESLiveVerifyConfig;

@interface IESLiveMTOpenAnchorRoomAdapter : NSObject
{
    NSDictionary *_createRoomExtraParams;
    id <IESLiveUserService> _userService;
    IESLiveMTHotsoonRoomAPI *_api;
    id <IESLiveGuideShopFactory> _guideShopFactory;
    id <IESLiveCreateRoomPreCheckService> _preCheckService;
    id <IESLiveMonitor> _monitor;
    id <IESLiveVerifyConfig> _verifyConfig;
    id <IESLiveToastFactory> _toastFactory;
    unsigned long long _createRoomType;
    id <IESLiveFullLinkMonitor> _fullLinkMonitor;
}

+ (id)sharedAdapter;
- (void).cxx_destruct;
@property(retain, nonatomic) id <IESLiveFullLinkMonitor> fullLinkMonitor; // @synthesize fullLinkMonitor=_fullLinkMonitor;
@property(nonatomic) unsigned long long createRoomType; // @synthesize createRoomType=_createRoomType;
@property(retain, nonatomic) id <IESLiveToastFactory> toastFactory; // @synthesize toastFactory=_toastFactory;
@property(retain, nonatomic) id <IESLiveVerifyConfig> verifyConfig; // @synthesize verifyConfig=_verifyConfig;
@property(retain, nonatomic) id <IESLiveMonitor> monitor; // @synthesize monitor=_monitor;
@property(retain, nonatomic) id <IESLiveCreateRoomPreCheckService> preCheckService; // @synthesize preCheckService=_preCheckService;
@property(retain, nonatomic) id <IESLiveGuideShopFactory> guideShopFactory; // @synthesize guideShopFactory=_guideShopFactory;
@property(retain, nonatomic) IESLiveMTHotsoonRoomAPI *api; // @synthesize api=_api;
@property(retain, nonatomic) id <IESLiveUserService> userService; // @synthesize userService=_userService;
@property(copy, nonatomic) NSDictionary *createRoomExtraParams; // @synthesize createRoomExtraParams=_createRoomExtraParams;
- (void)p_setupCreateRoomExtraParamsJust4Once;
- (_Bool)isValidRoom:(id)arg1;
- (id)mediaTypeFromLiveType:(unsigned long long)arg1;
- (unsigned long long)mapFromHTSLiveType:(unsigned long long)arg1;
- (void)handleCreateRoomError:(id)arg1 checkInfo:(id)arg2;
- (void)roomCreated:(id)arg1 withError:(id)arg2 checkInfo:(id)arg3 mediaType:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)createRoomWithType:(unsigned long long)arg1 openLiveModel:(id)arg2 enableShop:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)createGameLivingRoomWithTitle:(id)arg1 gameModel:(id)arg2 coverURI:(id)arg3 enableShop:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)create3rdPartyRoomWithTitle:(id)arg1 coverURI:(id)arg2 tagModel:(id)arg3 enableShop:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)createVideoRoomWithTitle:(id)arg1 coverURI:(id)arg2 tagModel:(id)arg3 enableShop:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)createAudioRoomWithTitle:(id)arg1 coverURI:(id)arg2 tagModel:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)init;

@end


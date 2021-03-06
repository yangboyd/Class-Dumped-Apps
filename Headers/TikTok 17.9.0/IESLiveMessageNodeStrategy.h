//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IESLiveMessageNodeStrategy-Protocol.h"

@class GPBMessage, HTSEventContext, IESLiveMTBadgeFactory, IESLiveMTEmojiTextParser, IESLiveMTTemplateEngineConfiguration, NSParagraphStyle, NSString;
@protocol IESLiveMTGiftManagerService, IESLiveMTTemplateProvider, IESLiveSettings, IESLiveUserService;

@interface IESLiveMessageNodeStrategy : NSObject <IESLiveMessageNodeStrategy>
{
    _Bool _isAnchor;
    _Bool _messageStyleSwitch;
    _Bool _enableMutiLines;
    GPBMessage *_message;
    double _messageListWidth;
    NSParagraphStyle *_paragraphStyle;
    double _liveFontSize;
    HTSEventContext *_eventContext;
    CDUnknownBlockType _loadBadgesBlock;
    CDUnknownBlockType _loadOtherBlock;
    CDUnknownBlockType _loadGiftBlock;
    double _messageLayoutWidth;
    long long _followStatus;
    id <IESLiveSettings> _settings;
    id <IESLiveUserService> _userService;
    id <IESLiveMTTemplateProvider> _templateProvider;
    id <IESLiveMTGiftManagerService> _giftManagerService;
    IESLiveMTBadgeFactory *_badgeFactory;
    IESLiveMTEmojiTextParser *_emoticonParser;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IESLiveMTEmojiTextParser *emoticonParser; // @synthesize emoticonParser=_emoticonParser;
@property(retain, nonatomic) IESLiveMTBadgeFactory *badgeFactory; // @synthesize badgeFactory=_badgeFactory;
@property(retain, nonatomic) id <IESLiveMTGiftManagerService> giftManagerService; // @synthesize giftManagerService=_giftManagerService;
@property(retain, nonatomic) id <IESLiveMTTemplateProvider> templateProvider; // @synthesize templateProvider=_templateProvider;
@property(retain, nonatomic) id <IESLiveUserService> userService; // @synthesize userService=_userService;
@property(retain, nonatomic) id <IESLiveSettings> settings; // @synthesize settings=_settings;
@property(nonatomic) long long followStatus; // @synthesize followStatus=_followStatus;
@property(nonatomic) double messageLayoutWidth; // @synthesize messageLayoutWidth=_messageLayoutWidth;
@property(nonatomic) _Bool enableMutiLines; // @synthesize enableMutiLines=_enableMutiLines;
@property(copy, nonatomic) CDUnknownBlockType loadGiftBlock; // @synthesize loadGiftBlock=_loadGiftBlock;
@property(copy, nonatomic) CDUnknownBlockType loadOtherBlock; // @synthesize loadOtherBlock=_loadOtherBlock;
@property(copy, nonatomic) CDUnknownBlockType loadBadgesBlock; // @synthesize loadBadgesBlock=_loadBadgesBlock;
@property(retain, nonatomic) HTSEventContext *eventContext; // @synthesize eventContext=_eventContext;
@property(nonatomic) _Bool messageStyleSwitch; // @synthesize messageStyleSwitch=_messageStyleSwitch;
@property(nonatomic) double liveFontSize; // @synthesize liveFontSize=_liveFontSize;
@property(retain, nonatomic) NSParagraphStyle *paragraphStyle; // @synthesize paragraphStyle=_paragraphStyle;
@property(nonatomic) double messageListWidth; // @synthesize messageListWidth=_messageListWidth;
@property(nonatomic) _Bool isAnchor; // @synthesize isAnchor=_isAnchor;
@property(retain, nonatomic) GPBMessage *message; // @synthesize message=_message;
- (id)replaceUserDisplayName:(id)arg1 srcUserName:(id)arg2 dstUserName:(id)arg3;
- (_Bool)shouldReplaceDisplayName;
- (id)getDisplayText;
@property(readonly, nonatomic) IESLiveMTTemplateEngineConfiguration *config;
- (id)localContentColor;
- (id)localNameColor;
- (_Bool)isMyMessage;
- (void)resetMessageNode:(id)arg1 useDisplayText:(_Bool)arg2;
- (struct CGRect)getClickRect:(id)arg1 userPiece:(id)arg2 isRTLString:(_Bool)arg3;
- (void)updateNodeSize:(id)arg1;
- (id)updateMessageWithServerNode:(id)arg1;
- (id)createNodeOfServer;
- (void)appendSufix:(id)arg1;
- (void)updateAttributedString:(id)arg1;
- (id)attributedStringOfTextIcon:(id)arg1;
- (void)jointMetalWithNode:(id)arg1;
- (id)jointAttributedString:(id)arg1;
- (id)updateMessageWithLocalNode:(id)arg1;
- (id)createNodeOfLocal;
- (_Bool)filter;
- (void)didSetAttachingDIContext;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


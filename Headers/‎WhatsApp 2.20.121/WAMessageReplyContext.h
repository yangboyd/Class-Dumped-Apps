//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSString, UIColor, UIImage, WAJID, WAMessageQuotedItem, WAPaymentMessageIconInfo, WASticker, WAUserJID;

@interface WAMessageReplyContext : NSObject
{
    NSAttributedString *_cachedAttributedStringForPreview;
    NSAttributedString *_cachedAttributedStringForBubble;
    WAUserJID *_vCardJID;
    UIImage *_fallbackThumbnailImage;
    int _fallbackMessageType;
    int _fallbackMediaOrigin;
    _Bool _fallbackIsStatus;
    _Bool _fallbackIsFromMe;
    WAPaymentMessageIconInfo *_fallbackMessagePaymentIconInfo;
    _Bool _isReplyToMessageInDifferentChat;
    WAJID *_sourceJID;
    WASticker *_fallbackSticker;
    CDUnknownBlockType _pendingThumbnailCompletionBlock;
    _Bool _hasVerifiedBadge;
    _Bool _rendersLargeEmoji;
    UIColor *_color;
    UIColor *_senderNameColor;
    WAMessageQuotedItem *_quotedItem;
    NSString *_senderName;
    NSString *_senderPushName;
    NSAttributedString *_snippet;
}

+ (id)textFormatter;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool rendersLargeEmoji; // @synthesize rendersLargeEmoji=_rendersLargeEmoji;
@property(readonly, nonatomic) _Bool hasVerifiedBadge; // @synthesize hasVerifiedBadge=_hasVerifiedBadge;
@property(readonly, copy, nonatomic) NSAttributedString *snippet; // @synthesize snippet=_snippet;
@property(readonly, copy, nonatomic) NSString *senderPushName; // @synthesize senderPushName=_senderPushName;
@property(readonly, copy, nonatomic) NSString *senderName; // @synthesize senderName=_senderName;
@property(readonly, nonatomic) WAMessageQuotedItem *quotedItem; // @synthesize quotedItem=_quotedItem;
@property(readonly, nonatomic) UIColor *senderNameColor; // @synthesize senderNameColor=_senderNameColor;
@property(readonly, nonatomic) UIColor *color; // @synthesize color=_color;
- (void)fetchVCardThumbnailWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)configureWithVCardString:(id)arg1;
- (void)loadStickerImage:(id)arg1 stickerAssetManager:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchThumbnailWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool hasThumbnail;
- (id)attributedStringForStyle:(unsigned long long)arg1;
@property(readonly, nonatomic) NSString *sourceChatName;
- (id)formattedSenderNameWithLineBreak:(_Bool)arg1;
@property(readonly, nonatomic, getter=isStatusMessage) _Bool statusMessage;
@property(readonly, nonatomic) int messageType;
- (void)mediaDownloadDidSucceed:(id)arg1;
- (void)fontSizeDidChange:(id)arg1;
- (id)initWithQuotedItem:(id)arg1 forChatJID:(id)arg2;
- (id)initWithMessageReply:(id)arg1;

@end


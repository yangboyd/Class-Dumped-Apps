//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEIMMessage.h"

@class AWEIMEncryptedImageContent, UIImage;

@interface AWEIMEncryptedImageMessage : AWEIMMessage
{
    AWEIMEncryptedImageContent *_content;
    UIImage *_imageToUploadFromPlatform;
    UIImage *_forwardPreviewImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *forwardPreviewImage; // @synthesize forwardPreviewImage=_forwardPreviewImage;
@property(retain, nonatomic) UIImage *imageToUploadFromPlatform; // @synthesize imageToUploadFromPlatform=_imageToUploadFromPlatform;
@property(retain, nonatomic) AWEIMEncryptedImageContent *content; // @synthesize content=_content;
- (_Bool)isAttachmentAtRemote;
- (_Bool)isAttachmentAtLocal;
- (_Bool)isAttachmentMessage;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct CGSize)getDisplaySizeOfMsg;
- (void)updateWithMessage:(id)arg1;
- (id)getContent;
- (id)getContentDict;
- (id)initWithContentDict:(id)arg1;

@end


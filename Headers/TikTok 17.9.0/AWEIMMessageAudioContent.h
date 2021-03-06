//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEIMMessageContent.h"

#import "AWEIMMessageAudioContentProtocol-Protocol.h"

@class AWEURLModel, NSString;

@interface AWEIMMessageAudioContent : AWEIMMessageContent <AWEIMMessageAudioContentProtocol>
{
    AWEURLModel *_resourceUrl;
    NSString *_md5;
    long long _duration;
}

- (void).cxx_destruct;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(retain, nonatomic) AWEURLModel *resourceUrl; // @synthesize resourceUrl=_resourceUrl;
- (void)updateMessageContentWithUploadedFileResponse:(id)arg1 fileType:(int)arg2;
- (void)updateMessageContentWithAttachmentMD5:(id)arg1 fileType:(int)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)contentDictionary;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


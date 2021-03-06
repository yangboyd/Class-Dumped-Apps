//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGContentGateableMediaItem-Protocol.h>

@class IGGating, IGMediaOverlayModel, IGUserSession, NSString, NSURL;

@interface IGMediaOverlayableItem : NSObject <IGContentGateableMediaItem>
{
    IGUserSession *_userSession;
    IGGating *_gating;
    NSURL *_imageURL;
    NSString *_mediaId;
    IGMediaOverlayModel *_mediaOverlayInfo;
    _Bool _hasSensitiveMediaRevealed;
    struct CGSize _imageSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(nonatomic) _Bool hasSensitiveMediaRevealed; // @synthesize hasSensitiveMediaRevealed=_hasSensitiveMediaRevealed;
- (id)sharingFrictionInfo;
- (id)mediaOverlayInfo;
- (id)mediaId;
- (id)photo;
- (id)gating;
- (id)initWithUserSession:(id)arg1 gating:(id)arg2 imageURL:(id)arg3 mediaId:(id)arg4 mediaOverlayInfo:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


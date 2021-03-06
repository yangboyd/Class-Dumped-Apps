//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>

@class NSData, NSString, NSURL;

@interface IGDirectOutgoingSelfieSticker : FBIvarBasedEqualityObject <NSCoding>
{
    unsigned long long _subtype;
    NSString *_local_uploadId;
    NSURL *_local_localVideoUrl;
    NSData *_local_photoData;
    NSString *_server_mediaId;
    NSURL *_server_videoUrl;
    NSURL *_server_photoURL;
}

+ (id)serverWithMediaId:(id)arg1 videoUrl:(id)arg2 photoURL:(id)arg3;
+ (id)localWithUploadId:(id)arg1 localVideoUrl:(id)arg2 photoData:(id)arg3;
- (void).cxx_destruct;
- (void)matchLocal:(CDUnknownBlockType)arg1 server:(CDUnknownBlockType)arg2;
- (_Bool)matchBooleanLocal:(CDUnknownBlockType)arg1 server:(CDUnknownBlockType)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

